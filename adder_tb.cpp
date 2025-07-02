#include "Vadder.h"
#include "verilated.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vadder* top = new Vadder;

    // Test 1: a = 1, b = 2
    top->a = 1;
    top->b = 2;
    top->eval();
    printf("a=%d b=%d sum=%d\n", top->a, top->b, top->sum);

    // Test 2: a = 3, b = 3
    top->a = 3;
    top->b = 3;
    top->eval();
    printf("a=%d b=%d sum=%d\n", top->a, top->b, top->sum);

    delete top;
    return 0;
}

