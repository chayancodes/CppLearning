#pragma once
#include <fstream>
#include <string>
#include <memory>
#include <iostream>

class Logger {  
    mutable std::ofstream file;
    public:
    Logger() {
        file.open("log.txt", std::ios::app);
    };
    void write(std::string msg) const {
        file<<msg<<"\n";
    };
    ~Logger() {
       file.close();
    };
};

