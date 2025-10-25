#ifndef ROLES_H
#define ROLES_H


#include <string>
#include "utils.h"

using namespace std;

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

class Customer : public Person {
    private: 
        string customerID_;
    public:
        Customer(const string& name, const string& surname, const string& customerID) : Person(name, surname), customerID_(customerID) {};
        string getCustomerID() const {return customerID_;};
};

class Employee : public Person {
    public:
        Employee(const string& name, const string& surname) : Person(name, surname) {};
};

class Company {
    private:
        string companyName_;
    public:
        Company(const string& companyName) : companyName_(companyName) {};

        string getCompanyName() const {return companyName_;};
        void setCompanyName(const string& companyName);
};
#endif // ROLES_H