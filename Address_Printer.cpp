// address printer test
// claude roadmap. Project description:
// task1: Declare 4 variables (int, double, char, bool) on the stack. - done
// task2: Print each variable's value and its memory address using &. - done
// task3: Create a pointer to each - done
// task4: Modify each variable through its pointer and print again.
// task5: Create a reference to the int and show that changing the reference changes the original
// refrences - int&
// pointers - int*

#include <iostream>
// variable initialization
int integer=9;
bool boolean=false;
double doble=0.87;
char charizard='c';
// char charizard="charmander"; <- char is one character stupid, also char needs single quotes '' 

//pointer initialization
int* ptr1{&integer};
bool* ptr2{&boolean};
double* ptr3{&doble};
char* ptr4{&charizard};


int main() {
std::cout<<"integer:"<<integer<<"\nboolean:"<<boolean<<"\ndouble:"<<doble<<"\nchar:"<<charizard;
std::cout<<"integer memory:"<<&integer<<"\nboolean memory:"<<&boolean<<"\ndouble memory:"<<&doble<<"\nchar memory:"<<&charizard;

return 0;}