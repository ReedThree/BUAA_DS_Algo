#ifndef __KMP_SEARCH_H
#define __KMP_SEARCH_H

#include <stddef.h>

void generateNext(char *substr, size_t *next);
char *KMPfindNext(char *s, char *substr);
size_t KMPfindAll(char *s, char *substr, size_t *indexOfOccurence);
#endif