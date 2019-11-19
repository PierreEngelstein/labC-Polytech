#pragma once
#include <iostream>
#include <string>

namespace version_dyn2
{
        class Point
        {
                public:
                        Point(double x = 0, double y = 0);
                        Point(const Point& p);
                        ~Point();
                        Point & operator=(const Point & p);
                        double GetX() const;
                        double GetY() const;
                        void SetXY(double X, double Y);
                        std::string ToString() const;
                        friend std::ostream & operator<<(std::ostream & flot,const Point & p);
                private:
                        double * _pXY;
        };
        
}