#pragma once
#include <string>
#include <iostream>
#include "General.h"
using namespace std;

 General::General(string brand, string model){
    this->brand = "Not Stated";
    this->model = "Not Stated";
 }

 General::General(const General& other){
    this->brand = other.brand;
    this->model = other.model;
 }

 General::General(){}
 General:: ~General(){}

 string General::getBrand() const{
    return this->brand;
 }

  string General::getModel() const{
    return this->model;
 }

 void General::setBrand(string brand){
    this->brand = brand;
 }

 void General::setModel(string model){
    this->model = model;
 }
