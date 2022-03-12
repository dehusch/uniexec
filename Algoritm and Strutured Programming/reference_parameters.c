/*Passagem por referência

A utilização de passagem de parâmetros por referência está diretamente ligada aos conceitos de ponteiro e endereço de memória. A ideia da técnica é análoga à passagem por valores, ou seja, a função será definida de modo a receber certos parâmetros e “quem” faz a chamada do método deve informar esses argumentos. Entretanto, o comportamento e o resultado são diferentes.

Na passagem por referência não será criada uma cópia dos argumentos passados; na verdade, será passado o endereço da variável e a função trabalhará diretamente com os valores ali armazenados (SOFFNER, 2013).

Como a função utiliza o endereço (ponteiros), na sintaxe, serão usados os operadores * e & (MANZANO, 2015). Na definição da função os parâmetros a serem recebidos devem ser declarados com *, por exemplo: int testar(int* parametro1, int* parametro2). Na chamada da função, os parâmetros devem ser passados com o &, por exemplo: resultado = testar(&n1, &n2).

Veja no código - Variáveis em chamada de função com passagem de referência, um exemplo de uma função que passa variáveis como referência. Observe que a única diferença desse código para o do código -Variáveis em chamada de função com passagem de valores, é a utilização dos operadores * e &, porém, o resultado é completamente diferente (figura - Resultado do código - Variáveis em chamada de função com passagem de referência).

Com a passagem por referência os valores das variáveis são alterados. Nas linhas 4 e 5, usamos asterisco para acessar o conteúdo guardado dentro do endereço que ele aponta, pois se usássemos somente n1 e n2 acessaríamos o endereço que eles apontam.
Variáveis em chamada de função com passagem de referência
*/

#include <stdio.h>

int testar(int n1, int n2){
    n1 = -1;
    n2 = -2;
    printf("\nValores dentro da função testar():\n");
    printf("\nn1 = %d e n2 = %d\n",n1, n2);
}


int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a função testar(): \n");
    printf("\nn1 = %d e n2 = %d\n",n1, n2);

    testar(n1, n2);

    printf("\nValores depois de chamar a função testar(): \n");
    printf("\nn1 = %d e n2 = %d\n",n1, n2);


    return 0;
}
