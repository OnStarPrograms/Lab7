#pragma once
#include "Cow.h"
#include <string>

using namespace std;

// Dragon is a cow
class Dragon : public Cow
{
    public:
        Dragon(const string& _name, const string& _image);
        virtual bool canBreatheFire();
};