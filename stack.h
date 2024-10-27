#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define info(S) (S).info
#define Top(S) (S).Top

using namespace std;

typedef char infotype;

struct stack {
    infotype info[15];
    int Top;
};

void createStack_103012300198(stack &S);
bool isEmpty_103012300198(stack S);
bool isFull_103012300198(stack S);
void push_103012300198(stack &S, infotype x);
infotype pop_103012300198(stack &S);
void printInfo_103012300198(stack S);

#endif // STACK_H_INCLUDED
