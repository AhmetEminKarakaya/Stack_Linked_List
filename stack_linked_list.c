#include "stack_linked_list.h"

HndStack initStack()
{
	HndStack hnd = (HndStack)malloc(sizeof(Stack));
	if (hnd == NULL)
	{
		printf("initStack Error...");
		return NULL;
	}
	hnd->pFirst = NULL;
	hnd->size = 0;

	return hnd;
}

int push(HndStack hnd, int val)
{
	Node* pNewnode = (Node*)malloc(sizeof(Node));
	if (pNewnode == NULL)
	{
		printf("Error...");
		return -1;
	}
	pNewnode->data = val;
	pNewnode->pNext = hnd->pFirst;
	hnd->pFirst = pNewnode;
	hnd->size++;

	return 0;
}

int pop(HndStack hnd)
{
	Node* poldNode;
	int popdata;

	if (isEmpty(hnd))
	{
		printf("Stack is empty...");
		exit(EXIT_FAILURE);
	}

	poldNode = hnd->pFirst;
	hnd->pFirst = poldNode->pNext;
	popdata = poldNode->data;

	free(poldNode);
	hnd->size--;

	return popdata;
}

int isEmpty(HndStack hnd)
{
	return hnd->pFirst == NULL;
}

int getSize(HndStack hnd)
{
	return hnd->size;
}

void makeEmpty(HndStack hnd)
{
	while (!isEmpty(hnd))
		pop(hnd);
}

void destroy(HndStack hnd)
{
	makeEmpty(hnd);
	free(hnd);
}