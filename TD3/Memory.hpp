#pragma once

#include <vector>
#include "Carte.h"
#include <utility>
#include <string>

namespace td3
{
        class Memory
        {
                public:
                        Memory();
                        Memory(const Memory& m);
                        Memory(std::vector<Carte> cartes);
                        std::string ToString() const;
                        void Affiche(std::ostream &f) const;
                        void Jouer(unsigned index1, unsigned index2, Carte& c1, Carte& c2);
                        bool estTermine();
                private:
                        std::vector<std::pair<Carte, bool>> _cartes;
        };
} // namespace td3
