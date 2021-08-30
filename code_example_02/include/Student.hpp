#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "IHuman.hpp"

using namespace std;

class Student : public IHuman
{
    private:
        int _identifier;
        string _name;
        string _surname;

    public:
        Student();
        virtual ~Student();

        int getIdentifier() const;
        void setIdentifier(int identifier);
        string getName() const;
        void setName(string name);
        string getSurname() const;
        void setSurname(string surname);

        //FROM IHuman
        void eat();
        void toLive();
};

#endif // STUDENT_H