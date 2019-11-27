#pragma once
#include "ANote.hpp"
#include <vector>
namespace notes
{
        class Groupe : public ANote
        {
                public:
                        Groupe(const std::string &nom);
                        ~Groupe();
                        
                        std::string ToString() const;
                        ANote *HeapClone() override;

                        float GetValeur() const override;
                        unsigned GetCoef() const override;
                        std::string GetNom() const;

                        void AddNote(notes::ANote* an);
                private:
                        std::string _nomr;
                        std::vector<ANote*> _notes;
        };
}