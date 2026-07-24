//Write a C++ program to create a class Salary with data members Basic Salary, HRA, and DA.
// Calculate and display the gross salary.

#include <iostream>
using namespace std;

class Salary {
    public:
        int Salary;
        int HRA;
        int DA;
    void insert(int a, int b, int c){
        Salary=a;
        HRA=b;
        DA=c;
    }
    int gross(){
        return(Salary+HRA+DA);
    };
};

int main(){
    Salary S;
    S.insert(50000,2000,1000);
    cout<<S.gross()<<endl;
}