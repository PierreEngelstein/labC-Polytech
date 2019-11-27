#include "Note.hpp"
#include<sstream>

namespace notes
{
        Note::Note(float Val,unsigned Coef)
        {
                SetValeur(Val);
                SetCoef(Coef);
        }

        std::string Note::ToString() const
        {
                std::stringstream ss;  // flux de données vers string formatte les données en chaînes
                ss<< _valeur << "/20 (" << _coef << ")";
                return ss.str();
        }

        Note::~Note(void)
        {
        }

        float Note::GetValeur() const
        {
                return _valeur;
        }

        void Note::SetValeur(float Val)
        {
                _valeur=Val;
                if(_valeur<0) _valeur=0;
                else if(_valeur>20) _valeur=20;
        }
                        
        unsigned Note::GetCoef() const
        {
                return _coef;
        }

        void Note::SetCoef(unsigned Coef)
        {
                _coef=Coef;
                if(_coef==0) _coef=1;
        }

        ANote *Note::HeapClone()
        {
                return new Note(_valeur, _coef);
        }

}