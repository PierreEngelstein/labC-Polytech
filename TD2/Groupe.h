#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Personne.h"

namespace td2
{
        class Groupe
        {
                public:
                        std::string ToString() const;
                        void Ajouter(Personne& p);

                        Groupe Majeurs();
                        Groupe NomEst(std::string nom);

                        friend std::ostream& operator<< (std::ostream& os, const Groupe& g);
                private:
                        std::vector<Personne> _vGroupe;
        };
} // namespace td2
