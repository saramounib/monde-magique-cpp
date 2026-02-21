#pragma once

#include <string>

class Personnage{

protected:
    std::string nom;
    int vie;
    int force;
    static int nbrPersonnages;

public:
    Personnage(std::string,int,int);
    virtual ~Personnage();
    void recevoirDegats(int);
    virtual bool attaquer(Personnage&) = 0; //la classe Personnage est abstraite, donc pas de personnage generique
    void afficherEtat() const;
    static int getNbrPersonnages();
};
