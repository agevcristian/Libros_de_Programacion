#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/*  External variables */
int contents[STACK_SIZE];
int top = 0;

/* prototype */
void read_and_analyze(void);

void stack_underflow(void) {
  printf("Not enough operands in expression.\n");
  exit(EXIT_FAILURE);
}

void stack_overflow(void) {
  printf("Expression is too complex.\n");
  exit(EXIT_FAILURE);
}

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = i;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}

int main(int argc, char *argv[]) {

  for (;;) {
    printf("Enter a RPN expression: ");
    read_and_analyze();
    printf("\n\n");
  }
  return EXIT_SUCCESS;
}

void read_and_analyze(void) {
  char ch;
  int op1, op2;
  int result = 0;

  for (;;) {
    scanf(" %c", &ch);

    switch (ch) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      push(ch - '0');
      break;

    case '+':
    case '-':
    case '*':
    case '/': {
      op1 = pop();
      op2 = pop();
      if (ch == '+') {
        result = op2 + op1;

      } else if (ch == '-') {
        result = op2 - op1;
      } else if (ch == '*') {
        result = op2 * op1;
      } else if (ch == '/') {
        result = op2 / op1;
      }
      push(result);

    }; break;
    case '=': {
      printf("Value of expression: %d.", pop());
    };
      return;

    default:
      exit(EXIT_SUCCESS);
    }
  }
}
