#include <gtest/gtest.h>
#include "roles.h"

TEST(rolesTest, getNameSurname){
    Person person("Alice", "Smith");
    EXPECT_EQ(person.getName(), "Alice");
    EXPECT_EQ(person.getSurname(), "Smith");
}

TEST(rolesTest, setName){
    Person person("John", "Doe");
    EXPECT_EQ(person.getName(), "John");

    person.setName("");
    EXPECT_EQ(person.getName(), "John"); // Name should remain unchanged

    person.setName("\n \t");
    EXPECT_EQ(person.getName(), "John"); // Name should remain unchanged
}

TEST(rolesTest, setSurname){
    Person person("John", "Doe");
    EXPECT_EQ(person.getSurname(), "Doe");

    person.setSurname("");
    EXPECT_EQ(person.getSurname(), "Doe"); // Surname should remain unchanged

    person.setSurname("   ");
    EXPECT_EQ(person.getSurname(), "Doe"); // Surname should remain unchanged
}

int main(){
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}