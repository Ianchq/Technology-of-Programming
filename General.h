#pragma once
#include <string>
#include <iostream>
using namespace std;
class General{
    protected:
        string brand; 
        string model;
    public:
        General(string brand, string model);
        General(const General& other);
        General();
        virtual ~General(){
            cout << "Destructor General" << endl;
        };
        
        string getBrand() const;
        string getModel() const;
        void setBrand(std::string brand);
        void setModel(std::string model);

        virtual void setUnit() = 0;
        virtual void PrintDetails(std::ostream& os) const = 0;
        virtual void ReadDetails(std::istream& is)  = 0;
};