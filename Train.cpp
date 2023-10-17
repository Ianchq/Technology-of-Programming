#include "Train.h"

Train::Train() {
    name = "Unnamed Train";
    cargoSize = 0.0;
    age = 0.0;
    numWagons = 0.0;
    cities = "No cities";
}

Train::Train(const std::string& name, double cargoSize, double age, double numWagons, const std::string& cities) {
    this->name = name;
    this->cargoSize = cargoSize;
    this->age = age;
    this->numWagons = numWagons;
    this->cities = cities;
}

Train :: ~Train(){}

void Train :: setName(const std::string& name){
    this->name = name;
}

void Train :: setCargoSize(double cargoSize){
    this->cargoSize = cargoSize;
}

void Train :: setAge(double age){
    this->age = age;
}

void Train :: setNumWagons(double numWagons){
    this->numWagons = numWagons;
}

void Train :: setCities(const std::string& cities){
    this->cities = cities;
}