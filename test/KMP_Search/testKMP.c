#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "KMP_Search.h"

#define MAXLEN 1000005

char *s_gets(char *dst, int n);

int main(void) {
    char s1[MAXLEN] = {0};
    char s2[MAXLEN] = {0};

    s_gets(s1, MAXLEN);
    s_gets(s2, MAXLEN);

    size_t s1Len = strlen(s1);

    size_t *indexOfOccurence = (size_t *)malloc(s1Len * sizeof(size_t));

    size_t count = KMPfindAll(s1, s2, indexOfOccurence);

    for (size_t i = 0; i < count; i++) {
        printf("%zu\n", indexOfOccurence[i]);
    }

    free(indexOfOccurence);
    return 0;
}

char *s_gets(char *dst, int n) {
    char *ret = fgets(dst, n, stdin);
    int i = 0;
    if (ret != NULL) {
        while (dst[i] != '\n' && dst[i] != '\0') {
            i++;
        }
        if (dst[i] == '\n') {
            dst[i] = '\0';
        } else {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
                continue;
            }
        }
    }

    return ret;
}
