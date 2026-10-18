#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100


void stack_overflow(void) {
    printf("Overflow.\n");
    exit(EXIT_FAILURE);
}

char contents[STACK_SIZE];
int top = 0;

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char c) {
    if (is_full()) {
        stack_overflow();
    } else 
        contents[top++] = c;
}

char pop(void) {
    if (is_empty()) {
        return 'u';
    } else 
        return contents[--top];
}

int main(void) {
    char ch, stack_ch;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        assert(ch == '(' || ch == ')' || ch == '{' || ch == '}');

        if (ch ==  '(' || ch == '{') {
            push(ch);
        } else {
            stack_ch = pop();
            if((ch == ')' && stack_ch == '{') || (ch == '}' && stack_ch == '(') || stack_ch == 'u') {
                printf("Parentheses/braces aren't nested properly.\n");
                return 0;
            }
          }

    }
     if (is_empty()) {
         printf("Parentheses/braces are nested properly\n");
     } else 
         printf("Parentheses/braces aren't nested properly.\n");

     return 0;

}
