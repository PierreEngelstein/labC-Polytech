#include <iostream>
#include "PointAuto.h"
#include "PointDyn.hpp"
#include "PointDyn2.hpp"
#include "PointStr.hpp"

int main()
{
  version_dyn::Point p_1(12, 5), p_2(p_1);
  std::cout << p_2.ToString() << std::endl;
  p_1.SetXY(7, 2);
  std::cout << p_1.ToString() << std::endl;
  std::cout << p_2.ToString() << std::endl;
  std::cout << "**********\n";

  Point p1(12,13,"p1"), p2("p2");
  std::cout << p1.ToString() << std::endl;
  std::cout << p1.version_dyn::Point::ToString() << std::endl;
  std::cout << p2.ToString() << std::endl;
  p2.SetXY(4,5);
  std::cout << p2.ToString() << std::endl;
  Point p3(p2);
  std::cout << p3.ToString() << std::endl;
  return 0;
}