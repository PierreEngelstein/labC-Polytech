#include "PointDyn2.hpp"
#include <sstream>

using namespace std;
namespace version_dyn2
{ 
        Point::Point(double X,double Y)
        {
                _pXY = new double[2];
                _pXY[0] = X;
                _pXY[1] = Y;
        }

        Point::Point(const Point & P)
        {
                _pXY = new double[2];
                _pXY[0] = P._pXY[0];
                _pXY[1] = P._pXY[1];
        }

        Point::~Point()
        {
                delete[] _pXY;
        }

        Point & Point::operator=(const Point & p)
        {
                if (this != &p)
                {
                        delete[] _pXY;
                        _pXY = new double[2];
                        _pXY[0] = p._pXY[0];
                        _pXY[1] = p._pXY[1];
                }
                return *this;
        }

        double Point::GetX() const 
        { 
                return _pXY[0];
        }

        double Point::GetY() const 
        { 
                return _pXY[1]; 
        }

        void Point::SetXY(double X, double Y)
        {
                delete[] _pXY;
                _pXY = new double[2];
                _pXY[0] = X;
                _pXY[1] = Y;
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