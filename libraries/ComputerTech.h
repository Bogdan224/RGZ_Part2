#pragma once
#include <iostream>
#include <float.h>

class ComputerTech
{
private:
    float price;
    float ram;
    std::string cpu;
    std::string os;
public:
    ComputerTech(float _price = 0, float _ram = 0, std::string _cpu = "Undefined", std::string _os = "Undefined");
    ComputerTech(const ComputerTech& tech);
    virtual void print();
    
    float getPrice();
    float getRAM();
    std::string getCPU();
    std::string getOS();

    void setPrice(float _price);
    void setRAM(float _ram);
    void setCPU(std::string _cpu);
    void setOS(std::string _os);
    virtual ~ComputerTech() = default;
};

