/******************************************************************************

2. Escreva uma função que retorne a divisão entre dois números inte.iros
Atenção para a questão da divisão por zero! A divisão não pode ocorrer se o divisor for zero. 

*******************************************************************************/
#include <stdio.h>
float divisao(int a, int b){
    
    while(b == 0){
        printf("O valor do divisor nao pode ser 0!Digite outro valor: \n");
        scanf("%d", &b);
    }
    
    return (float) a / b;
}
    
void main(){
    int a, b;
    printf("Digite o valor do dividendo: \n");
    scanf("%d", &a);
    printf("Digite o valor do divisor: \n");
    scanf("%d", &b);
    
    printf("\nA divisao dos dois valores e: %.2f", divisao(a, b));
}

