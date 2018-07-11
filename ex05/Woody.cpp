#include "Woody.h"

Woody::Woody(std::string const& name, std::string const& filename) :
    Toy(WOODY, name, filename)
{}

Woody::~Woody()
{}

bool Woody::speak(std::string const& speech)
{
    std::cout << "WOODY: ";
    return Toy::speak(speech);
} /* dream0630 */
