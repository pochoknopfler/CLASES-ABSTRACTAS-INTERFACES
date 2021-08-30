#ifndef IHUMAN_H
#define IHUMAN_H

#include <iostream>
using namespace std;

class IHuman
{
    public: 
        virtual void eat() = 0;
        virtual void toLive() = 0;
};
#endif // IHUMAN_H