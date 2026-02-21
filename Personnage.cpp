#include "Personnage.h"
#include <iostream>
#include <string>
using namespace std;

int Personnage::nbrPersonnages = 0;

Personnage::Personnage(string n, int v, int f){
    nom = n;
    vie = v;
    force = f;
    nbrPersonnages++;
}

Personnage::~Personnage(){
    nbrPersonnages--;
}

void Personnage::recevoirDegats(int degats){
    vie -= degats;
    if(vie < 0)
        vie = 0;
}

void Personnage::afficherEtat() const{
    cout<< "Nom: " << nom <<endl;
    cout<< "Vie: " << vie <<endl;
    cout<< "Force: " << force <<endl;
}

int Personnage::getNbrPersonnages(){
    return nbrPersonnages;
}
