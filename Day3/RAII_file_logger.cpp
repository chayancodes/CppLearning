// RAII file logger
// claude roadmap. Project description:
// task1: Build a Logger class: constructor opens a .txt file, destructor closes it, write(msg) appends a line.
// task2: Comment out the destructor — run it — notice the file may not flush. Restore it.
// task3: Wrap a Logger in a unique_ptr and confirm the file still closes when the pointer goes out of scope.
// task4: All write() calls must be const-correct.