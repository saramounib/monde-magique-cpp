#pragma once

#include "Personnage.h"
#include <string>

class Magicien : public Personnage{

private:
    std::string element;

public:
    Magicien(std::string,int,int,std::string);
    ~Magicien();
    bool attaquer(Personnage&) override;
};
