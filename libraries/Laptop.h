#pragma once
#include "ComputerTech.h"

class Laptop : public ComputerTech
{
private:
    float battarySize;
public:
    Laptop(float _battarySize = 0, float _price = 0, float _ram = 0, std::string _cpu = "Undefined", std::string _os = "Undefined");
    Laptop(const Laptop& laptop);

    void print() override;

    float getBattarySize();
    void setBattarySize(float _battarySize);

    ~Laptop() override = default;
};

