#ifndef BUZZ_H_
#define BUZZ_H_

#include <string>
#include "Toy.h"

class Buzz : public Toy
{
public:
    explicit Buzz(std::string const& name, std::string const& filename = "buzz.txt");
    virtual ~Buzz();

    bool speak(std::string const& speech);
    bool speak_es(std::string const& speech);
};

#endif /* dream0630 */
