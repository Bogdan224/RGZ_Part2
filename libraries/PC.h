#pragma once
#include "ComputerTech.h"

class PC : public ComputerTech
{
private:
    float boxSize;
public:
    PC(float _boxSize = 0, float _price = 0, float _ram = 0, std::string _cpu = "Undefined", std::string _os = "Undefined");
    PC(const PC& pc);
    void print() override;
    float getBoxSize();
    void setBoxSize(float _boxSize);
    ~PC() override = default;
};

