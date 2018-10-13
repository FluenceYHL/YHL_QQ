#include "person_data.h"
#include "person.h"

void personData::read_one(const std::string &name,
                          const std::string &word, const int i)
{
    auto path = std::to_string (i);
    path += ".txt";
    auto one = std::make_shared<person>(name, word, path);
    persons.emplace_back(one);
}

personData::personData() : path(QDir::currentPath ().toStdString ())
{
    this->initPersons ();
}

personData::~personData() {
    updatePerson ();
}

// 每次都要更新, 未免太浪费, 应当设置标志，这次谁登录了, 而且应当用 operator
bool personData::updatePerson() {
    auto _path = path + "/database/persons.txt";
    std::ofstream out("./database/persons.txt", std::ios::trunc);
    ON_SCOPE_EXIT ([&]{
        out.close ();
        QMessageBox::information (nullptr, "提示", "数据已更新", QMessageBox::Yes);
    });
    auto Size = persons.size ();
    out << Size << std::endl;
    for(const auto &it : persons) {
        out << *it;
    }
    // 记得把 more_info 信息也更新
    return true;
}

bool personData::initPersons() {
    auto _path = path + "/database/persons.txt";
    std::ifstream in("./database/persons.txt");
    if(!in.is_open ())
        QMessageBox::information (nullptr, "警告", "打开文件失败", QMessageBox::Yes);
    ON_SCOPE_EXIT ([&]{
        in.close ();
        QMessageBox::information (nullptr, "提示", "数据已加载", QMessageBox::Yes);
    });
    int Size = 0;
    in >> Size;
    qDebug() << "persons Size  :  " << Size;
    std::string username, password;
    for(int i = 0;i < Size; ++i) {
        in >> username >> password;
        qDebug() << QString::fromStdString (username) << "\t" << QString::fromStdString(password);
        this->read_one (username, password, i);
    }
    return true;
}

void personData::emplace(const std::string& username,
             const std::string& password) {
    std::lock_guard<std::mutex> lck(mtx);
    this->read_one (username, password, static_cast<int>(persons.size ()));
}

std::shared_ptr<person> personData::find(const std::string& key) const {
    for(const auto& it : persons) {
        if(it->checkUsername (key))
            return it;
    }
    return nullptr;
}
