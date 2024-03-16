#include <stdio.h>
#include "stack.h"

void initStack(stack *st) {
	st->stackPointer = -1;
}
void pushData(stack *st, int data) {

	if (isStackFull(st) == 0) {
		st->stackPointer++;
		st->array[st->stackPointer] = data;
		printf(" Data push successfully\n");
	} else if (isStackFull(st) == 1) {
		printf("Stack is Full \n");
	} else
		printf("Stack not Initialized \n");

}
void popData(stack *st) {
	int data =NULL  ;
	if (isStackEmpty(st) == 0) {
			data = st->array[st->stackPointer]  ;
			st->array[st->stackPointer]  =0;
			st->stackPointer--;

			printf(" Data POP successfully : %d\n", data);
		} else if (isStackEmpty(st) == 1) {
			printf("Stack is Empty\n");
		} else
			printf("Stack not Initialized \n");

}
void printStack(stack *st) {

	if (st != NULL && st->stackPointer >= -1 && st->stackPointer < STACKSIZE) {
		if (isStackEmpty(st) == 0) {
			printf("Printing Stack .....\n");
			for (int i = 0; i <= st->stackPointer; i++) {
				printf("%d\n", st->array[i]);
			}
		} else
			printf("Stack is Empty\n");
	} else
		printf("Stack not Initialized \n");
}

int isStackEmpty(stack *st) {
	if (st != NULL && st->stackPointer >= -1 && st->stackPointer < STACKSIZE) {
		if (st->stackPointer == -1)
			return 1;
		else
			return 0;
	} else {
		return -1;
	}
}
int isStackFull(stack *st) {
	if (st != NULL && st->stackPointer >= -1 && st->stackPointer < STACKSIZE) {
		if (st->stackPointer == (STACKSIZE - 1))
			return 1;
		else
			return 0;
	} else {
		return -1;
	}
}

