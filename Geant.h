#pragma once

#include "Personnage.h"
#include <string>

class Geant : public Personnage{

private:
    double taille;

public:
    Geant(std::string,int,int,double);
    ~Geant();
    bool attaquer(Personnage&) override;
};
