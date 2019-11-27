#include "Matiere.hpp"

namespace notes
{
        Matiere::Matiere(const std::string &nom, float val, unsigned coef) : Note(val, coef), _nomr(nom)
        {
        }

        Matiere::~Matiere()
        {
        }
        
        std::string Matiere::GetNom() const
        {
                return _nomr;
        }

        std::string Matiere::ToString() const
        {
                return _nomr + ":" + Note::ToString();
        }

        ANote *Matiere::HeapClone()
        {
                return new Matiere(_nomr, GetValeur(), GetCoef());
        }
}