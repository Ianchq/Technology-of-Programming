#pragma once
#include "Car.h"
#include "Train.h"
#include "Aircraft.h"
#include "Keeper.h"
#include "General.h"


class Menu{
    private:
        Keeper* kep;
        std::string filename;
        void startMenu();
        void menuAdd();
        void menuDelete();
        void menuEdit();
    public:
        Menu();
};