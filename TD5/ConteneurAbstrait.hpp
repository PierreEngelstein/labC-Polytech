#pragma once
#include <string>

class ConteneurAbstrait
{
        public:
                virtual std::string ToString() = 0;
                virtual void Add(int number) = 0;
                virtual int GetTaille() = 0;
                virtual void Supp() = 0;
};