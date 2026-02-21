#include "Guerrier.h"
#include "Magicien.h"
#include "Ninja.h"
#include "Geant.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){

    //Creation dynamique du geant
    Personnage* cible = new Geant("le geant",35,20,5.5);

    //Creation de l'equipe et de ses membres
    vector<Personnage*> equipe;
    equipe.push_back(new Guerrier("le guerrier",20,10,"Acier"));
    equipe.push_back(new Magicien("le magicien",25,10,"Feu"));
    equipe.push_back(new Ninja("le ninja",18,10,"Uzumaki"));

    //L'equipe attaque le geant
    for(auto p : equipe){
        p->attaquer(*cible); //on attaque l'objet concret, pas son adresse
    }

    //Afficher les etats des personnages
    cout<<"L'etat du geant apres l'attaque"<<endl;
    cible->afficherEtat();
    cout<<endl;

    cout<<"L'etat des membres de l'equipe apres l'attaque"<<endl;
    for(auto p : equipe){
        p->afficherEtat();
        cout<<endl;
    }

    //Affichage du nombre de personnages dans le monde (avant et apres suppression)
    cout<<"Nombre de personnages dans le monde: "<<Personnage::getNbrPersonnages()<<endl;

    //Suppression du geant
    delete cible;

    cout<<"Nombre de personnages apres suppression du geant: "<<Personnage::getNbrPersonnages()<<endl;

    //Suppression des membres de l'equipe
    for(auto p : equipe)
        delete p;
    equipe.clear(); //vider l'equipe

    cout<<"Nombre de personnages apres fin du monde: "<<Personnage::getNbrPersonnages()<<endl;

    return 0;
}
