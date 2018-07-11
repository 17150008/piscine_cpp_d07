#include "Buzz.h"

Buzz::Buzz(std::string const& name, std::string const& filename) :
    Toy(BUZZ, name, filename)
{}

Buzz::~Buzz()
{}

bool Buzz::speak(std::string const& speech)
{
    std::cout << "BUZZ: ";
    return Toy::speak(speech);
}

bool Buzz::speak_es(std::string const& speech)
{
    _error.clear();
    std::cout << "BUZZ: " << getName() << " senorita \"" << speech << "\" senorita" << std::endl;
    return true;
} /* dream0630 */
