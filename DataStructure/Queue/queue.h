#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define Max 5
typedef int entry_type;

typedef struct{
    int Front;
    int rear;
    entry_type arr[Max];
    int Size;
}Queue;

void create_queue(Queue*);
void enqueue(Queue*,entry_type);
void dequeue(Queue*,entry_type*);
int q_full(Queue*);
int q_empty(Queue*);
#endif // QUEUE_H_INCLUDED
