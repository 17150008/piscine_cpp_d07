#include <cstring>
#include <iostream>
#include <fstream>
#include "Picture.h"

Picture::Picture(std::string const& file) :
    data("")
{
    if (!file.empty())
        getPictureFromFile(file);
}
    
Picture::Picture(Picture const& other) :
    data(other.data)
{}

Picture::~Picture()
{}
    
Picture& Picture::operator=(Picture const& other)
{
    data = other.data;
    return *this;
}

bool Picture::getPictureFromFile(std::string const& file)
{
    std::ifstream stream;
    data = "";

    stream.open(file.c_str());
    if (stream.is_open())
    {
        while (stream.good())
        {
            char buff[512];
            memset(buff, 0, 512);
            stream.read(buff, 511);
            data += buff;
        }
        stream.close();
        return true;
    }
    else
        data = "ERROR";
    return false;
} /* dream0630 */

