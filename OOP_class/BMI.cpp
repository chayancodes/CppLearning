//Write a C++ program to create a class BMI with data members Height and Weight. Calculate
//and display the Body Mass Index (BMI).

#include <iostream>
using namespace std;

class BMI {
    public:
        float Height;
        float Weight;
    void insert(float a, float b){
        Height=a;
        Weight=b;
    }
    float bmi_calc(){
        float hm=Height/100;
        return(Weight/hm);
    };
};

int main() {
    BMI b;
    b.insert(186,95);
    cout<<b.bmi_calc()<<endl;
}