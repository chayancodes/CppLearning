//Write a program to create a class bankaccount ith data members  Account number, Customer Name, and Balance. 
// Implement member functions to deposit, withdraw and display the balance.

#include <iostream>
using namespace std;

class BankAccount {
    public:
        int Acc_num;
        string Customer_name;
        int Balance;

    void insert(int acc, string C, int Bal){
        Acc_num = acc;
        Customer_name = C;
        Balance=Bal;
    }
    void deposit(int add) {
        Balance+=add;
    };
    void withdraw(int sub) {
        Balance-=sub;
    };
    void display() {
        cout<<"Account Number: "<<Acc_num<<" Balance: "<<Balance<<endl;
    };
};

int main(){
    BankAccount B1;
    BankAccount B2;
    B1.insert(1234,"Damian",50000);
    B2.insert(1223,"Jason",123456);
    B1.display();
    B2.display();
    cout<<"Inserted:"<<endl;
    B1.deposit(123);
    B1.display();
    cout<<"Withdrawn:"<<endl;
    B1.withdraw(120);
    B1.display();
}

