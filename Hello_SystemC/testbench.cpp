#include "systemc.h"
#include "design.cpp"

int sc_main(int sc_argc, char* sc_argv[]) {
   Hello_SystemC HelloWorld_i("HelloWorld_i");
   sc_start(); // começa simulação
   return 0;
}
