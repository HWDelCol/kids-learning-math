#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_aleatorio, resposta;
    char escolha;

    srand(time(NULL));

    printf("Digite 'S' para comecar o jogo: ");
    scanf("%c", &escolha);

    if(escolha == 'S' || escolha == 's') {
        numero_aleatorio = rand() % 1001;
        printf("Repita o numero gerado: ");
        scanf("%d", &resposta);

        if(resposta == numero_aleatorio) {
            printf("Parabens, voce acertou!\n");
        } else {
            printf("Que pena, voce errou! o numero correto era %d.\n", numero_aleatorio);
        }
    } else {
        printf("Opcao invalida!\n");
        return 1;
    }
    return 0;
}