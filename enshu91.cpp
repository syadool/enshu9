#include <stdio.h>

int main() {
    int test;
    printf("点数を入力");
    scanf("%d", &test);
    if (test >= 60) {
        printf("%d点は単位が出ます", test);
    } else {
        printf("%d点は単位が出ません", test);
    }
    return 0;
}
