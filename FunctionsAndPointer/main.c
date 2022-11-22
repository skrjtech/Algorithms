#include <stdio.h>
#include <stdlib.h>

int *getarray(int n);
void View(int n, int *(*GetArray)(int));

int main(void) {
    View(3, getarray);
    return 0;
}

int *getarray(int n) {
    int *array = (int *)malloc(n);
    for (int i = 0; i < n; i++) 
        printf("getarray | %p\n", &array[i]);
    return array;
}

void View(int n, int *(*GetArray)(int)) {
    int *array = (*GetArray)(n);
    for (int i = 0; i < n; i++) 
        printf("View | %p\n", &array[i]);
}