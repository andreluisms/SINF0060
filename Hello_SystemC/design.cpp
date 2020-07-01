#include <systemc>
SC_MODULE(Hello_SystemC) { // classe do modulo

   SC_CTOR(Hello_SystemC) { // construtor
      SC_THREAD(main_thread);// register the process
   }

   void main_thread(void) {
      std::cout << "Hello SystemC World!" << std::endl;
   }
};


