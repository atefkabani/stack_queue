/*
 * stack.h
 *
 *  Created on: Mar 16, 2024
 *      Author: atefk
 */

#ifndef LIB_STACK_H_
#define LIB_STACK_H_

#define STACKSIZE 5

typedef struct {
	int  stackPointer ;
	int array[STACKSIZE];
} stack;

void initStack(stack * st);
void pushData(stack * st , int data);
void popData(stack* st );
void printStack(stack * st);
int isStackEmpty(stack * st);
int isStackFull(stack * st);

#endif /* LIB_STACK_H_ */
