// Word Frequency counter
// Claude roadmap
// task1: Hardcode a paragraph of text. - done(got lazy to write, so got a para from ChatGPT)
// task2: Parse words into a std::deque as you read them. - done
// task3: Count frequency in an unordered_map. - done
// task4: Store unique words in a std::set (auto-sorted). - done
// task5: Traverse the set using explicit iterator syntax and print each word with its count. - done
// task6: Log the output to a file using your Day 3 Logger (held as unique_ptr). - done

#include <iostream>
#include <sstream>
#include <deque>
#include <unordered_map>
#include <set>
#include "../Day3/RaII_file_logger.hpp"

std::string para="The city woke before sunrise, not because it had to, but because it never really slept. Delivery bikes hissed through rain-dark streets while apartment windows flickered on one by one like a slow electrical heartbeat. Somewhere above the traffic, an old radio played a song nobody under forty could name, yet everyone somehow recognized. ";
std::istringstream stream(para); // this exists so each word can be parsed individually and i dont have to manually separate them. 
std::deque<std::string> words; //deque
std::unordered_map<std::string, int> frequency; //unordered map
std::string word; // temp string 
std::set<std::string> uniquewords; //1 set of unique words 

int main() {
    while (stream>>word) { // this reads one word at a time
        words.push_back(word);
    };
    for (auto word:words) {
        frequency[word]++;
        uniquewords.insert(word); // just added this here, cus why make a new block when u can just add it in an existing block. 
    };
    std::unique_ptr<Logger> log=std::make_unique<Logger>();
    for (auto itr=uniquewords.begin(); itr!=uniquewords.end(); ++itr){
        std::cout<<*itr<<":"<<frequency[*itr]<<"\n"; 
        log->write(*itr+":"+std::to_string(frequency[*itr]));
    };
}