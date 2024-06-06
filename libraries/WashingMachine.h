#pragma once
#include "Appliances.h"

class WashingMachine : public Appliances
{
private:
    float mss;
public:
    WashingMachine(float _mss = 0, float _price = 0, float _voltage = 0, std::string _model = "Undefined", std::string _firm = "Undefined");
    WashingMachine(const WashingMachine& pc);
    void print() override;
    float getMSS();
    void setMSS(float _mss);
    ~WashingMachine() override = default;
};

