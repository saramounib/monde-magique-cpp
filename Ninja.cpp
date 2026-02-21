#include "Ninja.h"
#include <string>
using namespace std;

Ninja::Ninja(string n,int v,int f,string cl):Personnage(n,v,f){
    clan = cl;
}

Ninja::~Ninja(){}

bool Ninja::attaquer(Personnage& cible) {
    if(force >= 3){
        cible.recevoirDegats(7);
        force -= 3;
        return true;
    }
    return false;
}
