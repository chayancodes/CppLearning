//Write a C++ program to create a class Marks with marks of five subjects as data members.
// Calculate and display the total marks and percentage.

#include <iostream>
using namespace std;

class Marks {
    public:
        float Sub1;
        float Sub2;
        float Sub3;
        float Sub4;
        float Sub5;
    void insert(float S1 ,float s2, float s3, float s4, float s5) {
        Sub1=S1;
        Sub2=s2;
        Sub3=s3;
        Sub4=s4;
        Sub5=s5;
    }
    float total(){
        return(Sub1+Sub2+Sub3+Sub4+Sub5);
    };
    float percent(){
        return((Sub1+Sub2+Sub3+Sub4+Sub5)/5);
    };
};

int main() {
    Marks m1;
    m1.insert(50,50,50,50,50);
    cout<<m1.total()<<endl;
    cout<<m1.percent()<<endl;
}