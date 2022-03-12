/*
Para finalizar esta aula, vamos ver como passar um vetor para uma função. Esse recurso pode ser utilizado para criar funções que preenchem e imprimem o conteúdo armazenado em um vetor, evitando a repetição de trechos de código. Na definição da função, os parâmetros a serem recebidos devem ser declarados com colchetes sem especificar o tamanho, por exemplo: int testar(int v1[], int v2[]). Na chamada da função, os parâmetros devem ser passados como se fossem variáveis simples, por exemplo: resultado = testar(n1,n2).

Na linguagem C, a passagem de um vetor é feita implicitamente por referência. Isso significa que mesmo não utilizando os operadores “*” e “&”, quando uma função que recebe um vetor é invocada, o que é realmente passado é o endereço da primeira posição do vetor.

Para entender esse conceito, vamos criar um programa que, por meio de uma função, preencha um vetor de três posições e em outra função percorra o vetor imprimindo o dobro de cada valor do vetor. Veja, no código - Função com passagem de vetor, o código que começa a ser executado pela linha 17. Na linha 20, a função inserir() é invocada, passando como parâmetro o vetor “numeros”.

Propositalmente criamos a função na linha 2, recebendo como argumento um vetor de nome “a”, para que você entenda que o nome da variável que a função recebe não precisa ser o mesmo nome usado na chamada. Na maioria das vezes, utilizamos o mesmo nome como boa prática de programação. Na função inserir(), será solicitado ao usuário digitar os valores que serão armazenados no vetor “numeros”, pois foi passado como referência implicitamente.

Após essa função finalizar, a execução vai para a linha 21 e depois para a 22, na qual é invocada a função imprimir(), novamente passando o vetor “numeros” como argumento. Mais uma vez, criamos a função na linha 10 com o nome do vetor diferente para reforçar que não precisam ser os mesmos. Nessa função o vetor é percorrido, imprimindo o dobro de cada valor.

Veja na figura - Resultado do código - Função com passagem de vetor, o resultado desse programa.
Função com passagem de vetor
*/
#include <stdio.h>

void inserir(int a[]){
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\nDigite o valor %d:", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[]){
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\nNúmero[%d] = %d:", i, 2 * b[i]);
    }
}

int main(){
    int numeros[3];
    printf("\nPreenchendo o vetor... \n");
    inserir(numeros);
    printf("\nDobro dos valores informados:");
    imprimir(numeros);

    return 0;
}


/*
Com esta aula demos um passo importante no desenvolvimento de softwares, pois os conceitos apresentados são utilizados em todas as linguagens de programação. Continue estudando e se aprofundando no tema.
*/