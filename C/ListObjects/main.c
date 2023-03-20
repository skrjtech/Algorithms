#include <stdio.h>
#include "ListObject.h"

int main(int argc, char **argv) {
    int val = 1001;
    int *pval = &val;

    ListObject list = ListObjectCreateWithSetObject(pval);

    return 0;
}