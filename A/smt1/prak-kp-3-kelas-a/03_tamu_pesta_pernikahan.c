#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compareString(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    char **tamu = (char**)malloc(sizeof(char*) * N);
    
    for(int i = 0; i < N; i++) {
        tamu[i] = (char*)malloc(sizeof(char) * 32);
        scanf("%s", tamu[i]);
    }
    
    qsort(tamu, N, sizeof(char *), compareString);

    for (int i = 0; i < N; i++) {
        printf("%s\n", tamu[i]);
    }

    return 0;
}
