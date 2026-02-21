#include "Geant.h"
#include <string>
using namespace std;

Geant::Geant(string n,int v,int f,double tl):Personnage(n,v,f){
    taille = tl;
}

Geant::~Geant(){}

bool Geant::attaquer(Personnage& cible){
    if(force >= 10){
        cible.recevoirDegats(20);
        force -= 10;
        return true;
    }
    return false;
}

