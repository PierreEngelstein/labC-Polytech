#include "FIFO.hpp"

FIFO::FIFO()
{

}
std::string FIFO::ToString()
{
        std::string ret = "|";
        for(int i : fifo)
        {
                ret += std::to_string(i) + "|";
        }
        return ret;
}
void FIFO::Add(int number)
{
        fifo.push_front(number);
}
int FIFO::GetTaille()
{
        return fifo.size();
}

void FIFO::Supp()
{
        fifo.pop_back();
}