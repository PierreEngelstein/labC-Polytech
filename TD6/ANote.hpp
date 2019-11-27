#pragma once
#include <string>

namespace notes
{
        class ANote
        {
                public:
                        virtual std::string ToString() const = 0;
                        virtual float GetValeur() const = 0;
                        virtual unsigned GetCoef() const = 0;
                        virtual ANote *HeapClone() = 0;
        };
}