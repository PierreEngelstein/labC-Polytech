#include "EnsembleDePaires.h"
namespace td1
{
EnsembleDePaires::EnsembleDePaires(){}

void EnsembleDePaires::Add(const Paire & p)
{
    bool ajoutOk=true;
    for(Paire pa:_ensemble)
    {
        if(pa==p){    ajoutOk=false;  }
    }
    if(ajoutOk) _ensemble.push_back(p);
}

std::string EnsembleDePaires::ToString() const
{
    std::string str="[";
    for(Paire pa:_ensemble)
    {
        str+=pa.ToString();
    }
    str+="]";
    return str;
}
}
