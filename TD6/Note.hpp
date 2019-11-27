#pragma once
#include "ANote.hpp"

namespace notes
{
        class Note : public ANote
        {
                public:	
                        Note(float Val,unsigned Coef=1);
                        virtual ~Note(void);

                        std::string ToString() const override;
                        float GetValeur() const override;
                        unsigned GetCoef() const override;

                        virtual ANote *HeapClone() override;
                        
                        void SetValeur(float Val);
                        void SetCoef(unsigned Coef);
                private:
                        float _valeur;
                        unsigned _coef;	
        };
}
