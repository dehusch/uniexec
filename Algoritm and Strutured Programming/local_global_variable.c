/*Escopo de variáveis, variáveis local e global

Olá estudante, você sabe quantos números de linhas telefônicas ativas existem no mundo hoje? Segundo Almeida e Zanlorenssi (2018), o número de linhas ativas ultrapassa a marca de 8 bilhões. No Brasil, um número de telefone fixo é dividido em três partes: código da região, código da cidade e o número. Imagine um usuário desatento que deseja ligar para uma cidade diferente da que ele reside e ele digita 3441-1111.

Essa ligação iria para qual cidade? Existem várias cidades com o código 3441 e o que as diferencia é o código da região, delimitando o escopo daquele número. O mesmo acontece com variáveis em um programa: o seu escopo definirá o limite de utilização desse recurso.

Variáveis são usadas para armazenar dados temporariamente na memória, porém o local em que esse recurso é definido no código de um programa determina seu escopo e sua visibilidade. Observe no código - Exemplo de variáveis em funções.
Exemplo de variáveis em funções
*/



/*
#include <stdio.h>

int testar(){
    int x = 10;

    return x;
}

int main(){
    int x = 20;
    printf("\nValor de x na função main() = %d\n", x);
    printf("\nValor de x na função testar() = %d\n", testar());

    return 0;
}
*/



/*
Na implementação do código - Exemplo de variáveis em funções, temos duas variáveis chamadas “x”. Isso acarretará algum erro? A resposta, nesse caso, é não, pois mesmo as variáveis tendo o mesmo nome, elas são definidas em lugares diferentes: uma está dentro da função main() e outra dentro da testar(), e cada função terá seu espaço na memória de forma independente.

Na memória, as variáveis são localizadas pelo seu endereço, portanto, mesmo sendo declaradas com o mesmo nome, seus endereços são distintos. A partir desse exemplo, pode-se definir o escopo de uma variável como “a relação de alcance que se tem com o local onde certo recurso se encontra definido, de modo que possa ser ‘enxergado’ pelas várias partes do código de um programa” (MANZANO, 2015, p. 288).

O escopo é dividido em duas categorias, local ou global (MANZANO; MATOS; LOURENÇO, 2015).

No exemplo do código - Exemplo de variáveis em funções, ambas variáveis são locais, ou seja, elas existem e podem ser vistas somente dentro do corpo da função onde foram definidas. Para definir uma variável global, é preciso criá-la fora de qualquer função, assim ela será visível por todas as funções do programa. No contexto apresentado nessa aula, elas serão criadas logo após a inclusão das bibliotecas.

No código - Exemplo de variável global, é apresentado um exemplo de declaração de uma variável global, na linha 3, logo após a inclusão da biblioteca de entrada e saída padrão. Veja que na função principal não foi definida qualquer variável com o nome de “x” e mesmo assim seu valor pode ser impresso na linha 10, pois é acessado o valor da variável global. Já na linha 12 é impresso o valor da variável global modificado pela função testar(), que retorna o dobro do valor.
Exemplo de variável global - 
*/


/*
#include <stdio.h>

int x = 10;

void testar(){
    x = 2 * x;

}

int main(){
    printf("\nValor de x global = %d\n", x);
    //ate este ponto a var x = 10
    testar();
    //quando trago testar() a var = 20
    printf("\nValor de x global alterado em testar() = %d\n", x);

    return 0;
}
*/



/*
Assimile

A utilização de variáveis globais permite otimizar a alocação de memória, pois em vários casos o desenvolvedor não precisará criar variáveis locais. Por outro lado, essa técnica de programação deve ser usada com cautela, pois variáveis locais são criadas e destruídas ao fim da função, enquanto as globais permanecem na memória durante todo o tempo de execução.

_______

A seguir será apresentado um exemplo da utilização do escopo global de uma variável. Vamos criar um programa que calcula a média entre duas temperaturas distintas. Observe no código - Calcular média de temperatura com variável global, na linha 3, em que foram declaradas duas variáveis. É importante destacar que o programa sempre começa pela função principal e a execução inicia na linha 8.

Na linha 9, é solicitado ao usuário digitar duas temperaturas (em que é pedido conforme a linha 10), as quais são armazenadas dentro das variáveis globais criadas. Na linha 11, a função calcularMedia() é invocada para fazer o cálculo da média usando os valores das variáveis globais. Nesse exemplo, fica clara a utilidade dessa técnica de programação, pois as variáveis são usadas em diferentes funções, otimizando o uso da memória, pois não foi preciso criar mais variáveis locais.
Calcular média de temperatura com variável global 
*/



/*
#include <stdio.h>

float t1, t2;

float calcularMedia(){
    return(t1 + t2) /2;
}

int main(){
    printf("\nDigite as duas temperaturas: ");
    scanf("%f %f", &t1, &t2);
    printf("\nA temperatura media é %.2f\n", calcularMedia());
    
    return 0;
}
*/



/*
A variável local sempre sobrescreverá o valor da global

_______

Na linguagem C, para conseguirmos acessar o valor de uma variável global, dentro de uma função que apresenta uma variável local com mesmo nome, devemos usar a instrução extern (MANZANO, 2015). No código - Variável global e local com mesmo nome, veja como utilizar variáveis globais e locais com mesmo nome na linguagem C.

Observe que foi necessário criar uma variável chamada “b”, com um bloco de instruções (linhas 8 – 11), que atribui à nova variável o valor “externo” de x.
Variável global e local com mesmo nome 
*/
#include <stdio.h>

int x = 10;


int main(){
    int x = -1;
    int b;
    {
        extern int x; //chama o valor de x global
        b = x;
    }
    printf("\nValor de x = %d\n", x);
    printf("\nValor de b (x global) = %d\n", b);

    return 0;
}