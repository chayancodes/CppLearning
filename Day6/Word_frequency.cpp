// Word Frequency counter
// Claude roadmap
// task1: Hardcode a paragraph of text. - done(got lazy to write, so got a para from ChatGPT)
// task2: Parse words into a std::deque as you read them. 
// task3: Count frequency in an unordered_map. 
// task4: Store unique words in a std::set (auto-sorted). 
// task5: Traverse the set using explicit iterator syntax and print each word with its count. 
// task6: Log the output to a file using your Day 3 Logger (held as unique_ptr).

#include <iostream>
#include <sstream>
#include <deque>
#include <unordered_map>

std::string para="The city woke before sunrise, not because it had to, but because it never really slept. Delivery bikes hissed through rain-dark streets while apartment windows flickered on one by one like a slow electrical heartbeat. Somewhere above the traffic, an old radio played a song nobody under forty could name, yet everyone somehow recognized. ";
std::istringstream stream(para);
std::deque<std::string> words;
std::unordered_map<std::string, int> frequency;
std::string word;
int main() {
    while (stream>>word) { // this reads one word at a time
        words.push_back(word);
    };
    for (auto word:words) {
        frequency[word]++;
    };
    // temp code to check if unordered map is workin:
    for (auto it = frequency.begin(); it != frequency.end(); ++it) { 
    std::cout << it->first << " : " << it->second << "\n";
    }
}