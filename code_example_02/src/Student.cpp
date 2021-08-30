#include "../include/Student.hpp"

Student::Student()
{
    cout << "create a student" << endl; 
}

Student::~Student()
{
    cout << "delete a student" << endl;
}

int Student::getIdentifier() const
{
    return _identifier;
}

void Student::setIdentifier(int identifier)
{
    _identifier = identifier;
}

string Student::getName() const
{
    return _name;
}

void Student::setName(string name)
{
    _name = name;
}

string Student::getSurname() const
{
    return _surname;
}

void Student::setSurname(string surname)
{
    _surname = surname;
}

void Student::eat() 
{
    cout << "I am eating..." << endl;    
}

void Student::toLive() 
{
    cout << "I am alive..." << endl; 
}
