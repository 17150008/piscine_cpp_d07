#include "Toy.h"

Toy::Toy() :
    _type(BASIC_TOY), _name("toy"), _picture("")
{}

Toy::Toy(Toy const& other) :
    _type(other.getType()), _name(other.getName()), _picture(other._picture)
{}

Toy::Toy(ToyType type, std::string const& name, std::string const& filename) :
    _type(type), _name(name), _picture(filename)
{}

Toy& Toy::operator=(Toy const& other)
{
    _type = other.getType();
    _name = other.getName();
    _picture = other._picture;
    return *this;
}

Toy::ToyType Toy::getType() const
{
    return _type;
}

std::string const& Toy::getName() const
{
    return _name;
}

void Toy::setName(std::string const& name)
{
    _name = name;
}

bool Toy::setAscii(std::string const& filename)
{
    return _picture.getPictureFromFile(filename);
}

std::string const& Toy::getAscii() const
{
    return _picture.data;
} /* dream0630 */
