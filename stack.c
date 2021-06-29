#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// DATA_TYPE == int, defined in "stack.h"
/* FYI, stack_t is defined as below:
	struct stack_t{
		DATA_TYPE size;
		DATA_TYPE top;
		DATA_TYPE *arr;
	}

*/

void init_stack(stack_t* s, int size){

	s[size]->top = -1;

}

bool is_full(stack_t* s){
	
	return s->top == SIZE_MAX - 1;

}

bool is_empty(stack_t* s){
	
	return s->top == -1;
}

DATA_TYPE peek(stack_t* s){
	
	if (is_empty(s) == TRUE) {
		return 0;
	}
	else
	{
		s->top = arr[s->top];
	}
	
}

void push(stack_t* s, DATA_TYPE item){
	
	if (is_full(s) == TRUE) {
		printf("Stack is full.\n");
	}
	else {
		s->arr[++(s->top)] = item;
	}

}

void pop(stack_t* s){
	
	if (is_empty(s) == TRUE) {
		printf("Stack is empty.\n");
	}
	else {
		--(s->top);
	}
}

void print_stack(stack_t* s){
	int i;
	
	for (i = 0; i < s->size; i++) {
		printf("%d ", s[i]);
		if (s[i] == '\0') {
			return 0;
		}
	}
}

/* DO NOT define the main function in this file */
