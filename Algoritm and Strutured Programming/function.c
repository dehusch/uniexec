/*Funções

Em uma empresa, quando precisa resolver um problema na folha de pagamento, você se dirige até o setor financeiro. Quando vai sair de férias, precisa ir até o RH para assinar o recibo de férias. Quando precisa de um determinado suprimento, o setor responsável o atende. Mas e se não houvesse essa divisão, como você saberia a quem recorrer em determinada situação? Seria mais difícil e desorganizado, certo?

Um software deve ser construído seguindo o mesmo princípio de organização: cada funcionalidade deve ser colocada em um “local” com uma respectiva identificação, para que o requisitante a possa encontrar. Uma das técnicas de programação utilizada para construir programas dessa forma é a construção de funções, que você aprenderá nesta aula.

Até esse momento, você já implementou diversos algoritmos na linguagem C. Nesses programas, mesmo sem ainda conhecer formalmente, você já utilizou funções que fazem parte das bibliotecas da linguagem C, como printf() e scanf(). Na verdade, você utilizou uma função desde a primeira implementação, mesmo sem conhecê-la, pois é uma exigência da linguagem.

Observe o programa no código - Programa Hello World, que imprime uma mensagem na tela. Veja o comando na linha 2, int main(). Esse comando especifica uma função que se chama “main” e que vai devolver para quem a requisitou um valor inteiro, nesse caso, zero. Vamos entender como construir e como funciona esse importante recurso.
Programa Hello World - Fonte: elaborada pelos autores.

A ideia de criar programas com blocos de funcionalidades vem de uma técnica de projeto de algoritmos chamada dividir para conquistar (MANZANO; MATOS; LOURENÇO, 2015). A ideia é simples: dado um problema, este deve ser dividido em problemas menores, o que facilita a resolução e organização. A técnica consiste em três passos (figura - Esquema da técnica dividir para conquistar):

    dividir: quebrar um problema em outros subproblemas menores. “Solucionar pequenos problemas, em vez de um grande problema, é, do ponto de vista computacional, supostamente mais fácil” (MANZANO; MATOS; LOURENÇO, 2015, p. 102).
    conquistar: usar uma sequência de instruções separada, para resolver cada subproblema.
    combinar: juntar a solução de cada subproblema para alcançar a solução completa do problema original.

Esquema da técnica dividir para conquistar - Fonte: adaptada de Manzano, Matos e Lourenço (2015, p. 102).

Agora que foi apresentada a ideia de subdividir um problema, podemos avançar com os conceitos sobre as funções.

Uma função é definida como um trecho de código escrito para solucionar um subproblema (SOFFNER, 2013).

Esses blocos são escritos tanto para dividir a complexidade de um problema maior quanto para evitar a repetição de códigos. Essa técnica também pode ser chamada de modularização, ou seja, um problema será resolvido em diferentes módulos (MANZANO, 2015).

_______

🔁 Assimile

A modularização é uma técnica de programação que permite a divisão da solução de um problema a fim de diminuir a complexidade, tornar o código mais organizado e evitar a repetição de códigos.
*/






//SINTESE






