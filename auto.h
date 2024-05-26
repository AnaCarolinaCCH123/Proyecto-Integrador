#ifndef AUTO
#define AUTO


class Auto {
protected:
    string name;
    string groupAutomobile;
    string manufacturer;

public:
    Auto();
    string getName();
    virtual void showInformation(string, string, string);
   
};

#endif
  


