#include "Vadder_tb.h"
#include "verilated.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vadder_tb* tb = new Vadder_tb;

    while (!Verilated::gotFinish()) {
        tb->eval();
    }

    delete tb;
    return 0;
}

