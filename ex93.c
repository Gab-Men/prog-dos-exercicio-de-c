#include <stdio.h>

int main() {
    int v[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
