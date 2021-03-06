#include <fstream>
#include "Picture.h"

bool Picture::getPictureFromFile(const std::string &s){
  std::ifstream ifs(s.c_str(), std::ios::in);
  _data ="";
  if (ifs.is_open()){

    char c;
    while (ifs.get(c)){
      _data += c;
    }
    ifs.close();
    return true;
  }
  _data = "ERROR";
  return false;
}

Picture::Picture(const std::string &fn){
  getPictureFromFile(fn);
}

Picture::Picture(){
  _data = "";
}

Picture::~Picture(){

}

Picture::Picture(const Picture &a){
  _data = a._data;
}

Picture &Picture::operator=(const Picture &a){
  this->_data = a._data;
  return *this;
}


