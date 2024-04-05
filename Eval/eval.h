#ifndef __EVAL_H
#define __EVAL_H

#include <stdbool.h>

#define TOP_OP_OPEN '('
#define TOP_OP_CLOSE ')'
// 无空格
void infixRegular(char *infix);
// 数字以单个空格分隔
void RPNRegular(char *s);

// Auto regular input
double RPNCalc(const char *s);
void infixToRPN(const char *infix, char *target);
double eval(const char *infix);

bool isOp(char c);
double applyOp(char op, double a, double b);
int opCmp(char a, char b);

#endif
