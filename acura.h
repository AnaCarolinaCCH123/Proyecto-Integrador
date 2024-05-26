#ifndef ACURA 
#define ACURA
#include "honda.h"

class Acura : public Honda {
private:
string name;

public: 
Acura();
void showInformation() override;
};

#endif 

