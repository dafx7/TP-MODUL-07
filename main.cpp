#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack S;
    createStack_103012300198(S);
    push_103012300198(S, 'A');
    push_103012300198(S, 'Y');
    push_103012300198(S, 'A');
    push_103012300198(S, 'J');
    push_103012300198(S, 'B');
    push_103012300198(S, 'A');
    push_103012300198(S, 'L');
    push_103012300198(S, 'F');
    push_103012300198(S, 'I');
    printInfo_103012300198(S);

    pop_103012300198(S);
    pop_103012300198(S);
    pop_103012300198(S);
    pop_103012300198(S);
    pop_103012300198(S);
    printInfo_103012300198(S);

    return 0;
}
