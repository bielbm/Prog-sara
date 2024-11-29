#include <stdio.h>
int fatorial(int num){
    int fato = 1;
    for (int i = 1; i <= num; i++) {
        fato *= i;
    }
    
    return fato;
}

int main()
{

int num;
float resul = 1.0;
printf("Digite um numero para N para terminar essa conta 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!, lembrando o numero digitado sera subistituido por N:\n");
scanf("%d",&num);
for(int i = 1; i <= num; i++){
    resul += 1.0 / fatorial(i); 
}
    printf("O resultado da soma e: %.5f\n", resul);

    return 0;
}