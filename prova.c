// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    
    printf("Bem-vindo ao jogo Monty Hall!\n");
   
    int portaPremiada = rand() % 3 + 1;
    int portaVazia;
    int portaEscolhida;
    char opcao;
    

    printf("Escolha uma porta 1 , 2 , 3: ");
    scanf("%d",&portaEscolhida);
    
    printf("O apresentador abriu a porta que está vazia")
    printf("Você deseja trocar para a outra porta? (s/n): ")
    scanf("%c",&opcao);
    
    if(opcao == 's'){
        printf("voce trocou de porta")
            if(portaPremiada == PortaEscolhido){
        printf("Voce ganhou")
    }else{
        printf("Voce perdeu")
    }else{
        printf("voce manteve a porta")
        if(portaPremiada == PortaEscolhido){
        printf("Voce ganhou")
    }else{
        printf("Voce perdeu")
    }
    }
    
    }
    
    
    

    
