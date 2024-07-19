#pragma once

#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
	struct Node* pNext;
	int data;
}Node;

typedef struct Stack
{
	Node* pFirst;
	int size;
}Stack,*HndStack;

HndStack initStack();
int push(HndStack hnd, int val);
int pop(HndStack hnd);
int isEmpty(HndStack hnd);
int getSize(HndStack hnd);
void makeEmpty(HndStack hnd);
void destroy(HndStack hnd);