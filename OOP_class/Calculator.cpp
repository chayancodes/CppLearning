//Write a C++ program to create a class Calculator with two numbers as data members.
//Implement member functions to perform addition, subtraction, multiplication, and division.

#include <iostream>
using namespace std;

class Calculator {
    public:
        float num1;
        float num2;
    void insert(float a, float b) {
        num1=a;
        num2=b;
    }
    float add() {
        return(num1+num2);
    };
    float sub() {
        return(num1-num2);
    };
    float mult() {
        return(num1*num2);
    };
    float div() {
        return(num1/num2);
    };
};

int main() {
    Calculator C1;
    C1.insert(5,10.1);
    cout<<C1.add()<<endl;
    cout<<C1.sub()<<endl;
    cout<<C1.mult()<<endl;
    cout<<C1.div()<<endl;
}