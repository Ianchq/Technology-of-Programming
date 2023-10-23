#pragma once
#include "General.h"
#include <fstream>
#include <sstream>


class Car: public General{
public:
    Car();
    Car(const std::string& brand, const std::string& model, double cargoSize, double age, double time, const std::string& cities);

    ~Car();


    void setBrand(const std::string& brand);
    void setModel(const std::string& model);
    void setCargoSize(double cargoSize);
    void setAge(double age);
    void setTime(double time);
    void setCities(const std::string& cities);
    void setUnit() override;
    //virtual void setUnit() = 0;
    void PrintDetails(std::ostream& os) const override;
    void ReadDetails(istream& is)  override;



private:
    std::string cities;
    std::string model;
    std::string brand;
    double cargoSize;
    double age;
    double time;
};