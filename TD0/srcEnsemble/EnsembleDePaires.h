#ifndef ENSEMBLEDEPAIRES_H
#define ENSEMBLEDEPAIRES_H

#include "../srcPaire/Paire.h"
#include <string>
#include <vector>
namespace td1
{
    class EnsembleDePaires
    {
        public:
                EnsembleDePaires();
                void Add(const Paire & p);
                std::string ToString() const;
        private:
                std::vector<Paire> _ensemble;
    };
}

#endif // ENSEMBLEDEPAIRES_H
//--------------------------------------------------