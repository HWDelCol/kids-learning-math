#include <stdio.h>

int main() {
    int i;
    char escolha;

    printf("Escolha a opcao de contagem (C para cresente, D para decresente): ");
    scanf("%c", &escolha);

    if(escolha == 'C' || escolha == 'c') {
        for( i = 0; i <= 1000; i++) {
            printf("%d\n", i);
        }
    } else if (escolha == 'D' || escolha == 'd') {
        for(i = 1000; i >= 0; i--) {
            printf("%d\n", i);
        }
    } else {
        printf("Opcao invalida!\n");
        return 1;
    }
    return 0;
}