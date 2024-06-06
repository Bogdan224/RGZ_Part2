#include "libraries/Dishwasher.h"
#include "libraries/WashingMachine.h"
#include <list>

void Clear(){
#ifdef __linux__
    system("clear");
#else
    system("cls");
#endif
}

Appliances *AddToList()
{
    
    Clear();
    int choize;
    std::cout << "What do you want to enter?\n";
    std::cout << "1)Appliances\n";
    std::cout << "2)Dishwasher\n";
    std::cout << "3)Washing machine\n";
    std::cout << "0)Exit\n";
    std::cout << "Enter your choize: ";
    std::cin >> choize;
    if (choize == 0)
        return NULL;
    float price;
    float voltage;
    std::string model;
    std::string firm;

    Clear();
    std::cout << "Enter price: ";
    std::cin >> price;
    std::cout << "Enter voltage: ";
    std::cin >> voltage;
    std::cout << "Enter model: ";
    std::cin >> model;
    std::cout << "Enter firm: ";
    std::cin >> firm;

    Appliances *appl;
    switch (choize)
    {
    case 1:
        appl = new Appliances(price, voltage, model, firm);
        break;
    case 2:
        float maxTemp;
        std::cout << "Enter maximum temperature: ";
        std::cin >> maxTemp;
        appl = new Dishwasher(maxTemp, price, voltage, model, firm);
        break;
    case 3:
        float mss;
        std::cout << "Enter maximum spin speed: ";
        std::cin >> mss;
        appl = new WashingMachine(mss, price, voltage, model, firm);
        break;
    default:
        std::cout << std::endl;
        return NULL;
    }
    std::cout << std::endl;
    return appl;
}

void PrintList(std::list<Appliances*> appliances){
    Clear();
    int i = 1;
    for (auto item : appliances)
    {
        std::cout << "Appliances " << i << std::endl;
        item->print();
        std::cout << std::endl;
        i++;
    }
     
}

int main()
{
    //Part2_B

    // std::list<Appliances*> appliances;
    // Appliances appliances1 = Appliances(1);

    // Dishwasher dishwasher1 = Dishwasher(0,2);
    // WashingMachine machine1 = WashingMachine(0,3);
    // appliances.push_back(&appliances1);
    // appliances.push_back(&dishwasher1);
    // appliances.push_back(&machine1);

    // for (Appliances* item : appliances) {
    //     item->print();
    // }

    //Part2_A

    // Dishwasher dishwasher1 = Dishwasher();
    // Dishwasher dishwasher2 = Dishwasher(4, 12000, 1, "Tele2", "Gp - 211");

    // WashingMachine machine1 = WashingMachine();
    // WashingMachine machine2 = WashingMachine(10, 1111, 3, "F - 123", "TP_Link");
    // dishwasher1.print();
    // dishwasher2.print();
    // machine1.print();
    // machine2.print();
    // dishwasher1.setMaxTemp(70);
    // machine1.setMSS(1800);
    // dishwasher1.print();
    // machine1.print();

    std::list<Appliances*> appliances;
    while (true)
    {
        int choize;
        std::cout << "1)Add appliances to list\n";
        std::cout << "2)Print list\n";
        std::cout << "0)Exit\n";
        std::cout << "Enter your choize: ";
        std::cin >> choize; 
        Appliances* appl;
        switch (choize)
        {
        case 0:
            return 0;
        case 1:
            appl = AddToList();
            if(appl!=NULL)
                appliances.push_back(appl);                
            break;
        case 2:
            PrintList(appliances);
            break;
        default:
            break;
        }
    }
}