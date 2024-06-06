#include "WashingMachine.h"
WashingMachine::WashingMachine(float _mss, float _price, float _voltage, std::string _model, std::string _firm) : Appliances(_price, _voltage, _model, _firm)
{
    if(_mss < 0 || _mss > FLT_MAX)
        _mss = 0;
    mss = _mss;
}

WashingMachine::WashingMachine(const WashingMachine& wm) : Appliances(wm){
    mss = wm.mss;
}
void WashingMachine::print() {
    Appliances::print();
    std::cout << "Maximum spin speed: " << mss << std::endl;
}

float WashingMachine::getMSS(){
    return mss;
}

void WashingMachine::setMSS(float _mss){
    if(_mss < 0 || _mss > FLT_MAX)
        _mss = 0;
    mss = _mss;
}