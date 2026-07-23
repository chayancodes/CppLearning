//Write a C++ program to create a class Temperature with data member Celsius. 
// Write a member function to convert Celsius into Fahrenheit and display both values.

#include <iostream>
using namespace std;

class Temprature {
    public:
        float Celsius;
        float Farenheit;
    void ConvertF(){
        float C=Celsius;
        float F;
        F=(C*9/5)+32;
        Farenheit=F;
    }
    void insert(float temp){
        Celsius=temp;
    }
};

int main() {
    Temprature C;
    C.insert(52);
    C.ConvertF();
    cout<<"Celsius: "<<C.Celsius<<" Farenheit: "<<C.Farenheit<<endl;
}