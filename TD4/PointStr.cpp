#include "PointStr.hpp"
#include <sstream>

using namespace std;
Point::Point(double X,double Y, std::string nom) : version_dyn::Point(X, Y), _nom(nom)
{
}

Point::Point(const Point & P) : version_dyn::Point(P), _nom(P._nom)
{
}

Point::Point(std::string str) : version_dyn::Point(), _nom(str)
{
}

Point & Point::operator=(const Point & p)
{
        if (this != &p)
        {
                SetXY(p.GetX(), p.GetY());
                _nom = p._nom;
        }
        return *this;
}

std::string Point::ToString() const
{
        stringstream ss;
        ss << _nom << ":" << version_dyn::Point::ToString();;
        return ss.str();
}

ostream & operator<<(ostream & flot,const Point & P)
{
        flot << P.ToString();
        return flot;
}
