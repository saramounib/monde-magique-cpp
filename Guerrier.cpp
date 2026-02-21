#include "Guerrier.h"
#include <string>
using namespace std;

Guerrier::Guerrier(string n,int v,int f,string ta):Personnage(n,v,f){
    typeArmure = ta;
}

Guerrier::~Guerrier(){}

bool Guerrier::attaquer(Personnage& cible){
    if(force >= 5){
        cible.recevoirDegats(10);
        force -= 5;
        return true;
    }
    return false;
}
