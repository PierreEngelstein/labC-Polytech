#include "PointAuto.h"
#include <sstream>

namespace version_auto
{ 
  Point::Point(double X,double Y) :_x(X),_y(Y){ }

  Point::Point(const Point & P) : _x(P._x),_y(P._y){ }

  Point & Point::operator=(const Point & p)
  {
    if (this != &p)
    {
      _x = p._x;
      _y = p._y;
    }
    return *this;
  }

  double Point::GetX() const 
  { return _x; }

  double Point::GetY() const 
  { return _y; }

  void Point::SetXY(double X, double Y)
  {
    _x = X;
    _y = Y;
  }

  std::string Point::ToString() const
  {
    std::stringstream ss;
    ss << "(" << GetX() << "," << GetY() << ")";
    return ss.str();
  }

  std::ostream & operator<<(std::ostream & flot,const Point & P)
  {
    flot << P.ToString();
    return flot;
  }

}