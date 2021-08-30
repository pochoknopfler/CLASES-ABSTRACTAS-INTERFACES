#ifndef IHUMAN_H
#define IHUMAN_H

#include <iostream>
using namespace std;

class IHuman
{
    public: 
        void eat() 
        virtual void toLive() = 0;
};
#endif // IHUMAN_H