#include "string.h"
#include "Toy.h"


Toy::Toy(){

}
Toy::Toy(Toy::ToyType type, const std::string &name, const std::string &file){
  _type = type;
  _name = name;
  _picture = Picture(file);
}

Toy::ToyType Toy::getType() const {
  return _type;
}
std::string Toy::getName() const {
  return _name;
}
std::string Toy::getAscii() const {
  return _picture.getData();
}

bool Toy::setAscii(const std::string &file){
  if (_picture.getPictureFromFile(file)){
    return true;
  }
  e = "bad new illustration";
  return false; 
}
void Toy::setName(const std::string &name){
  _name = name;
}

Toy	Toy::operator=(const Toy &a){
  this->_picture = a._picture;
  this->_type = a._type;
  this->_name = a._name;
  return (*this);
}

Toy::Toy(const Toy &a){
  this->_picture = a._picture;
  this->_type = a._type;
  this->_name = a._name;
}

std::ostream &operator<<(std::ostream &f, const Toy &a){
  f << a.getName() << std::endl << a.getAscii() << std::endl;
  return f;
}

Toy &operator<<(Toy &a, const std::string &str){
  a.setData(str);
  return a;
}

Toy::Error Toy::getLastError(){
  Toy::Error s;

  s._what = e;
  if (e == "bad new illustration"){
    s._where = "setAscii";
    s.type = Toy::Error::PICTURE;
  }
  else if (e == "wrong mode"){
    s._where = "speak_es";
    s.type = Toy::Error::SPEAK;
  }
  else{
    s._where = "speak_es";
    s.type = Toy::Error::UNKNOWN;
  }
  return s;
}

void Toy::speak(const std::string &s){
  std::cout << _name << " \"" <<  s << "\"" << std::endl;
}

bool Toy::speak_es(const std::string &s){
  (void) s;
  return true;
}

void Toy::setData(std::string a){
  _picture.setData(a);
};
