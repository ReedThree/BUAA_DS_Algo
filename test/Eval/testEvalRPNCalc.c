#include "eval.h"
#include <stdio.h>

#define UNUSED(x) (void)(x)

int main(void) {
    const char *rpn = "24 1 5 3 /+36 6 /2 /+2 -/12 2 /2 /*";
    double r = RPNCalc(rpn);
    printf("%.4f\n", r);

    rpn = "1 1+";
    r = RPNCalc(rpn);
    printf("%.4f\n", r);

    rpn = "1";
    r = RPNCalc(rpn);
    printf("%.4f\n", r);

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
