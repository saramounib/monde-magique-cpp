#pragma once

#include "Personnage.h"
#include <string>

class Ninja : public Personnage{

private:
    std::string clan;

public:
    Ninja(std::string,int,int,std::string);
    ~Ninja();
    bool attaquer(Personnage&) override;
};
