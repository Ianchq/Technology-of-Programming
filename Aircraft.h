#pragma once
#include "General.h"
#include <fstream>
#include <sstream>


class Aircraft: public General{
public:
    Aircraft();
    Aircraft(const std::string& name, double cargoSize, double type, double craftSize, const std::string& cities);

    ~Aircraft();


    void setName(const std::string& name);
    void setCargoSize(double cargoSize);
    void setType(double type);
    void setCraftSize(double craftSize);
    void setCities(const std::string& cities);
    void setUnit() override;
    //virtual void setUnit() = 0;
    void PrintDetails(std::ostream& os) const override;
    void ReadDetails(istream& is)  override;


private:
    std::string cities;
    std::string name;
    double cargoSize;
    double type;
    double craftSize;
};
