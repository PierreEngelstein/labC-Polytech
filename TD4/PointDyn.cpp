#include "PointDyn.hpp"
#include <sstream>
#include <iostream>

using namespace std;
namespace version_dyn
{ 
        Point::Point(double X,double Y)
        {
                _pX = new double(X);
                _pY = new double(Y);
                // std::cout << *_pX << ", " << *_pY << "\n";
        }

        Point::Point(const Point & P)
        {
                _pX = new double(*P._pX);
                _pY = new double(*P._pY);
        }

        Point::~Point()
        {
                delete _pX;
                delete _pY;
        }

        Point & Point::operator=(const Point & p)
        {
                if (this != &p)
                {
                        delete _pX;
                        delete _pY;
                        _pX = new double(*p._pX);
                        _pY = new double(*p._pY);
                }
                return *this;
        }

        double Point::GetX() const 
        { 
                return *_pX;
        }

        double Point::GetY() const 
        { 
                return *_pY; 
        }

        void Point::SetXY(double X, double Y)
        {
                delete _pX;
                delete _pY;
                _pX = new double(X);
                _pY = new double(Y);
        }

        std::string Point::ToString() const
        {
                stringstream ss;
                ss << "(" << GetX() << "," << GetY() << ")";
                return ss.str();
        }

        ostream & operator<<(ostream & flot,const Point & P)
        {
                flot << P.ToString();
                return flot;
        }

}