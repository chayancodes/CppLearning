// Const Audit
// claude roadmap. Project description:
//task1 : Take your Day 3 Logger. Make every function that doesn't modify state const. - done in day 3 last
//task2 : Add a get_filename() const method. - done
//task3 : Then write a free function that takes a const Logger& and calls get_filename() — confirm it compiles. - done
//task4 : Try calling a non-const method on a const reference — read the compiler error carefully. - done
//task5 : Add a const int MAX_LINES = 100 and enforce it in write().

#include <fstream>
#include <string>
#include <memory>
#include <iostream>

class Logger {  
    mutable std::ofstream file;
    mutable int line_count=0;
    const int Max_lines=100;
    std::string filename;
    public:
    Logger(std::string name) {
        filename=name;
        file.open(name, std::ios::app);
    };
    std::string get_filename() const {
        return filename;
    };
    void write(std::string msg) const {
        if (line_count>=Max_lines) {
            std::cout<<"logger full, max"<<Max_lines<<" lines reached\n";
            return;
        } else {
            file<<msg<<"\n";
            line_count++;
        };
    };
    ~Logger() {
       file.close();
    };
};

void pF(const Logger& log) {
    std::cout<<"logging to:"<<log.get_filename()<<"\n";
}

int main() {
    {std::unique_ptr<Logger> log=std::make_unique<Logger>("log.txt");
    pF(*log);
    log->write("hello from unique_ptr");};
    std::cout << "past the block, file should be closed now\n";
    
    //Logger log;
    //log.write("hello");
    //log.write("world");
}