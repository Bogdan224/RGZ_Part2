#include "libraries/Laptop.h"
#include "libraries/PC.h"
#include <list>

void Clear(){
#ifdef __linux__
    system("clear");
#else
    system("cls");
#endif
}

ComputerTech *AddToList()
{
    Clear();
    int choize;
    std::cout << "What do you want to enter?\n";
    std::cout << "1)Computer Tech\n";
    std::cout << "2)Laptop\n";
    std::cout << "3)PC\n";
    std::cout << "0)Exit\n";
    std::cout << "Enter your choize: ";
    std::cin >> choize;
    if (choize == 0)
        return NULL;
    float price;
    float ram;
    std::string cpu;
    std::string os;

    Clear();
    std::cout << "Enter price: ";
    std::cin >> price;
    std::cout << "Enter RAM: ";
    std::cin >> ram;
    std::cout << "Enter CPU: ";
    std::cin >> cpu;
    std::cout << "Enter OS: ";
    std::cin >> os;

    ComputerTech *comp;
    switch (choize)
    {
    case 1:
        comp = new ComputerTech(price, ram, cpu, os);
        break;
    case 2:
        float battarySize;
        std::cout << "Enter battary size: ";
        std::cin >> battarySize;
        comp = new Laptop(battarySize, price, ram, cpu, os);
        break;
    case 3:
        float boxSize;
        std::cout << "Enter box size: ";
        std::cin >> boxSize;
        comp = new PC(boxSize, price, ram, cpu, os);
        break;
    default:
        std::cout << std::endl;
        return NULL;
    }
    std::cout << std::endl;
    return comp;
}

void PrintList(std::list<ComputerTech*> computerTech){
    Clear();
    int i = 1;
    for (auto item : computerTech)
    {
        std::cout << "Computer technology " << i << std::endl;
        item->print();
        std::cout << std::endl;
        i++;
    }
     
}

int main()
{
    std::list<ComputerTech *> computerTech;
    while (true)
    {
        int choize;
        std::cout << "1)Add computer tecnology to list\n";
        std::cout << "2)Print list\n";
        std::cout << "0)Exit\n";
        std::cout << "Enter your choize: ";
        std::cin >> choize; 
        ComputerTech* comp;
        switch (choize)
        {
        case 0:
            return 0;
        case 1:
            comp = AddToList();
            if(comp!=NULL)
                computerTech.push_back(comp);                
            break;
        case 2:
            PrintList(computerTech);
            break;
        default:
            break;
        }
    }
}