#include <stdio.h>

int main() {
    int test;
    printf("点数を入力");
    scanf("%d", &test);
    if (test > 100) {
        printf("この得点は誤っていませんか");
    }
    return 0;
}