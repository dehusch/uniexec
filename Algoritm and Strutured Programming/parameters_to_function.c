/*
Passagem de parâmetros para funções e passagem por valor

Para criar funções usamos a seguinte sintaxe:

<tipo de retorno> <nome> (<parâmetros>) {

   <Comandos da função>

   <Retorno> (não obrigatório)

}

Com exceção dos parâmetros que uma função pode receber, todos os demais já foram apresentados, portanto, nos dedicaremos a entender esse importante recurso.

Ao definir uma função, podemos também estabelecer que ela receberá informações “de quem” a invocou. Por exemplo, ao criar uma função que calcula a média, podemos definir que “quem chamar” deve informar os valores sobre os quais o cálculo será efetuado.

Na sintaxe, para criar uma função que recebe parâmetros é preciso especificar qual o tipo de valor que será recebido. Uma função pode receber parâmetros na forma de valor ou de referência (SOFFNER, 2013). Na passagem de parâmetros por valores, a função cria variáveis locais automaticamente para armazenar esses valores e, após a execução da função, essas variáveis são liberadas.

Veja, no código - Chamada de função com passagem de valores, um exemplo de definição e chamada de função com passagem de valores. Observe que, na linha 2, a função somar() foi definida para receber dois valores inteiros. Internamente serão criadas as variáveis “a” e “b” locais, para guardar uma cópia desses valores até o final da função.

Na linha 8, a função somar() foi invocada, passando os dois valores inteiros que a função espera receber, e o resultado do cálculo será guardado na variável “result”.
Chamada de função com passagem de valores
*/



/*
#include <stdio.h>

int somar(int a, int b){
    return a + b;
}


int main(){
    int result;
    result = somar(10, 15);
    printf("\nResultado da soma = %d\n", result);

    return 0;
}


*/



/*
Assimile

A técnica de passagem de parâmetros para uma função é extremamente usada em todas as linguagens de programação. Ao chamar uma função que espera receber parâmetros, caso os argumentos esperados não sejam informados, será gerado um erro de compilação.

Ao utilizar variáveis como argumentos na passagem de parâmetros por valores, essas variáveis não são alteradas, pois é fornecida uma cópia dos valores armazenados para a função (SOFFNER, 2013).

_______

Para ficar clara essa importante definição, veja no código - Variáveis em chamada de função com passagem de valores. A execução do programa começa na linha 10, pela função principal, na qual são criadas duas variáveis “n1” e “n2”. Na linha 13, o comando determina a impressão dos valores das variáveis, na linha 16, a função testar() é invocada passando como parâmetro as duas variáveis.

Nesse momento, é criada uma cópia de cada variável na memória para utilização da função. Veja que dentro da função o valor das variáveis é alterado e impresso, mas essa alteração é local, ou seja, é feita na cópia dos valores e não afetará o valor inicial das variáveis criadas na função principal. Na linha 19, imprimimos novamente os valores após a chamada da função.

A figura - Resultado do código - Variáveis em chamada de função com passagem de valores, apresenta o resultado desse programa.
Variáveis em chamada de função com passagem de valores 
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
