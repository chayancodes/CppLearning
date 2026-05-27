// Memory Explorer 
// claude roadmap. Project description:
// task1: Allocate an int array of size 10 on the heap with new[]. - done
// task2: Fill it with squares (i²) - done
// task3: Print each element and its address — notice addresses are sequential - done 
// task4: Then forget to delete[] and add a comment explaining what just leaked. Fix it. - done
// task5: Then do the same with a stack array and compare addresses. - done
// task6: Show heap addresses are numerically different from stack addresses. - done
// refrences - int&
// pointers - int*

#include <iostream>
int* heaparray { new int[10]};
int main() {
    // heap array:
for (int i=0; i<10; i++) {
    heaparray[i]=i*i;
};
for (int i=0; i<10; i++) {
    std::cout<<"heaparray value of "<<i<<"th element is:"<<&heaparray[i]<<"\n";
}; // without using delete[], the 40 bytes allocated to 'array' would never be freed. The OS reclaims it when the program closes but in a long running program, its called a memory leak.
delete[] heaparray; //this is the fix?

    //stack array:
int stackarray[10];

for (int i=0; i<10; i++) {
    stackarray[i]=i*i;
};
for (int i=0; i<10; i++) {
    std::cout<<"stackarray value of "<<i<<"th element is:"<<&stackarray[i]<<"\n";}
};