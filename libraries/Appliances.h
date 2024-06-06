#pragma once
#include <iostream>
#include <float.h>

class Appliances
{
private:
    float price;
    float voltage;
    std::string model;
    std::string firm;
public:
    Appliances(float _price = 0, float _voltage = 0, std::string _model = "Undefined", std::string _firm = "Undefined");
    Appliances(const Appliances& appliances);
    virtual void print();
    
    float getPrice();
    float getVoltage();
    std::string getModel();
    std::string getFirm();

    void setPrice(float _price);
    void setVoltage(float _voltage);
    void setModel(std::string _model);
    void setFirm(std::string _firm);
    virtual ~Appliances() = default;
};

