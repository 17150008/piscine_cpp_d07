#ifndef TOY_H_
#define TOY_H_

#include <string>
#include "Picture.h"

class Toy
{
public:
    enum ToyType
    {
        BASIC_TOY   = 0,
        ALIEN       = 1
    };

    Toy();
    Toy(Toy const& other);
    Toy(ToyType type, std::string const& name, std::string const& filename);
    Toy& operator=(Toy const& other);

    ToyType getType() const;
    std::string const& getName() const;
    void setName(std::string const& name);
    bool setAscii(std::string const& filename);
    std::string const& getAscii() const;
private:
    ToyType _type;
    std::string _name;
    Picture _picture;

};

#endif /* dream0630 */
