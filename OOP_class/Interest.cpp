//Write a C++ program to create a class Interest with data members Principal, Rate, and Time.
// Calculate and display the simple interest.

#include <iostream>
using namespace std;

class Interest{
    public:
        int Principal;
        float Rate;
        float T;
    void insert(int a, float b, float c){
        Principal = a;
        Rate=b;
        T=c;
    }
    float calc(){
        return(Principal*Rate*T);
    };
};

int main() {
    Interest I;
    I.insert(5000,2.0,5);
    cout<<I.calc()<<endl;
}