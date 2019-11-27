#include "LIFO.hpp"

LIFO::LIFO()
{

}
std::string LIFO::ToString()
{
        std::string ret = "|";
        for(int i : lifo)
        {
                ret += std::to_string(i) + "|";
        }
        return ret;
}
void LIFO::Add(int number)
{
        lifo.push_front(number);
}
int LIFO::GetTaille()
{
        return lifo.size();
}

void LIFO::Supp()
{
        lifo.pop_front();
}