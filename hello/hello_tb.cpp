#include "Vhello.h"
#include "verilated.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vhello* top = new Vhello;

    // 初期化
    top->eval();

    delete top;
    return 0;
}

