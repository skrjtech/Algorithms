#include <stdio.h>
#include <stdlib.h>

int *InputValue(int *n);
int Search(const int *array, const int n, int *key);

int main(void) {
    int n, key;
    int *array;
    array = InputValue(&n);
    n = Search(array, n, &key);
    if (n == -1) printf("検索要素が見つかりませんでした.");
    else {
        printf("検索したい値の格納場所は,\n");
        printf("\tarray[%d] = %d にあります.\n", n, key);
    }
    free(array);
    return 0;
}

int *InputValue(int *n) {
    int i;
    int *array;
    puts("~線形探索~");
    printf("探索要素数: ");
    scanf("%d", n);
    array = (int*)malloc(*n);
    for (i = 0; i < *n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", (array + i));
    }
    printf("Address: %d\n", array);
    return array;
}

int Search(const int *array, const int n, int *key) {
    printf("Address: %d\n", array);
    int i;
    printf("検索したい値: ");
    scanf("%d", key);
    for (i = 0; i < n; i++) {
        if (i == n) return -1;
        else if (*(array + i) == *key) return i;
    }
}