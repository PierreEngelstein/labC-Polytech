#include "Matiere.hpp"
#include "Groupe.hpp"
#include <iostream>

int main(int argc, const char **argv)
{
        // notes::Note n1(12.2);
        // notes::Note n2(13.5);

        // std::cout << n1.ToString() << "\n";
        // std::cout << n2.ToString() << "\n";
        
        // notes::Matiere Math("Math", 17.2, 3);
        // notes::Matiere Physique("Physique", 13.4, 2);

        // std::cout << Math.ToString() << "\n";
        // std::cout << Physique.ToString() << "\n";

        notes::ANote * pN1 = new notes::Note(13,2);
        notes::ANote * pN2 = new notes::Matiere("Math",12,2);
        notes::ANote * pN3 = new notes::Matiere("Chimie",11,1);
        std::cout << pN1->ToString() << std::endl;
        std::cout << pN2->ToString() << std::endl;
        std::cout << pN3->ToString() << std::endl;
        notes::ANote * pN = pN2->HeapClone();
        std::cout << pN->ToString() << std::endl;
        delete pN;
        notes::Groupe * pG = new notes::Groupe("Sciences");
        pG->AddNote(pN2); // ajoute clone de *pN2
        pG->AddNote(pN3); // ajoute clone de *pN3
        delete pN1;
        delete pN2;
        delete pN3;
        std::cout << pG->ToString() << std::endl;
        delete pG;
}