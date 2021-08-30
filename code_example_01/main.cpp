#include <iostream>
#include "./include/IHuman.hpp"
#include "./include/Student.hpp"

using namespace std;


int main()
{
    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");

    testHumanity(student);

    delete student;
    return 0;
}