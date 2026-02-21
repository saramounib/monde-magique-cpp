#include "Magicien.h"
#include <string>
using namespace std;

Magicien::Magicien(string n,int v,int f,string elm):Personnage(n,v,f){
    element = elm;
}

Magicien::~Magicien(){}

bool Magicien::attaquer(Personnage& cible){
    if(force >= 8){
        cible.recevoirDegats(15);
        force -= 8;
        return true;
    }
    return false;
}
