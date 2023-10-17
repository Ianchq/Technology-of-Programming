#include "Car.h"

Car::Car() {
    brand = "Unbranded Car";
    cargoSize = 0.0;
    age = 0.0;
    time = 0.0;
    cities = "No cities";
}

Car::Car(const std::string& brand, const std::string& model, double cargoSize, double age, double time, const std::string& cities) {
    this->brand = brand;
    this->model = model;
    this->cargoSize = cargoSize;
    this->age = age;
    this->time = time;
    this->cities = cities;
}

Car :: ~Car(){}

void Car :: setBrand(const std::string& brand){
    this->brand = brand;
}

void Car :: setModel(const std::string& model){
    this->model = model;
}

void Car :: setCargoSize(double cargoSize){
    this->cargoSize = cargoSize;
}

void Car :: setAge(double age){
    this->age = age;
}

void Car :: setTime(double time){
    this->time = time;
}

void Car :: setCities(const std::string& cities){
    this->cities = cities;
}