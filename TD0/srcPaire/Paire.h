#ifndef PAIRE_H
#define PAIRE_H
#include <string>
namespace td1
{
    class Paire
    {
        public:
            Paire(int first,int second);

            int GetPremier() const;
            int GetSecond() const;

            std::string ToString() const;

            bool operator==(const Paire & p) const;
        private:
            int _first,_second;
    };
}

#endif // PAIRE_H
//--------------------------------------------------------------------
