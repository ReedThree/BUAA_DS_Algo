#include "eval.h"
#include <stdbool.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)

int main(void) {
    const char *infix = "24/(1+5/3+36/6/2-2)*(12/2/2)";
    char rpn[100] = {0};
    infixToRPN(infix, rpn);
    puts(rpn);

    infix = "1+1";
    infixToRPN(infix, rpn);
    puts(rpn);

    infix = "1";
    infixToRPN(infix, rpn);
    puts(rpn);
    return 0;
}

void infixRegular(char *infix) { UNUSED(infix); }
void RPNRegular(char *s) { UNUSED(s); }
bool isOp(char c) {
    if ((c == '+') || (c == '-') || (c == '*') || (c == '/')) {
        return true;
    }
    return false;
}
double applyOp(char op, double a, double b) {
    switch (op) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0.0;
}
int opCmp(char a, char b) {
    if ((a == '+') || (a == '-')) {
        if ((b == '+') || (b == '-')) {
            return 0;
        } else {
            return -1;
        }
    }
    if ((a == '*') || (a == '/')) {
        if ((b == '+') || (b == '-')) {
            return 1;
        } else {
            return 0;
        }
    }
    return 0;
}
