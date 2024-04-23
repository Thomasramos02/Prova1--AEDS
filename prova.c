#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// correção da prova
int main() {
    srand(time(NULL));
    
    printf("Bem-vindo ao jogo Monty Hall!\n");
   
    int portaPremiada = rand() % 3 + 1;
    int portaVazia;
    int portaEscolhida;
    char opcao;
    
    printf("Escolha uma porta (1, 2, 3): ");
    scanf("%d", &portaEscolhida);
    
    // Simulating the opening of the empty door
    do {
        portaVazia = rand() % 3 + 1;
    } while (portaVazia == portaPremiada || portaVazia == portaEscolhida);
    
    printf("O apresentador abriu a porta que está vazia.\n");
    printf("Você deseja trocar para a outra porta? (s/n): ");
    scanf(" %c", &opcao); // Added space before %c to consume any leading whitespace
    
    if (opcao == 's') {
        printf("Você trocou de porta.\n");
        if (portaPremiada == portaEscolhida) {
            printf("Você ganhou!\n");
        } else {
            printf("Você perdeu.\n");
        }
    } else {
        printf("Você manteve a porta.\n");
        if (portaPremiada == portaEscolhida) {
            printf("Você ganhou!\n");
        } else {
            printf("Você perdeu.\n");
        }
    }
    
    return 0;
}


    
