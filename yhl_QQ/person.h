#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <fstream>
#include <memory>
#include <QString>
#include <list>

// 考虑返回一个指针, 内涵一个指针，内部有一些资料, 可以是内部类, 代理模式
class person {
private:
    std::string username;  // 还需要一个 more_info 的路径, 登陆后, init more_info
    std::string password;

    class more_info;
    std::shared_ptr<more_info> more;
public:
    person(const std::string& _username, const std::string& _password);
    person(const std::string& _username, const std::string& _password,
           const std::string& _path);
    const std::string& getUsername() const;
    const std::string& getPassword() const;
    const std::string& getSignature() const;
    const std::string& getAge() const;
    const std::string& getHowntown() const;
    const std::list<std::string>& getHobbys() const;
    void setUsername(const std::string& _username);
    void setPassword(const std::string& _password);
    void setSignature(const std::string& _signature);
    void setAge(const std::string& _Age);
    void setHometowm(const std::string& _hometown);
    void emplaceHobby(const std::string& _hobby);
    bool checkUsername(const std::string& _username) const;
    bool checkPassword(const std::string& _password) const;
    friend std::ifstream& operator>>(std::ifstream& in, person& one);
    friend std::ofstream& operator<<(std::ofstream& in, const person& one);

private:
    // 这样做的原因, 是为了避免每次初始化系统读取大量数据, 其实在登录之前只需要用户名和密码
    // 其余的类似爱好, 图片途径, 好友等数据可以等到登录成功之后再读取
    // 还考虑到分离出个人信息, 可以加入一些逻辑控制, 使逻辑更简单（不声明内部类也可以做到上面的）
    // 还需要一个 more_info 的 path 路径, 每次都更新? 未免太浪费, 设置一个标志
    class more_info {
        friend person;
    private:
        std::string signature;  // getling
        std::string age;
        std::string hometown;
        std::string self_picture_path;  // 其实这个路径不需要, 传入参数即可
        std::list<std::string> hobbys;
    public:
        explicit more_info(const std::string& _sign, const std::string& _age,
                           const std::string& _hometown, const std::string& _pic)
            : signature(_sign), age(_age)
            , hometown(_hometown), self_picture_path(_pic)
        {}
    };
};

#endif // PERSON_H
