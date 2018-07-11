#ifndef PICTURE_H_
# define PICTURE_H_

#include <iostream>
# include <string>
class Picture{
  std::string _data;
 public:
  Picture();
  Picture(const Picture &a);
  Picture(const std::string &fn);
  ~Picture();
  bool getPictureFromFile(const std::string &s);
  std::string getData() const{
    return _data;
  };
  void setData(std::string s){
    _data = s;
  };
  Picture & operator=(const Picture &a);
};

#endif /* dream0630 */
