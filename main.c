#include <stdio.h>
#include "lib/stack.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	stack st ;
	initStack(&st);
	printStack( &st);
 popData(&st);
	pushData(&st, 5);
	printStack( &st);
	pushData(&st, 15);
	pushData(&st, 25);
	pushData(&st, 35);
	printStack( &st);
	 popData(&st);
	printStack( &st);
	pushData(&st, 45);
		pushData(&st, 55);
		pushData(&st, 65);
		pushData(&st, 75);
		printStack( &st);
	return 0;
}

