#include "Laptop.h"
Laptop::Laptop(float _battarySize, float _price, float _ram, std::string _cpu, std::string _os) : ComputerTech(_price, _ram, _cpu, _os){
    if(_battarySize < 0 || _battarySize > FLT_MAX)
        _battarySize = 0;
    battarySize = _battarySize;
}
Laptop::Laptop(const Laptop& laptop) : ComputerTech(laptop){
    battarySize = laptop.battarySize;
}

void Laptop::print(){
    ComputerTech::print();
    std::cout << "Battary size: " << battarySize << std::endl;
}

float Laptop::getBattarySize(){
    return battarySize;
}
void Laptop::setBattarySize(float _battarySize){
    if(_battarySize < 0 || _battarySize > FLT_MAX)
        _battarySize = 0;
    battarySize = _battarySize;
}
