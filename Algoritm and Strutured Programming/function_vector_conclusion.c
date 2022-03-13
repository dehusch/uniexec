/*
Você foi contratado por um laboratório de pesquisa que presta serviço para diversas empresas, e agora precisa fazer um programa para a equipe de estatísticos. Foi solicitado a você automatizar o cálculo da média e da mediana e de um conjunto de números reais. Seu programa, além de calcular os resultados, deverá imprimi-los na tela.

Para implementar essa solução você pode criar duas funções que recebem como parâmetro um vetor de números reais, juntamente com seu tamanho (quantidade de elementos).

O primeiro passo é criar as funções que farão os cálculos da média e da mediana. Você pode criá-las da seguinte forma:

    float calcularMedia(float conjunto[], int tam)
    float calcularMediana(float conjunto[], int tam)

Nessas funções, a média aritmética e a mediana do conjunto de números passado como parâmetro deverão ser calculadas e retornadas como resultado.

Em seguida, é preciso criar a função principal, na qual será declarado e populado o conjunto de dados. Em posse dos valores, as funções calcularMedia() e calcularMediana() deverão ser invocadas, e os valores, passados. Os resultados dessas funções devem ser guardados dentro de variáveis, da seguinte forma:

    media = calcularMedia(vet, tam)
    mediana = calcularMedia(vet, tam)

Como último passo, deverão ser impressos os resultados. Para conferir uma opção de implementação do problema, veja o código a seguir:
Cálculos da média e da mediana 
*/
#include<stdio.h>
#define VET_TAM 6

float calcularMedia(float conjunto[], int tam){
    float soma = 0.0, resultado = 0.0;
    for(int i = 0; i < tam; i++){
        soma += conjunto[i];
    }
    resultado = soma / (float) tam;
    return resultado;
}

float calcularMediana(float conjunto[], int tam){
    float resultado = 0.0;
    if (tam % 2 != 0) {
        resultado = conjunto[tam / 2];
    } else {
        resultado = (conjunto[tam / 2] + conjunto[(tam / 2) -1]) / 2;
    }
    return resultado;
}

int main(){
    float vet[VET_TAM] = {1, 2, 3, 4, 5, 6};
    float media = calcularMedia(vet, VET_TAM);
    float mediana = calcularMediana(vet, VET_TAM);
    printf("\n Média = %.2f\n", media);
    printf("\n Mediana = %.2f\n", mediana);
}
    

