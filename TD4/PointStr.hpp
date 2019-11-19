#pragma once
#include <iostream>
#include <string>
#include "PointDyn.hpp"
class Point : public version_dyn::Point
{
        public:
                Point(double x, double y, std::string nom);
                Point(std::string nom);
                Point(const Point& p);
                std::string ToString() const;
                Point & operator=(const Point & p);
                friend std::ostream & operator<<(std::ostream & flot,const Point & p);
        private:
                std::string _nom;
};