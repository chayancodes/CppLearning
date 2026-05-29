// Iterator walker
// Claude roadmap 
// task1: Create a std::vector of 8 strings. - done
// task2: Traverse it 3 ways: range-for, index loop, and explicit iterator (auto it = v.begin()). - done
// task3: For the iterator version, use std::advance to jump 2 positions forward, then walk backwards using a reverse_iterator (rbegin/rend). 
// task4: Print traversal order for all 3. Confirm they match

#include <vector>
#include <iostream>

std::vector<std::string> eightnum={"a","b","c","d","e","f","g","h"};

int main() {
    // traversal 1, range-for:
    for (int i=0; i<8; i++) {
        std::cout<<i<<"th index in vector is:"<<eightnum[i]<<"\n";
    };
    // traversal 2, index loop
    int cnt=0;
    while (cnt<8) {
        std::cout<<cnt<<"th index in vector is:"<<eightnum[cnt]<<"\n";
        cnt++;
    };
    // traversal3, iterator
    for (auto itr=eightnum.begin(); itr!=eightnum.end(); ++itr) {
        std::cout<<*itr<<"\n";
    };

}
