#pragma once
#include "Appliances.h"

class Dishwasher : public Appliances
{
private:
    float maxTemp;
public:
    Dishwasher(float _maxTemp = 0, float _price = 0, float _voltage = 0, std::string _model = "Undefined", std::string _firm = "Undefined");
    Dishwasher(const Dishwasher& laptop);

    void print() override;

    float getMaxTemp();
    void setMaxTemp(float _maxTemp);

    ~Dishwasher() override = default;
};

