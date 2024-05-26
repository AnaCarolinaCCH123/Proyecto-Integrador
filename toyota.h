#ifndef TOYOTA
#define TOYOTA
#include "auto.h"

class Toyota : public Auto {
private:
string name;
string group;
public: 
Toyota();
void showInformation() override;
};

#endif 

