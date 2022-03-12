/*
O uso de funções com ponteiros na linguagem C

Você viu que uma função pode retornar um número inteiro, um real e um caractere; mas e um vetor? Será possível retornar? A resposta é sim! Para isso, devemos utilizar ponteiros (ou apontador, como alguns programadores o chamam). Não é possível criar funções como int[10] calcular(), onde int[10] quer dizer que a função retorna um vetor com 10 posições. A única forma de retornar um vetor é por meio de um ponteiro (MANZANO, 2015).

Um ponteiro é um tipo especial de variável, que armazena um endereço de memória, podemos utilizar esse recurso para retornar o endereço de um vetor; assim, a função que “chamou” terá acesso ao vetor que foi calculado dentro da função (MANZANO; MATOS; LOURENÇO, 2015).

Para exemplificar o uso desse recurso vamos implementar uma função, que cria um vetor de dez posições e os preenche com valores aleatórios, imprime os valores e posteriormente passa esse vetor para “quem” chamar a função. Veja no código - Função que retorna vetor, a implementação dessa função. O programa começa sua execução pela linha 15, na função main().

Na linha 17 é criado um ponteiro do tipo inteiro, ou seja, este deverá apontar para um local que tenha número inteiro. Na linha 18 é criada uma variável para controle do laço de repetição. Na linha 20 a função gerarRandomico() é invocada; nesse momento a execução “pula” para a linha 3, a qual indica que a função retornará um endereço para valores inteiros (int*).

Na linha 5 é criado um vetor de números inteiros com 10 posições e este é estático (static), ou seja, o valor desse vetor não será alterado entre diferentes chamadas dessa função. Na linha 8 é criada uma estrutura de repetição para percorrer as 10 posições do vetor. Na linha 9, para cada posição do vetor é gerado um valor aleatório por meio da função rand() % 100 (gera valores entre 0 e 99), e na linha 10 o valor gerado é impresso para que possamos comparar posteriormente.

Na linha 12 a função retorna o vetor, agora preenchido, por meio do comando return r; com isso, a execução volta para a linha 20, armazenando o endereço obtido pela função no ponteiro p. Na linha 22 é criada uma estrutura de repetição para percorrer o vetor.
Função que retorna vetor - Fonte: elaborada pelos autores.

Teste o código - Função que retorna vetor, utilizando a ferramenta Paiza.io.
Resultado do código do quadro Função que retorna vetor. Fonte: elaborada pela autora.

O resultado do código - Função que retorna vetor, pode ser conferido na figura - Resultado do código - Função que retorna vetor.
Resultado do código - Função que retorna vetor

Outro uso importante de ponteiros com funções é na alocação de memória dinâmica. A função malloc(), pertencente à biblioteca <stdio.h>, é usada para alocar memória dinamicamente. Entender o tipo de retorno dessa função é muito importante, principalmente para seu avanço, quando você começar a estudar estruturas de dados. Veja esse comando:

int* memoria = (int*) malloc(sizeof(int));

A função malloc() pode retornar dois valores: NULL ou um ponteiro genérico (ponteiro genérico é do tipo void*) (MANZANO, 2015). Quando houver um problema na tentativa de alocar memória, a função retornará NULL, e quando tudo der certo, a função retornará o ponteiro genérico para a primeira posição de memória alocada (SOFFNER, 2013).

Nesse caso é preciso converter esse ponteiro genérico para um tipo específico, de acordo com o tipo de dado que será guardado nesse espaço reservado. Para isso é preciso fazer uma conversão, chamada de cast, que consiste em colocar entre parênteses, antes da chamada da função, o tipo de valor para o qual se deseja converter.

O número passado entre parênteses equivale à quantidade de bytes a serem alocados pelo computador. Neste caso, o operador sizeof foi usado para calcular a quantidade de bytes necessários para se alocar um número inteiro. Usar o operador sizeof é uma boa prática, pois libera o programador da responsabilidade de determinar a quantidade de memória necessária para cada tipo de dado, na arquitetura específica em que o programa executará.

Agora que vimos o tipo de retorno da função malloc(), vamos entender como usar essa função dentro de uma função criada por nós.

Veja no código - Função para alocar memória dinamicamente: a função alocar() foi criada da linha 4 até 7 e seu tipo de retorno foi especificado como int*; isso significa que o espaço será alocado para guardar valores inteiros. Veja que na linha 8 foi criado um ponteiro inteiro, chamado num, e a função alocar() foi chamada, tendo seu resultado armazenado no ponteiro num.

Em seguida, usamos uma estrutura condicional para saber se alocação foi feita com êxito. Caso o valor do ponteiro memoria seja diferente de NULL (linha 10), então sabemos que a alocação foi feita com sucesso, pedimos que o usuário informe um número inteiro e imprimimos seu resultado na tela.
Função para alocar memória dinamicamente - Fonte: elaborada pelos autores.

Nesta aula você aprendeu a criar funções que, após um determinado conjunto de instruções, retorna um valor para “quem” chamou a sub-rotina. Esse conhecimento permitirá a você criar programas mais organizados, além de evitar repetição de códigos.
*/


//CONCLUSAO

/*

Conclusão

Você foi contratado por um laboratório de pesquisas multidisciplinar que atende a várias empresas. Seu primeiro trabalho é desenvolver uma solução para a equipe de nutrição. Um cliente deseja uma calculadora de IMC (Índice de Massa Corporal). Os nutricionistas lhe passaram a fórmula para calcular o IMC com base no peso e na altura do indivíduo.

Para resolver esse problema você deve ter a fórmula para o cálculo do IMC anotada: IMC = Peso / Altura². Também será preciso criar condicionais para verificar a situação do indivíduo (abaixo do peso, peso ideal ou sobrepeso), com base em seu IMC.

Eis algumas dicas para resolver o problema:

    crie duas variáveis para armazenar valores reais, pois o peso e a altura certamente não serão inteiros.
    leia o valor dessas variáveis dentro da função que calcula o IMC.
    retorne o valor do IMC.
    na função principal, chame a função que calcula o IMC e guarde seu retorno em uma variável inteira.
    use uma estrutura condicional (if-else if-else) para identificar e imprimir na tela a situação do indivíduo.

Eis uma possível solução para a situação problema:

*/

#include <stdio.h>

float calcularIMC(){
    float peso, altura, imc;
    
    printf("\nInforme seu peso (kg): ");
    scanf("%f", &peso);
    printf("\nInforme sua altura (M): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    return imc;
    
}

int main(){
    float imc = calcularIMC();
    if (imc < 18.5) printf("\nIMC = %.2f, Abaixo do peso!", imc);
    else if (imc < 24.9) printf("\nIMC = %.2f, Peso ideal!", imc);
    else printf("\nIMC = %.2f, Sobrepeso!", imc);

    return 0;
}