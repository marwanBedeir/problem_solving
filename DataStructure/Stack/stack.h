#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define Max 100

typedef char entry_type;

typedef struct{
    int top;
    entry_type arr[Max];
}Stack;

void creat_stack(Stack *);
int Is_full(Stack);
int Is_empty(Stack);
void push(Stack *,entry_type);
entry_type pop(Stack *);

#endif // STACK_H_INCLUDED
