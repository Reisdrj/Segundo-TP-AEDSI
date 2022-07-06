#include <stdio.h>
#include "tp.h"

void cadastrarbus() {
    printf("\nInsira os números dos ônibus:");
    for(int i = 0; i < 4; i++){
        scanf("%d", &onb[i].numerobus);
    }
    for(int i = 0; i < 4; i++){
        printf("%d ", onb[i].numerobus);
    }
}

void cadastrarnum(){
    printf("Insira o número de lugares disponíveis em cada ônibus: ");
    for(int i = 0; i < 4; i++){
        printf("Ônibus %d", onb[i].numerobus);
        scanf("%d", &onb[i].lugares);
    }
}

void reservar(int n){
    if(n != onb[0].numerobus && n != onb[1].numerobus && n != onb[2].numerobus && n != onb[3].numerobus) {
        printf("Opção inválida!");
    }
    else{
        for(int i = 0; i < 4; i++){
            if(n == onb[i].numerobus){
                onb[i].numerobus - 1;
            }
        }
    }
}

void consultarbus(){
    printf("Hwei");
}

void consultarpas(){
    printf("Hwei");
}