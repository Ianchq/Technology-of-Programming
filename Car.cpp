#include "Car.h"
#include <iostream>

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

void Car::setUnit(){
    std::cout << "Brand: "; std::cin >> this->brand; std::cout << std::endl;
    std::cout << "Model: "; std::cin >> this->model; std::cout << std::endl;
    std::cout << "cargoSize: "; std::cin >> this->cargoSize; std::cout << std::endl;
    std::cout << "Age: "; std::cin >> this->age; std::cout << std::endl;
    std::cout << "time: "; std::cin >> this->time; std::cout << std::endl;
    std::cout << "Cities: "; std::cin >> this->cities; std::cout << std::endl;
}

Car::Car(string str):General(){
    string brand;
    string model;
    double cargoSize;
    double age;
    double time;
    string cities;
    istringstream iss(str);
    iss >> brand >> model >> cargoSize >> age >> time >> cities;
    this->brand = brand;
    this->model = model;
    this->cargoSize = (double)cargoSize;
    this->age = (double)age;
    this->time = (double) time;
    this->cities = cities;   
}

void Car::PrintDetails(ostream& os) const{
        os << "Car ";
        os << this->brand << " ";
        os << this->model << " ";
        os << this->cargoSize << " ";
        os << this->age << " ";
        os << this->time << " ";
        os << this->cities << endl;
    }

void Car::ReadDetails(istream& is) {
    is >> brand >> model >> cargoSize >> age >> time >> cities;
}