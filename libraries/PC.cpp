#include "PC.h"
PC::PC(float _boxSize, float _price, float _ram, std::string _cpu, std::string _os) : ComputerTech(_price, _ram, _cpu, _os)
{
    if(_boxSize < 0 || _boxSize > FLT_MAX)
        _boxSize = 0;
    boxSize = _boxSize;
}

PC::PC(const PC& pc) : ComputerTech(pc){
    boxSize = pc.boxSize;
}
void PC::print() {
    ComputerTech::print();
    std::cout << "Box size: " << boxSize << std::endl;
}

float PC::getBoxSize(){
    return boxSize;
}

void PC::setBoxSize(float _boxSize){
    if(_boxSize < 0 || _boxSize > FLT_MAX)
        _boxSize = 0;
    boxSize = _boxSize;
}