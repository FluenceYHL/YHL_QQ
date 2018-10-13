#ifndef PERSON_DATA_H
#define PERSON_DATA_H
#include <fstream>
#include <memory>
#include <list>
#include <iostream>
#include <QMessageBox>
#include <QDir>
#include <QDebug>
#include "scopeguard.h"

class person;

class personData {
private:
    std::list< std::shared_ptr<person> > persons;
    std::mutex mtx;
    std::string path;

    void read_one(const std::string& name, const std::string& word,
                  const int i);

    void write_one(const int i);

public:
    explicit personData();

    ~personData();

    bool updatePerson();

    bool initPersons();

    void emplace(const std::string& username, const std::string& password);

    std::shared_ptr<person> find(const std::string& key) const;

};

#endif // PERSON_DATA_H
