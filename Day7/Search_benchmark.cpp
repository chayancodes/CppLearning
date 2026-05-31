// Search benchmarker
// Claude Roadmap
// task1: Generate a sorted array of 1M ints. - done 
// task2: Implement linear search O(n) and binary search O(log n). - done
// task3: Time 1000 random searches of each using std::chrono::high_resolution_clock. 
// task4: Print average microseconds per search. 
// task5: Then introduce a deliberate off-by-one bug in binary search, compile with -g, open gdb, set a breakpoint at the search function, 
// task5(cont): and step through until you find it.


#include <iostream>
#include <cmath>
#include <chrono>
#include <vector>
#include <random>

//universal variables
std::vector<int> integrs;
std::mt19937 rng(std::random_device{}()); // random engine for target
std::uniform_int_distribution<int> dist(0,1000); //range: 0 to 1k


int linear_search(std::vector<int>& integrs,int target) {
    for (int i=0; i<=integrs.size(); ++i) {
        if (integrs[i]==target) {
            return i;
        };
    };
};

int binary_search(std::vector<int>& integrs, int target) {
    int high=integrs.size()-1;
    int low=0;
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


int main() {
    // array initialization(loop)
    integrs.reserve(1000000); //this makes it so it doesnt reallocate. maybe.
    for (int i=0; i<1000000; i++) {
        integrs.push_back(i);
    }
    // linear search loop
    for (int i; i<1000; i++) {
        int target=dist(rng); // new target per iteration
        auto start=std::chrono::high_resolution_clock::now();
        int lin=linear_search(integrs,target);
        auto end=std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    };
    
    // binary search
    for (int i; i<1000; i++) {
        int target=dist(rng); // new target per iteration
        auto start=std::chrono::high_resolution_clock::now();
        int bin=binary_search(integrs,target);
        auto end=std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
    };

}