/*Para criar uma função utiliza-se a seguinte sintaxe:

<tipo de retorno> <nome> (<parâmetros>){

   <Comandos da função>

   <Retorno> (não obrigatório)

}

Em cada declaração da função, alguns parâmetros são obrigatórios e outros opcionais. Veja cada parâmetro.

    <tipo de retorno> – Obrigatório. Esse parâmetro indica qual o tipo de valor que a função vai retornar. Pode ser um valor inteiro (int), decimal (float ou double), caractere (char) etc. Quando a sub-rotina faz um processamento e não retorna qualquer valor, usa-se o tipo void e, nesse caso, é chamado de procedimento (MANZANO, 2015).
    <nome> – Obrigatório. Parâmetro que especifica o nome que identificará a função. É como o nome de uma pessoa; para convidá-la para sair você precisa “chamá-la pelo nome”. O nome não pode ter acento nem caractere especial (mesmas regras para nomes de variáveis).
    <parênteses depois do nome> – Obrigatório. Toda função ou procedimento sempre terá o nome acompanhado de parênteses. Por exemplo: main(), printf(), somar() etc.
    <comandos da função> – Opcional. Veremos na próxima aula.
    <retorno> – Quando o tipo de retorno for void esse parâmetro não precisa ser usado, porém, quando não for void é obrigatório. O valor a ser retornado tem que ser compatível com o tipo de retorno, senão o problema resultará em erro de compilação em algumas linguagens, e em outras retornará um valor errôneo. Na linguagem C, vai ser retornado um valor de acordo com o tipo.

Em qual parte do código a função deve ser programada?

A função main(), que traduzindo significa principal, é de uso obrigatório em várias linguagens de programação, por exemplo, em C, em Java e em C#. Ela é usada para identificar qual é a rotina principal do programa e por onde a execução deve começar.

Na linguagem C, vamos adotar sempre a criação das funções (sub-rotinas) antes da função main(), por uma questão de praticidade e conveniência.

_______

📝 Exemplificando

Veja no código - Programa com a função somar(), um programa que utiliza uma função para calcular a soma entre dois números e, a seguir, sua explicação detalhada.
Programa com a função somar() - Fonte: elaborada pelos autores.

Teste o código - Programa com a função somar(), utilizando a ferramenta Paiza.io.

______

A função somar() no código - Programa com a função somar(), inicia-se na linha 2 e termina na linha 4, com o fechamento das chaves. Vamos analisar os parâmetros para esse caso.

<tipo de retorno> – Foi especificado que a função vai retornar um valor inteiro (int).

<nome> – somar.

<comandos da função> – Essa função foi criada de modo a retornar a soma de dois valores, tudo em um único comando: return 2 + 3.

Vale ressaltar que cada programador criará suas funções da maneira que julgar mais adequado. Por exemplo, se os comandos tivessem sido escritos na forma:

int somar(){

 int x = 0;

 x = 2 + 3;

 return x;

}

A função teria o mesmo efeito. Mas veja, da forma que está no código - Programa com a função somar(), escrevemos duas linhas a menos (imagine essa diferença sendo acumulada nas mais de 20 milhões linhas do Linux). Veja que no código - Programa com a função somar(), foi usada uma variável a menos, o que significa economia de memória do computador e do processamento para sua alocação.

_______

🔁 Assimile

Os comandos que serão usados em cada função dependem da escolha de cada desenvolvedor. Tenha em mente que dado um problema, pode haver 1, 2, …, N maneiras diferentes de resolver; o importante é tentar fazer escolhas que otimizem o uso dos recursos computacionais

_______

Outra característica da utilização de funções é que elas “quebram” a linearidade de execução, pois a execução pode “dar saltos” quando uma função é invocada (SOFFNER, 2013).

Para entender melhor como funciona esse mecanismo, vamos criar uma função que solicita um número para o usuário, calcula o quadrado desse número e retorna o resultado. Veja no código - Função para calcular o quadrado de um número, essa solução. Todo programa sempre começa pela função main(), ou seja, esse programa começará a ser executado na linha 10. Na linha 12 a função calcular() é chamada, ou seja, a execução “pula” para a linha 3.

Na função calcular() é solicitado um valor ao usuário (linha 5), armazenado em uma variável (linha 6) e retornado o valor multiplicado por ele mesmo (linha 7). Após retornar o valor, a execução do programa “volta” para a linha 10, pois nesse ponto a função foi chamada. O resultado da função é armazenado na variável resultado e impresso na linha 13.
Função para calcular o quadrado de um número - Fonte: elaborada pelos autores.

Teste o código - Função para calcular o quadrado de um número, utilizando a ferramenta Paiza.io.

_______

💭 Reflita

A utilização de funções permite que a execução de um programa “pule” entre as linhas, ou seja, que a execução não aconteça de modo sequencial da primeira até a última linha. Essa característica pode deixar a execução mais lenta? Esses “saltos” podem, em algum momento, causar um erro de execução? Os valores das variáveis podem se perder ou se sobrepor?

*/
#include<stdio.h>

int somar(){
    return 2 + 3;
}

float calcular(){
    float num;
    printf("\nDigite um numero: ");
    scanf("%f", &num);
    return num * num;
}

int main(){
    
    int resultado = 0;
    
    float multiplicacao = 0;
    
    resultado = somar();
    
    multiplicacao = calcular();

    printf("O resultado de 2 + 3 é = %d\n", resultado);
    printf("O quadrado do numero digitado é: %.2f\n", multiplicacao);

    return 0;

}


/*