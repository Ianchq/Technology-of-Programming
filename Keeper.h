#include <fstream>
#include <iostream>
#include <sstream>

#pragma once
#include "Struct.h"
#include "Aircraft.h"
#include "Car.h"
#include "Train.h"
#include "MyException.h"

using namespace std;

class Keeper{
    private:
        int count = 0;
        Node* head;
        Node* lastUnit;

    public:
        Keeper():head(nullptr), lastUnit(nullptr){};
        ~Keeper();

        void addUnit(General* unit);
        void deleteUnit(int pos);
        void changeUnit(int pos);
        void printToConsole();
        
        void loadToFile(string nameFile);
        void loadFromFile(string nameFile);

        Node& operator[] (const int index);
};