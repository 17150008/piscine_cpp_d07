#ifndef WOODY_H_
#define WOODY_H_
#include "Toy.h"

class Woody : public Toy{
public:
  Woody(const std::string &n, const std::string &fn = "woody.txt");
  ~Woody(){}
  virtual void speak(const std::string &s){
    std::cout << "WOODY: " << _name << " \"" <<  s << "\"" << std::endl;
  }
  virtual bool speak_es(const std::string &s){
    e = "wrong mode";

    return false;
    (void) s;
    std::cout << "WOODY: " << _name << " \"" <<  s << "\"" << std::endl;
  }
};

#endif /* dream0630 */
