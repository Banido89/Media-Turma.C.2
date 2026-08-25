#include <stdio.h>
#define TAMANHO 30


void LerNotas(float nota1[], float nota2[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &nota1[i]);





        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &nota2[i]);
    }
}



void ImprimirNotas(const float nota1[],const float nota2[], int tamanho){
  printf("\n===NOTAS DOS ALUNOS===\n");
    for(int i = 0; i < tamanho; i++){
        printf("Aluno %d: Nota 1 = %.2f, Nota 2 = %.2f\n", i+1, nota1[i], nota2[i]);
    }
}



    
void CalcularMedia(const float nota1[], const float nota2[], float media[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        media[i] = (nota1[i]*2 + nota2[i]*3.)/5.0f;
    }
}



float  CalcularMediaTurma(const float media[], int tamanho){
    float soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += media[i];
    }
    return soma / tamanho;
}


void ImprimirAlunosAcimaMedia(const float nota1[], const float nota2[], const float media[], int tamanho, float mediaTurma){
    printf("\n===MÉDIA GERAL DA TURMA: %.2f===\n", mediaTurma);
    printf("\n===ALUNOS ACIMA DA MÉDIA===\n");
    int contador = 0;
    for (int i = 0; i < tamanho; i++){
        if (media[i] > mediaTurma){
            printf("Aluno %d: Nota 1 = %.2f, Nota 2 = %.2f, Média = %.2f\n", i+1, nota1[i], nota2[i], media[i]);
            contador++;
        }
    }
    if (contador == 0){
        printf("Nenhum aluno acima da média.\n");
    }


}




int main(){
    float nota1[TAMANHO], nota2[TAMANHO], media[TAMANHO];



    float mediaTurma;

    LerNotas(nota1, nota2, TAMANHO);
    ImprimirNotas(nota1, nota2, TAMANHO);
    CalcularMedia(nota1, nota2, media, TAMANHO);
    mediaTurma = CalcularMediaTurma(media, TAMANHO);
    ImprimirAlunosAcimaMedia(nota1, nota2, media, TAMANHO, mediaTurma);
    return 0;


}