// Author: Fernanda Bonfim Santos - Ciência da Computação || 2Semestre //

#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1,p2,p3;
    float media;

printf("\n|--------------------------------------------------|");
printf("\n| Bem-Vindo a Calculadora das notas de seu Curso!  |");
printf("\n|--------------------------------------------------|");

printf("\n Digite a Nota que Recebeu em sua 1° Prova: \n");
scanf("%f", &p1);
printf("\n Digite a Nota que Recebeu em sua 2° Prova: \n");
scanf("%f", &p2);

if (((p1+p2)/2) <= 3){
printf("Você tirou baixas e Reprovou Direto!");

} else if (((p1+p2)/2 > 5) && ((p2+p1)/2 > 5)){
    printf ("\nVocê foi Aprovado de Primeira, Aproveite suas Ferias!!\n");

}else if (((p1+p2)/2 < 5) && ((p2+p1)/2 < 5)){
    printf("\nVocê ficou de Recuperação!\n ");
    printf("\nDigite a nota da prova de Recuperação: \n");
    scanf("%f", &p3);

    media = ((p1+p2+p3)/3);

if (media > 5 ){
    printf("\n Você passou na Recuperação e foi Aprovado, Aproveite suas Férias!\n");

}else{
    printf("\nVocê foi reprovado, deve refazer a disciplina!\n");
}
}


    return 0;
}