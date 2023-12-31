#include "Menu.h"
#include <string>
#include <iostream>
#include "Keeper.h"
using namespace std;

Menu::Menu(){
    kep = new Keeper;
    startMenu();
    delete kep;
}

void Menu::startMenu(){
    int pos;
    char choose;
    while (1)
    {
        system("cls");
        std::cout << "Select command\n";
        std::cout << "1 - Add Element\n";
        std::cout << "2 - Delete Element\n";
        std::cout << "3 - Change Element\n";
        std::cout << "4 - Display\n";
        std::cout << "5 - Save to file\n";
        std::cout << "6 - Extract from file\n";
        std::cout << "0 - Exit\n";
        std::cin >> choose;
        switch (choose)
        {
        case '1':
            menuAdd();
            break;
        case '2':
            menuDelete();
            break;
        case '3':
            menuEdit();
            break;
        case '4':
            kep->printToConsole();
            system("pause");
            break;
        case '5':
            system("cls");
            cout << "Enter filename:" << endl;
            cin >> filename; //обработать исключение
            system("cls");
            kep->loadToFile(filename);
            break;
        /*case '6':
            system("cls");
            cout << "Enter filename:" << endl;
            cin >> filename; //обработать исключение
            system("cls");
            try
            {
                kep->loadFromFile(filename);
            }
            catch(const MyException& e)
            {
                std::cerr << e.what() << '\n';
                system("pause");
            }
            break;*/
        case '0':
            return void();
        default:
            std::cout << "Incorrect command. Try again." << std::endl;
            cin.clear();
            system("pause");
            break;
        }
    }
}

void Menu::menuAdd(){
    char choose;
    General* tmp;
    while (1)
    {
        system("cls");
        std::cout << "Select command\n";
        std::cout << "1 - Add Aircraft\n";
        std::cout << "2 - Add Car\n";
        std::cout << "3 - Add Train\n";
        std::cout << "0 - Exit\n";
        std::cout << "Your choice: ";
        cin >> choose;
        switch (choose)
        {
        case '1':
            tmp = new Aircraft();
            tmp->setUnit();
            kep->addUnit(tmp);
            break;
        case '2':
            tmp = new Car();
            tmp->setUnit();
            kep->addUnit(tmp);
            break;
        case '3':
           tmp = new Train();
            tmp->setUnit();
            kep->addUnit(tmp);
            break;
        case '0':
            return void();
        default:
            break;
        }
    }
}

void Menu::menuDelete(){
    system("cls");
    int pos;
    /*while (1)
    {
        std::cout << "Enter the raw:";
        std::cin >> pos;

        try
        {
            kep->deleteUnit(pos);
        }
        catch(const MyException& e)
        {
            std::cerr << e.what() << '\n';
            system("pause");
        }
        break;
    }*/
}

void Menu::menuEdit(){
    system("cls");
    int pos;
    /*while (1)
    {
        std::cout << "Enter the pos:";
        std::cin >> pos;

        try
        {
           kep->changeUnit(pos); 
        }
        catch(const MyException& e)
        {
            std::cerr << e.what() << '\n';
            system("pause");
        }
        break;
    }*/
}