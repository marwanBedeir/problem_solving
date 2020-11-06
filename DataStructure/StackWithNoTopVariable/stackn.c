#include "stackn.h"
void creat (Stack*s){
    (*s)[0]=0;
}
void push(Stack*s,entry_type item){
    (*s)[++(*s)[0]]=item;
}
void pop(Stack*s,entry_type*x){
    (*x)=(*s)[(*s)[0]--];
}
