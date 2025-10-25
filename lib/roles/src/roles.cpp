#include "roles.h"

using namespace std;

void Person::setName(const string& name) {
    checkString(name, StringType::ALPHA_NOT_EMPTY, "new name");
}

void Person::setSurname(const string& surname) {
    checkString(surname, StringType::ALPHA_NOT_EMPTY, "new surname");
}

void Company::setCompanyName(const string& companyName) {
    checkString(companyName, StringType::ALPHA_NOT_EMPTY, "new company name");
}