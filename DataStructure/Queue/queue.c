#include "queue.h"
void create_queue(Queue*q){
    q->Front=0;
    q->rear=-1;
    q->Size=0;
}
void enqueue(Queue*q,entry_type item){
    q->rear=(q->rear+1)%Max;
    q->arr[q->rear]=item;
    q->Size++;
}
void dequeue(Queue*q,entry_type* item){
    *(item)=q->arr[q->Front];
    q->Front=(q->Front+1)%Max;
    q->Size--;

}
int q_full(Queue*q){
    return(q->Size==Max);
}
int q_empty(Queue*q){
    return(q->Size==0);
}
