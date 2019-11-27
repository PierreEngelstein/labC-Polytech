#include "Groupe.hpp"

namespace notes
{
        Groupe::Groupe(const std::string &nom) : _nomr(nom)
        {

        }

        Groupe::~Groupe()
        {
                for(int i = 0; i < _notes.size(); i++)
                {
                        delete _notes[i];
                }
        }

        std::string Groupe::ToString() const
        {
                std::string ret = "Groupe [" + _nomr + "]\n";
                for(int i = 0; i < _notes.size(); i++)
                {
                        if(_notes[i] != nullptr)
                                ret += _notes[i]->ToString() + "\n";
                }
                ret += std::to_string(GetValeur()) + "/20 (" + std::to_string(GetCoef()) + ")";
                return ret;
        }

        ANote *Groupe::HeapClone()
        {
                Groupe *gr = new Groupe(_nomr);
                for(int i = 0; i < _notes.size(); i++)
                {
                        gr->AddNote(_notes[i]);
                }
                return gr;
        }

        float Groupe::GetValeur() const
        {
                float val = 0;
                for(int i = 0; i < _notes.size(); i++)
                {
                        if(_notes[i] != nullptr) val += (_notes[i]->GetValeur() * _notes[i] ->GetCoef());
                }
                return val / GetCoef();
        }
        unsigned Groupe::GetCoef() const
        {
                unsigned val = 0;
                for(int i = 0; i < _notes.size(); i++)
                {
                        if(_notes[i] != nullptr) val += _notes[i]->GetCoef();
                }
                return val;
        }

        std::string Groupe::GetNom() const
        {
                return _nomr;
        }

        void Groupe::AddNote(notes::ANote* an)
        {
                _notes.push_back(an->HeapClone());
        }
}