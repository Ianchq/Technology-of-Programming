#include <string>
//#include "Header.h"

class Train {
public:
    Train();
    Train(const std::string& name, double cargoSize, double age, double numWagons, const std::string& cities);

    ~Train();


    void setName(const std::string& name);
    void setCargoSize(double cargoSize);
    void setAge(double age);
    void setNumWagons(double numWagons);
    void setCities(const std::string& cities);

private:
    std::string cities;
    std::string name;
    double cargoSize;
    double age;
    double numWagons;
};