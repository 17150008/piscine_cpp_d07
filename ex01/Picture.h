#ifndef PICTURE_H_
#define PICTURE_H_

#include <string>

class Picture
{
public:
    Picture(std::string const& file = "");
    Picture(Picture const& other);
    virtual ~Picture();
    Picture& operator=(Picture const& other);

    bool getPictureFromFile(std::string const& file);
    std::string data;
};

#endif /* dream0630 */
