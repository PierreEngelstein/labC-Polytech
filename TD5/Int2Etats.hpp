#pragma once
#include "ConteneurAbstrait.hpp"

class Int2Etats : public ConteneurAbstrait
{
        public:
                Int2Etats();
                std::string ToString() override;
                void Add(int number) override;
                int GetTaille() override;
                void Supp();
        private:
                bool m_state;
                int m_number;
};