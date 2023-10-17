#include <string>
//#include "Header.h"

class Car {
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

private:
    std::string cities;
    std::string model;
    std::string brand;
    double cargoSize;
    double age;
    double time;
};