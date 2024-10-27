#include <iostream>
#include "stack.h"

void createStack_103012300198(stack &S)
{
    Top(S) = 0;
}

bool isEmpty_103012300198(stack S)
{
    if (Top(S) == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull_103012300198(stack S)
{
    if (Top(S) == 15) {
        return true;
    } else {
        return false;
    }
}

void push_103012300198(stack &S, infotype x)
{
    if (!isFull_103012300198(S)) {
        Top(S)++;
        info(S)[Top(S)] = x;
    }
}
infotype pop_103012300198(stack &S)
{
    infotype x;
    x = info(S)[Top(S)];
    Top(S)--;
    return x;
}

void printInfo_103012300198(stack S)
{
    for (int i = Top(S); i >= 1; i--)
    {
        cout << info(S)[i] << "  ";
    }
    cout << endl;
}





