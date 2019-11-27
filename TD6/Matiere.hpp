#pragma once

#include "Note.hpp"
namespace notes
{
        class Matiere : public Note
        {
                public:
                        Matiere(const std::string &nom, float val, unsigned coef=1);
                        ~Matiere();
                        std::string GetNom() const;
                        std::string ToString() const;
                        ANote *HeapClone() override;
                private:
                        std::string _nomr;
        };
}