#include "Appliances.h"

Appliances::Appliances(float _price, float _voltage, std::string _model, std::string _firm)
{
    if(_price < 0 || _price > FLT_MAX)
        _price = 0;
    price = _price;
    if(_voltage < 0 || _voltage > FLT_MAX)
        _voltage = 0;
    voltage = _voltage;
    model = _model;
    firm = _firm;
}

Appliances::Appliances(const Appliances& appliances){
    price = appliances.price;
    voltage = appliances.voltage;
    model = appliances.model;
    firm = appliances.firm;
}
void Appliances::print(){
    std::cout << "Price: " << price << std::endl;
    std::cout << "Voltage: " << voltage << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Firm: " << firm << std::endl;
}

float Appliances::getPrice(){
    return price;
}
float Appliances::getVoltage(){
    return voltage;
}
std::string Appliances::getModel(){
    return model;
}
std::string Appliances::getFirm(){
    return firm;
}

void Appliances::setPrice(float _price){
    if(_price < 0 || _price > FLT_MAX)
        _price = 0;
    price = _price;   
}
void Appliances::setVoltage(float _voltage){
    if(_voltage < 0 || _voltage > FLT_MAX)
        _voltage = 0;
    voltage = _voltage;
}
void Appliances::setModel(std::string _model){
    model = _model;
}
void Appliances::setFirm(std::string _firm){
    firm = _firm;
}
    