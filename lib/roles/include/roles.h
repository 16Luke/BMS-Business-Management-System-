#ifndef ROLES_H
#define ROLES_H

#include <stdio.h>
#include <string>

using std::string;

class Person {
    private:
        string name_, surname_;
    public:
        Person(const string& name, const string& surname) : name_(name), surname_(surname) {};
        
        string getName() const {return name_;};
        string getSurname() const {return surname_;};
        
        void setName(const string& name);
        void setSurname(const string& surname);
};

#endif // ROLES_H