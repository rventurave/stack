#ifndef STACK_H
#define STACK_H
#define SIZE 100;
typedef struct Stack{
int data[SIZE];
int top;
}Stack;
void initStack(Stack *s);
void push(Stack *s, int data);
void pop(Stack *s);
int top(Stack *S);
int size(Stack *s);
#endif
