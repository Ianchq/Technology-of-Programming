#include <string>
//#include "Header.h"

class Aircraft {
public:
    Aircraft();
    Aircraft(const std::string& name, double cargoSize, double type, double craftSize, const std::string& cities);

    ~Aircraft();


    void setName(const std::string& name);
    void setCargoSize(double cargoSize);
    void setType(double type);
    void setCraftSize(double craftSize);
    void setCities(const std::string& cities);

private:
    std::string cities;
    std::string name;
    double cargoSize;
    double type;
    double craftSize;
};
