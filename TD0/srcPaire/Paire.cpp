

#include <sstream>  //inclusion pour stringstream
#include "Paire.h"
namespace td1
{
Paire::Paire(int first,int second):_first(first),_second(second)
{    //ctor
}

int Paire::GetPremier() const
{
    return _first;
}

int Paire::GetSecond() const
{
    return _second;
}

std::string Paire::ToString() const
{
    std::stringstream ss;
    ss<< "<" << _first << "," << _second << ">";
    return ss.str();
}

bool Paire::operator==(const Paire & p) const
{
    return (_first==p._first && _second==p._second);
}
}
