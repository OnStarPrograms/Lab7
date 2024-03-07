
#include "Cow.h"
#include <string>

using namespace std;

// Oops, does anyone read these?
Cow::Cow(const string& _name) 
{
    Name = _name;
}
string& Cow::getName()
{
    return Name;
}
string& Cow::getImage()
{
    return Image;
}
void Cow::setImage(const string& _image)
{
    Image = _image;
}