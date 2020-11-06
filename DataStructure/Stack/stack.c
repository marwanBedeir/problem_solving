#include "stack.h"

void creat_stack(Stack *s){
    s->top=-1;
}

int Is_full(Stack s){
    return (s.top==(Max-1));
}

int Is_empty(Stack s){
    return(s.top==-1);
}

void push(Stack *s,entry_type item){
        s->arr[++s->top]=item;
}

entry_type pop(Stack *s){
        return s->arr[s->top--];
}
