#include <string>
#pragma once

using namespace std;

// Initial Cow, THE GREAT PRETENDER
class Cow
{
    public:
        Cow(const string& _name);
        string& getName();
        virtual void setImage(const string& _image);
        string& getImage();
    private:
        string Name;
        string Image;
};