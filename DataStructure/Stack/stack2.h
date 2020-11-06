#ifndef STACK2_H_INCLUDED
#define STACK2_H_INCLUDED
#define Max 10
typedef struct{
    int ID;
    int day;
    int month;
    int year;
}student;

typedef student entry_type;

typedef struct{
    int top;
    entry_type arr[Max];
}Stack2;

//funs of original stack

void creat_stack(Stack2 *);
int Is_full(Stack2);
int Is_empty(Stack2);
void push(Stack2 *,entry_type);
entry_type pop(Stack2 *);



#endif // STACK2_H_INCLUDED
