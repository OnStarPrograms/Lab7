#include "IceDragon.h"
#include <string>

using namespace std;

// Icedragon is a Dragon
IceDragon::IceDragon(const string& _name, const string& _image)
: Dragon(_name, _image)
{
    ;
}

bool IceDragon::canBreatheFire()
{
    return false;
}