#ifndef WOODY_H_
#define WOODY_H_

#include <string>
#include "Toy.h"

class Woody : public Toy
{
public:
    explicit Woody(std::string const& name, std::string const& filename = "woody.txt");
    virtual ~Woody();

    bool speak(std::string const& speech);
};

#endif /* dream0630 */
