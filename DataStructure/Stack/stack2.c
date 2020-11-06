#include "stack2.h"
// funs for assignment


//funs of original stack

void creat_stack(Stack2 *s){
    s->top=-1;
}

int Is_full(Stack2 s){
    return (s.top==(Max-1));
}

int Is_empty(Stack2 s){
    return(s.top==-1);
}

void push(Stack2 *s,entry_type item){
        s->arr[++s->top]=item;
}

entry_type pop(Stack2 *s){
        return s->arr[s->top--];
}
