#pragma once
#include "ConteneurAbstrait.hpp"
#include <deque>

class LIFO : public ConteneurAbstrait 
{
        public:
                LIFO();
                std::string ToString() override;
                void Add(int number) override;
                int GetTaille() override;
                void Supp();
        private:
                std::deque<int> lifo;
};