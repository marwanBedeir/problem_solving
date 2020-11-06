#ifndef STACKN_H_INCLUDED
#define STACKN_H_INCLUDED
#define Max 10
typedef int entry_type;

typedef entry_type Stack[Max];


void creat (Stack*);
void push(Stack*,entry_type);
void pop(Stack*,entry_type*);

#endif // STACKN_H_INCLUDED
