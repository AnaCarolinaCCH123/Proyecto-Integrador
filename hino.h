#ifndef HITO
#define HITO
#include "toyota.h"

class Hino : public Toyota {
private:
string name;

public: 
Hino();
void showInformation() override;
};

#endif 

