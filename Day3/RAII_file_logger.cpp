// RAII file logger
// claude roadmap. Project description:
// task1: Build a Logger class: constructor opens a .txt file, destructor closes it, write(msg) appends a line. - done
// task2: Comment out the destructor — run it — notice the file may not flush. Restore it. - done
// task3: Wrap a Logger in a unique_ptr and confirm the file still closes when the pointer goes out of scope.
// task4: All write() calls must be const-correct.

//file access:
#include <fstream>
#include <string>
#include <memory>
#include <iostream>

class Logger {  
    std::ofstream file;
    public:
    Logger() {
        file.open("log.txt", std::ios::app);
    };
    void write(std::string msg) {
        file<<msg<<"\n";
    };
    ~Logger() {
       file.close();
    };
};

int main() {
    {std::unique_ptr<Logger> log=std::make_unique<Logger>();
    log->write("hello from unique_ptr");};
    std::cout << "past the block, file should be closed now\n";
    
    //Logger log;
    //log.write("hello");
    //log.write("world");
}