#include "Int2Etats.hpp"

Int2Etats::Int2Etats() : m_state(false), m_number(0)
{

}

std::string Int2Etats::ToString()
{
        return m_state ? "[" + std::to_string(m_number) + "]" : "[]";
}

void Int2Etats::Add(int number)
{
        if(!m_state) m_state = true;
        m_number = number;
}

int Int2Etats::GetTaille()
{
        return m_state ? 1 : 0;
}

void Int2Etats::Supp()
{
        m_state = false;
        m_number = 0;
}