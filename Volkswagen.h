#ifndef VOLKSWAGEN
#define VOLKSWAGEN
#include "auto.h"

class Volkswagen : public Auto {
private:
string name;
string group;
public: 
Volkswagen();
void showInformation() override;
};

#endif 

