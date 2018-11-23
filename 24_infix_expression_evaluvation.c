#include <stdio.h>
#include <stdlib.h>
int power(int base, int exponent) {
  if (exponent==1) {
    return 1;
  } else {
    return base*power(base, exponent-1);
  }
}
int instackPriority(char symbol) {
  switch(symbol) {
    case '+':
    case '-':
      return 2;
    case '*':
    case '/':
      return 4;
    case '^':
      return 6;
    case '(':
      return 0;
  }
}
int incomingPriority(char symbol) {
  switch(symbol) {
    case '+':
    case '-':
      return 1;
    case '*':
    case '/':
      return 3;
    case '^':
      return 5;
  }
}
int evaluvate(int operand1, int operator, int operand2) {
  switch(operator) {
    case '+':
      return (operand1+operand2);
    case '-':
      return (operand1-operand2);
    case '*':
      return (operand1*operand2);
    case '/':
      return (operand1/operand2);
    case '^':
      return (power(operand1, operand2));
    default:
      printf("Invalid operator");
      exit(0);
  }
}
int isOperand(char symbol) {
  if ((symbol>=48 && symbol<=57)) {
    return 1;
  }
  return 0;
}
int main() {
  char infix[20], operator;
  int operatorStack[100], operandStack[100];
  int i, operatorTop=-1, operandTop=-1, x, y;
  printf("Enter the infix expression : ");
  scanf(" %s", &infix);
  for (i=0; infix[i] != '\0'; i++) {
    if (isOperand(infix[i])) {
      operandStack[++operandTop] = infix[i]-48;
    } else {
      operatorStack[++operatorTop] = infix[i];
    }
  }
  while (operatorStack[operand]
}