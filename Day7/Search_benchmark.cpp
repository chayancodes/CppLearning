// Search benchmarker
// Claude Roadmap
// task1: Generate a sorted array of 1M ints. - done 
// task2: Implement linear search O(n) and binary search O(log n). - done
// task3: Time 1000 random searches of each using std::chrono::high_resolution_clock. 
// task4: Print average microseconds per search. 
// task5: Then introduce a deliberate off-by-one bug in binary search, compile with -g, open gdb, set a breakpoint at the search function, 
// task5(cont): and step through until you find it.

#include <array>
#include <iostream>
#include <cmath>

//universal variables
std::array integrs={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int target=3;

//variables for binary search
int high=integrs.size()-1;
int low=0;


int main() {
    // linear search
    for (int i=0; i<=integrs.size(); ++i) {
        if (integrs[i]==target) {
            std::cout<<"Target found at:"<<i<<"th index";
            break;
        };
    };
    // binary search
    while (low<=high) {
        int mid=low+(high-low)/2;
        if (integrs[mid]==target) {
            std::cout<<"Target found at:"<<mid<<"th index";
            break;
        } else if (integrs[mid]>target) {
            high=mid-1;
        } else if (integrs[mid]<target) {
           low=mid+1;
        }
    }

}