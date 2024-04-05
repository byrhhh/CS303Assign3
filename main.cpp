#include "functiondec.h"
#include "functiondef.cpp"
#include <iostream>

int main() {
    std::cout << "Hello World!\n";

    CQ::queue<int> cir_queue;
    cir_queue.push(1);
    cir_queue.empty();
    cir_queue.push(1);
    cir_queue.push(2);
    cir_queue.push(3);
    cir_queue.push(4);
    cir_queue.push(5);
    cir_queue.push(6);
    cir_queue.push(7);
    cir_queue.push(8);
    cir_queue.push(9);
    cir_queue.push(10);
    cir_queue.pop();
    cir_queue.front();
    cir_queue.size();
    cir_queue.empty();

    



    return 0;
}
