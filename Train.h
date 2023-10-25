#pragma once

#include "General.h"
#include <fstream>
#include <sstream>


class Train: public General{
public:
    Train();
    Train(const std::string& name, double cargoSize, double age, double numWagons, const std::string& cities);
    Train(string str);

    ~Train();


    void setName(const std::string& name);
    void setCargoSize(double cargoSize);
    void setAge(double age);
    void setNumWagons(double numWagons);
    void setCities(const std::string& cities);
    void setUnit() override;
    //virtual void setUnit() = 0;
    void PrintDetails(std::ostream& os) const override;
    void ReadDetails(istream& is)  override;



private:
    std::string cities;
    std::string name;
    double cargoSize;
    double age;
    double numWagons;
};