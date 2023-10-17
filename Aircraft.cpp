#include "Aircraft.h"

Aircraft :: Aircraft(){
    name = "Unnamed aircraft";
    cities = "No cities";
    cargoSize = 0.0;
    type = 0.0;
    craftSize = 0.0;
}

Aircraft :: Aircraft (const std::string& name, double cargoSize, double type, double craftSize, const std::string& cities){
    this->name = name;
    this->cargoSize = cargoSize;
    this->type = type;
    this->craftSize = craftSize;
    this->cities = cities;
}

Aircraft:: ~Aircraft(){}

void Aircraft :: setName(const std::string& name){
    this->name = name;
}

void Aircraft :: setCargoSize(double cargoSize){
    this->cargoSize = cargoSize;
}

void Aircraft :: setType(double type){
    this->type = type;
}

void Aircraft :: setCraftSize(double craftSize){
    this->craftSize = craftSize;
}

void Aircraft :: setCities(const std::string& cities){
    this->cities = cities;
}