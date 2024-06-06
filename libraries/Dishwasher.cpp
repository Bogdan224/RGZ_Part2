#include "Dishwasher.h"
Dishwasher::Dishwasher(float _maxTemp, float _price, float _voltage, std::string _model, std::string _firm) : Appliances(_price, _voltage, _model, _firm){
    if(_maxTemp < 0 || _maxTemp > FLT_MAX)
        _maxTemp = 0;
    maxTemp = _maxTemp;
}
Dishwasher::Dishwasher(const Dishwasher& dishwasher) : Appliances(dishwasher){
    maxTemp = dishwasher.maxTemp;
}

void Dishwasher::print(){
    Appliances::print();
    std::cout << "Maximum temperature: " << maxTemp << std::endl;
}

float Dishwasher::getMaxTemp(){
    return maxTemp;
}
void Dishwasher::setMaxTemp(float _maxTemp){
    if(_maxTemp < 0 || _maxTemp > FLT_MAX)
        _maxTemp = 0;
    maxTemp = _maxTemp;
}
