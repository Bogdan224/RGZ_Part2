#include "ComputerTech.h"

ComputerTech::ComputerTech(float _price, float _ram, std::string _cpu, std::string _os)
{
    if(_price < 0 || _price > FLT_MAX)
        _price = 0;
    price = _price;
    if(_ram < 0 || _ram > FLT_MAX)
        _ram = 0;
    ram = _ram;
    cpu = _cpu;
    os = _os;
}

ComputerTech::ComputerTech(const ComputerTech& tech){
    price = tech.price;
    ram = tech.ram;
    cpu = tech.cpu;
    os = tech.os;
}
void ComputerTech::print(){
    std::cout << "Price: " << price << std::endl;
    std::cout << "RAM: " << ram << std::endl;
    std::cout << "CPU: " << cpu << std::endl;
    std::cout << "OS: " << os << std::endl;
}

float ComputerTech::getPrice(){
    return price;
}
float ComputerTech::getRAM(){
    return ram;
}
std::string ComputerTech::getCPU(){
    return cpu;
}
std::string ComputerTech::getOS(){
    return os;
}

void ComputerTech::setPrice(float _price){
    if(_price < 0 || _price > FLT_MAX)
        _price = 0;
    price = _price;   
}
void ComputerTech::setRAM(float _ram){
    if(_ram < 0 || _ram > FLT_MAX)
        _ram = 0;
    ram = _ram;
}
void ComputerTech::setCPU(std::string _cpu){
    cpu = _cpu;
}
void ComputerTech::setOS(std::string _os){
    os = _os;
}
    