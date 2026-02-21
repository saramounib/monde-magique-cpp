#pragma once

#include "Personnage.h"
#include <string>

class Guerrier : public Personnage{

private:
    std::string typeArmure;

public:
    Guerrier(std::string,int,int,std::string);
    ~Guerrier();
    bool attaquer(Personnage&) override;
};
