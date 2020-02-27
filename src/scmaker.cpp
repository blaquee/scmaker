#include <iostream>
#include "asmjit/asmjit.h"

using namespace std;
using namespace asmjit;


int main()
{
    JitRuntime jit;
    CodeHolder codeholder;

    codeholder.init(jit.codeInfo());
    x86::Assembler a(&codeholder);
    
    cout << "Hello asmjit" << endl;
    return 0;
    
}