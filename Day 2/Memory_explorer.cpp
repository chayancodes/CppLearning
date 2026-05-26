// Memory Explorer 
// claude roadmap. Project description:
// task1: Allocate an int array of size 10 on the heap with new[]. - done
// task2: Fill it with squares (i²) - done
// task3: Print each element and its address — notice addresses are sequential
// task4: Then forget to delete[] and add a comment explaining what just leaked. Fix it.
// task5: Then do the same with a stack array and compare addresses.
// task6: Show heap addresses are numerically different from stack addresses.
// refrences - int&
// pointers - int*

int* array { new int[10]};
int main() {
for (int i=0; i<=10; i++) {
    array[i]=i*i;
};

};