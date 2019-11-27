#pragma once
#include "ConteneurAbstrait.hpp"
#include <deque>

class FIFO : public ConteneurAbstrait 
{
        public:
                FIFO();
                std::string ToString() override;
                void Add(int number) override;
                int GetTaille() override;
                void Supp();
        private:
                std::deque<int> fifo;
};