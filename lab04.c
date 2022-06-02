#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*exercicio 1
int main(){
    int n = 0;
    int i;

    for(i=1; i<= 5; i++){
        n = n + 3;
        printf("%d", n);
    }
    return 0;
}
*/
/*exercicio 2
int main(){
    int i;
    for(i=1; i<=100; i++){
        printf("\n%d", i);
    }
    i = 0;
    while(i<100){
        i = i + 1;
        printf("\n%d", i);
    }
    i = 0;
    do{
       i = i + 1;

       printf("\n%d", i);
    }
    while(i<100);
return 0;
}
*/
/*exercicio 3
int main(){

    int i = 10;

    while(i>=0){
        printf("\n%d", i);
        i = i - 1;

    }
    printf("\nFim!");
return 0;
}
*/
/*exercicio 4
int main(){

    int i = 0;
    while(i<=100000){
        printf("\n%d", i);
        i = i + 1000;

    }

return 0;
}
*/
/*exercicio 5
int main(){

    int n;
    int s = 0;
    int c = 1;

    while(c<=10){
       printf("Digite um valor: ");
       scanf("%d", &n);
       c = c + 1;
       s = s + n;
    }
    printf("A soma eh %d", s);
return 0;
}
*/
/*exercicio 6
int main(){

    int n;
    int c;
    int m;
    int s = 0;
    for(c=1; c<=10; c++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);
        s = s + n;
    }
    printf("A media eh %d", m = s/10);
return 0;
}
*/
/*exercicio 7
int main(){

    int n;
    int i;
    int m;
    int s = 0;
    while(i<=10){
       printf("Digite um valor: ");
       scanf("%d", &n);
       if(n<=0){
           printf("Digite um valor postivo dessa vez: ");
           scanf("%d", &n);
       }
       i = i + 1;
       s = s + n;
    }
    printf("A media eh %d", m = s/10);
return 0;
}
*/
/*exercicio 8
int main(){
    int n, menor = 0, maior = 0, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    maior = n;
    menor = n;

    for(i=1; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > maior) maior = n;
        if(n < menor) menor = n;
    }
    printf("O menor numero eh %d e o maior numero eh %d", menor, maior);
    return 0;
    }
*/
/*exercicio 9
int main(){
    int n, i;

    printf("Digite um valor: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%2!=0){
            printf("\n%d", i);
        }
    }

return 0;
}
*/
/*exercicio 10
int main(){

 int n;
 int s = 0;
 int i;

 for(i=1;i<=50;i++){
    if(i%2==0){
        s = s + i;
    }

 }
 printf("A soma dos 50 primeiros numeros pares eh %d ", s);
return 0;
}
*/
/*exercicio 11
int main(){

    int n;
    int i;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);

    while(n<0){
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &n);
    }
    for(i=0;i<=n;i++){
        printf("%d, ", i);
    }

return 0;
}
*/
/*exercicio 12

int main(){
    int numero, i, soma = 0;

           printf("Digite um numero inteiro: ");
           scanf("%d", &numero);

    for(i=1;i<numero;i++){

        if (numero%i==0){

            soma = soma + i;

            }
    }
    printf("A soma dos divisores do numero escolhido eh %d", soma);

return 0;
}
*/
/*exercicio 13
int main(){

    int soma = 0, i = 1;



    for(i=1;i<10;i++){
        if((i%3==0)||(i%5==0)){
            soma = soma + i;
        }

    }

    printf("A soma eh %d", soma);
}
*/
/*exercicio 16

int main(){

    int opc;
    int n1, n2;

    do{
            printf("\nDigite o numero referente a opcao desejada entre: \nAdicao (opcao 1)\nSubtracao (opcao 2)\nMultiplicacao (opcao 3)\nDivisao (opcao 4)\nSaida (opcao 5):\n");
            scanf("%d", &opc);

            if((opc>0) && (opc<5)){
                printf("Digite dois numeros: ");
                scanf("%d %d", &n1, &n2);

    }

    switch(opc){
        case 1:
            printf("O resultado da adicao eh %d", n1 + n2);
            break;
        case 2:
            printf("O resultado da subtracao eh %d", n1 - n2);
            break;
        case 3:
            printf("O resultado da multiplicacao eh %d", n1 * n2);
            break;
        case 4:
            while(n2==0){
                printf("Nao eh possivel dividir por zero!\n");
                printf("Digite novamente o n2: ");
                scanf("%d", &n2);
            }
            printf("O resultado da divisao eh %d", n1 / n2);
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida");
    }
    } while(opc!=5);


return 0;
}
*/
/*exercicio 17
int main() {
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico >= ze){

        chico += 0.02;
        ze += 0.03;
        ano++;

    }
    printf("Ze sera maior que Chico em %d anos", ano);
return 0;
}
*/


