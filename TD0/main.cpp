#include <iostream>
#include "srcPaire/Paire.h"
#include "srcEnsemble/EnsembleDePaires.h"

using namespace std;
using namespace td1;

int main()
{
      int var=12;
      cout << "Premier Exemple C++ \n";
      cout << "var=" << var << "\n";
      
      Paire p1(2,3),p2(5,7);
      cout << p1.ToString() << endl;

      EnsembleDePaires e1;
      cout << e1.ToString() << endl;
      e1.Add(Paire(11,17)) ;
      cout << e1.ToString() << endl;
}
//-------------------------------------------------------------