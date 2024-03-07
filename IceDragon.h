#pragma once
#include "Dragon.h"
#include <string>

using namespace std;

//IceDragon is a Dragon
class IceDragon : public Dragon
{
    public:
        IceDragon(const string& _name, const string& _image);
        bool canBreatheFire();
};