#ifndef HONDA
#define HONDA
#include "auto.h"

class Honda : public Auto {
private:
string name;
string group;
public: 
Honda();
void showInformation() override;
};

#endif 

