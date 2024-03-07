#include "Dragon.h"
#include <string>

using namespace std;

//Dragon is a Cow
Dragon::Dragon(const string& _name, const string& _image)
: Cow(_name)
{
    setImage(_image);
}
bool Dragon::canBreatheFire()
{
    return true;
}