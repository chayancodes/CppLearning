//Write a C++ program to create a class ElectricityBill with data members Consumer Name and Units Consumed. 
// Write member functions to calculate and display the electricity bill.

#include <iostream>
using namespace std;

class ElectricityBill {
    public:
        string Consumer_name;
        float Units_Consumed;
        float bill;
    void CalculateBill(){
        bill=Units_Consumed*4.95;
    }
    void display(){
        cout<<"Units consumed: "<<Units_Consumed<<" Bill: "<<bill<<endl;
    }
};

int main() {
    
}