#include "servidor_proj.h"
#define PORTA 1317

int main(){

    float ciclo, t_1, t_2, max_desv;

    printf("\nInforme o valor do ciclo:\t");
    scanf("%f", &ciclo );

    printf("\nInforme o valor max da temperatura:\t");
    scanf("%f", &t_1 );

    printf("\nInforme o valor min da temperatura:\t");
    scanf("%f", &t_2 );

    printf("\nInforme o valor max de desvio: \t ");
    scanf("%f", & max_desv);

    //Iniciando socket 
    inicia(PORTA); 
    
}