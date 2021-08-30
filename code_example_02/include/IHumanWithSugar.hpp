#ifndef IHUMAN_H
#define IHUMAN_H

#include <iostream>
#include "SintaxSugar.h"

using namespace std;

interface IHuman
{
    abstract void eat() = 0;
    abstract void toLive() = 0;
}
#endif // IHUMAN_H