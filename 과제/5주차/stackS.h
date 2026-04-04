#pragma once
#define STACK_SIZE 100

typedef int element;
extern element stack[STACK_SIZE];
extern int top;

int isStackEmpty();			// 스택 원소(element)의 자료형을 int로
int isStackFull();			// 1차원 배열 스택 선언
void push(element item);
element pop();
element peek();
void printStack();