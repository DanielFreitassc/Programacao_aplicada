> Daniel Freitas
<h1 align="center">Bem-Vindos Ao Meu Caderno De Anotações Vamos Em Uma Incrivel Aventura Pelo Maravilhoso Mundo do C e C++! 🚀</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%20%7C%20C%2B%2B-blue.svg" alt="Languages: C | C++">
</p>

<p align="center">
  <img src="https://media.giphy.com/media/xT0xeJpnrWC4XWblEk/giphy.gif" alt="Coding GIF">
</p>

<p align="center">
  Você está prestes a embarcar em uma jornada épica pelo universo do C e C++. Prepare-se para mergulhar nas profundezas do código de baixo nível, desvendar os mistérios dos ponteiros e dominar a arte da otimização! 💡🔍
</p>

<p align="center">
  🌟 Meu repositório é um caderno de anotações online mas pode servir para programadores C e C++ de todos os níveis de habilidade. 🌟
</p>

## Por Que Amar C e C++?

🔍 **Desempenho de Alta Octanagem:** Com C e C++, você está no controle total da memória e dos recursos do sistema. Nada de sacrificar velocidade!

💡 **Flexibilidade Extrema:** C e C++ oferecem liberdade criativa ilimitada. Projetos pequenos ou grandes, eles fazem de tudo!

🧩 **Puzzles Intelectuais:** Resolver quebra-cabeças de lógica e algoritmos é uma alegria nesses idiomas. Prepare-se para exercitar seu cérebro! 🧠

⚡ **Base para Outras Linguagens:** Muitas outras linguagens dependem das raízes do C e C++. Aprenda isso, e você estará bem encaminhado!

## Vamos Codificar! 🚀

Preparado para se aventurar na jornada emocionante do C e C++? Vamos lá! Pegue suas xícaras de café, ative seus compiladores e vamos começar a codificação! 🎮👩‍💻👨‍💻

<p align="center">
  <img src="https://media.giphy.com/media/USV0ym3bVWQJJmNu3N/giphy.gif" alt="Coding GIF">
</p>


---

# Disciplina 
> Programaçao aplicada em ``C`` e ``C++``
# Professor: [Vagner Rodrigues](https://github.com/professorvagner)

Começaremos em ``C``
e depois em C++ com orientação a objeto.
### Documentação 1: [C/C++](https://www.w3schools.com/c/)
### Documentação 2: [C/C++](https://cplusplus.com/reference/)
# **Aula 01: Desvendando os Mistérios de C e C++ - Explorando os Fundamentos e Além! 🚀**
Resumo da primeira aula vimos que ``C`` é uma linguagem alto/médio nível,
## Características:
- [Uso Geral;](https://arquivo.canaltech.com.br/software/c-a-linguagem-de-programacao-que-esta-em-tudo-o-que-voce-usa-19512/)
- [Procedural;](https://pt.stackoverflow.com/questions/195069/o-que-%C3%A9-programa%C3%A7%C3%A3o-procedural-e-n%C3%A3o-procedural)
- [Portável;](https://pt.stackoverflow.com/questions/93891/tradu%C3%A7%C3%A3o-da-palavra-portable-referindo-se-a-uma-linguagem-de-programa%C3%A7%C3%A3o)
- [Tipagem Fraca](https://www.treinaweb.com.br/blog/quais-as-diferencas-entre-tipagens-estatica-ou-dinamica-e-forte-ou-fraca)
## Linguagem Estruturada:
- Todos os programas possíveis podem ser reduzidos a apenas três estruturas:
- Sequência
- Decisão (desvio)
- Iteração (repetição)
# ESTRUTURADA
### Programação Estruturada
- Eficiente para solucionar
problemas simples e direto.
# ORIENTADA A OBJETOS
## Programação Orientada a Objetos
- Defende um pensamento de
programação mais voltado ao
pensamento humano.
___
# Exemplo basico de programa em ``C``
```
#include <stdio.h>
#define PI 3.14159

int main() {
      printf("Hello World");
      // Cálculo da área de um círculo.
      float raio, area;
      raio = 12.0;
      area = PI * raio * raio;
      printf("Area = %f", area);
      return 0;
}
```
___
# Por ultimo Vimos os Dados e tipo de Dados.
```
         |DADOS|
      ______|______
     |             |
     |             |
  |Entrada|     |Saída|
     |              |
   __|              |
|                   |
|_ |scanf()|        |
|_|getchar()|       |
|_|fgets()|         |
                    |
____________________|
|
|_|printf()|
|_|sprintf()|
|_|fprintf()|
|_|puts()|


```
```
    |TIPOS DE DADOS|
      ______|______
     |             |
     |             |
|Primitivos|   |Derivados|
     |              |
_____|              |
|                   |
|_|int|             |
|_|char|            |
|_|float|           |
|_|double|          |
                    |
 _|short|    <------|<------|Modificadores|
|_|long|     <------|<------|Modificadores|
|_|signed|   <------|<------|Modificadores|
|_|unsigned| <------|<------|Modificadores|
                    |
                    |
 ___________________|
|
|_|array|
|_|struct|
|_|union|
|_|enum|

```
```
            |Operadores|
                  |
__________________|__________________
|___>|Atribuição|                    |
|___>|= += -= *= /= %= &= |= ^=|     |
|___>|Aritméticos|                   |
|___>|+ - * / % ++ --|               |
|___>|Relacionais|                   |
|___>|< <= > >= == |=|               |
|___>|Lógicos|                       |
|___>|&& || !|                       |
|___>|Bit a Bit|                     |
|___>|& | ~ ^ >> <<|                 |
|___>|Condicional|                   |
|___>|Exp? Verdadeiro: Falso|        |
|___>|Conversão|                     |
|___>|(cast)variável|                |______________>|Gerenciamento de Memória|
                                                     |       & -> * [] .      |

```
```
         |DADOS|
      ______|______
     |             |
     |             |
|Ponteiros|  |Alocação Dinâmica|
     |
_____|  
|___>|Ponteiro para array|                 
|___>|Ponteiro para string|
|___>|Ponteiro para estrutura|
|___>|Ponteiro como parâmetro de função|
```
# Aula 02: Comparando os Universos de C e C++ - Explorando Sintaxe, Variáveis e Especificadores! 🔍
- Aula dois começamos vendo a diferença entre as duas linguagens o professor pediu para criarmos uma conta no [w3schools](https://www.w3schools.com/).
- Em seguida pediu para que nós olharmos a Syntax do [C](https://www.w3schools.com/c/c_syntax.php)
- Mostrou a Indentação do [Python](https://www.w3schools.com/python/gloss_python_indentation.asp) e comparou com o [C](https://www.w3schools.com/c/)
- Comparou as variaveis de ``C`` com as ``"variaveis"`` do ``Python``.
- Vimos [Especificadores de formato](https://www.w3schools.com/c/c_variables.php), usamos no `printf()` o especificador `%` Para gerar o valor de uma variável.

Tipo|Oque é:
:--------- | :--------- |
int | inteiros
float | numeros com virgula
char | caracteres

Tipo|especificador de formato
:--------- | :--------- 
string | %s
int | %d ou %i
float | %f
char | %c

```
// Criar variaveis
int meuNum = 15;            // Inteiro (número inteiro)
float meuFloatNum = 5.99;   // Número de ponto flutuante
char meuTexto = 'D';       // caractere

// Print Variáveis
printf("%d\n", meuNum);
printf("%f\n", meuFloatNum);
printf("%c\n", meuTexto);
```

Tipo de Dados  | Tamanho      |      Descrição
:--------- | :--------- |:--------- |
int	        | 2 or 4 bytes |      Armazena números inteiros, sem decimais.
float	        | 4 bytes      |      Armazena números fracionários, contendo  6 casas decimais.
double	        | 8 bytes      |      Armazena números fracionários, contendo 15 casas decimais. 
char	        | 1 byte       |      Armazena um único caractere/letra/número ou valores ASCII.

Operador|--|
:--------- | :--------- 
Menor que:|<
Menor ou igual: |<=
Maior que : |>
Maior ou igual :|>= 
Igual :|==
Diferente de:|!= 


```
Condicionais:
Use if para especificar um bloco de código a ser executado, se uma condição especificada for true
Use else para especificar um bloco de código a ser executado, se a mesma condição for false
Use else if para especificar uma nova condição para testar, se a primeira condição for false
Use switch para especificar muitos blocos alternativos de código a serem executados

```
# Aula 03: Explorando Entrada e Saída, Tipos de Dados e Modificadores - Mergulhando nas Bases da Programação! 📝
Nesta aula começamos criando uma conta no [Replit](https://replit.com) criamos um repositorio e começamos a programar.

```
Disciplina Programação Aplicada
Data: 17/08/2023
Exemplo01: Entrada e Saída de Dados/Tipos de dados primitivos.


#include <stdio.h>

int main(void) {
  int idade;
  printf("Digite a sua idade: ");
  scanf("%i",&idade); // Como se fosse input() da linguagem Python.
  printf("O dobro da sua idade é de :%i", 2*idade);
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main(void) {
  float nota1,nota2,nota3,media;
  printf("Digite a primeira nota1: ");
  scanf("%f",&nota1);
  printf("Digite a segundnan nota2: ");
  scanf("%f",&nota2);
  printf("Digite a segundnan nota3: ");
  scanf("%f",&nota3);
  media =  (nota1 + nota2 + nota3)/3;
  printf("A média das notas é %.2f", media);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
int idade;
int main(void) {
  char nomePessoa[30];
  float nota1,nota2,nota3,media;
  printf("Qual o seu nome:\n");
  scanf("%s",&nomePessoa);
  printf("Seja bem-vindo, %s\n",nomePessoa); 
  printf("Digite a sua idade ");
  scanf("%i",&idade);
  printf("O dobro da sua idade é de: %i\n",2*idade);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int numero;
  int antes;
  int depois;
  printf("Digite um número: ");
  scanf("%i",&numero);
  antes = numero - 1;
  depois = numero +1;
  printf(" O antecessor é (%i)",antes);
  printf(" O sucessor é (%i)",depois);
  return 0;
}
// A linguagem C possui 4 tipos de dados primitivos.

#include <stdio.h>
#include <stdlib.h>

int main(void){
char minhaLetra = 'c';
int copaBrasil = 1991;
float  floatPi = 3.14159265359;
double doublePi = 3.14159265359;

printf("Caracter: \t\t%c \t\t\Tamanho %lu byes(s).\n",minhaLetra,sizeof(minhaLetra));
printf("Valor int:\t\t%i  \t\tTamanho %lu bytes(s).\n",copaBrasil,sizeof(copaBrasil));
printf("Valor float: \t%.6f\t\tTamanho %lu bytes(s).\n",floatPi,sizeof(floatPi));
printf("Valor double: \t%.8f\t\tTamanho %lu bytes(s).\n",doublePi,sizeof(doublePi));
return 0;
}
```
# Em seguida vimos tipos [primitivos e modificadores](https://linguagemc.com.br/tipos-de-dados-em-c/).
Palavra Chave | Tipo
:--------- | :------:
char|	caracter
int|	inteiro
float|	real de precisão simples
double|	real de precisao dupla
void|	vazio (sem valor)

Palavra Chave|	Tipo
:--------- | :------:
signed|	caracter
unsigned|	Inteiro
long|	longo
short|	curto


Palavra chave|	Tipo|	Tamanho|	Intervalo
:--------- | :--------- | :--------- | :--------- |
char|	Caracter	|1|	-128 a 127|
signed char|	Caractere com sinal	|1|	-128 a 127
unsigned char|	Caractere sem sinal	|1|	0 a 255
Int|	Inteiro	|2|	-32.768 a 32.767
signed int|	Inteiro com sinal	|2|	-32.768 a 32.767
unsigned int|	Inteiro sem sinal	|2|	0 a 65.535
short int|	Inteiro curto	|2|	-32.768 a 32 767
signed short int|	Inteiro curto com sinal	|2|	-32.768 a 32.767
unsigned short int|	Inteiro curto sem sinal	|2|	0 a 65.535
long int|	Inteiro long	|4|	-2.147.483.648 a 2.147.483.647
signed long int|	Inteiro longo com sinal	|4|	-2.147.483.648 a 2.147.483.647
unsigned long int|	Inteiro longo sem sinal	|4|	0 a 4.294.967.295
float|	Ponto flutuante com precisão simples	|4|	3.4 E-38 a 3.4E+38
double|	Ponto flutuante com precisão simples	|8|	1.7 E-308 a 1.7E+308
long double|	Ponto flutuante com precisão dupla longo	|16|	3.4E-4932 a 1.1E+4932
# Aula do dia 09/11 
vimos AUTO , ,Static, 
Fizemos 3 exercicios com o professor e sobrou uma para fazermos em casa. 
# Primeiro Exercicio
```
#include <iostream>
using namespace std;

class Calculadora{
  public: 
    double somar(int a, int b){
      return a+b;
    }
    double subtrair(int a, int b){
      return a-b;
    }
    double multiplicar(int a, int b){
      return a*b;
    }
    double dividir(int a, int b){
      return a/b;
    }
  private:
};
int main() {
  Calculadora calc; 
  double num1, num2; 
  char operacao;

  cout << "Digite o primeiro número: ";
  cin >> num1;
  cout << "Digite a operação: ";
  cin >> operacao;
  cout << "Digite o segundo número: ";
  cin >> num2;

  switch(operacao){
    case '+':
      cout << "O resultado é: " << calc.somar(num1, num2);
    break;
    case '-':
      cout << "O resultado é: " << calc.subtrair(num1, num2);
    break;
    case '*':
      cout << "O resultado é: " << calc.multiplicar(num1, num2);
    break;
    case '/':
      cout << "O resultado é: " << calc.dividir(num1, num2);
    break;
    default:
    cout << "Operação inválida";
      break;
  }
  return 0;
}
```
# Terceiro Exercicio
```
#include <iostream>
#define QTD_NUMEROS 6
using namespace std;

class Numeros {
public:
    Numeros() {
        cout << "Um objeto foi inicializado" << endl;
    }

    void getNumeros() {

        for (int i = 0; i < QTD_NUMEROS; i++) {
            cout << "Digite o " << i + 1 << " número: ";
            cin >> meuArray[i];
        }
    }

    void mostraResultados() {
        int resTemp;

        resTemp = meuArray[0] + meuArray[1];
        cout << meuArray[0] << " + " << meuArray[1] << " = " << resTemp << endl;

        resTemp = meuArray[2] - meuArray[3];
        cout << meuArray[2] << " - " << meuArray[3] << " = " << resTemp << endl;

        resTemp = meuArray[4] * meuArray[5];
        cout << meuArray[4] << " * " << meuArray[5] << " = " << resTemp << endl;
    }

private:
    int meuArray[QTD_NUMEROS] = {0};
};

int main() {
    Numeros meusNumeros;
    meusNumeros.getNumeros();
    meusNumeros.mostraResultados();

    return 0;
}

```
# Inline: 
A palavra-chave inline diz para o compilador substituir o código na definição de função para cada instância de uma chamada de função. O uso das funções embutidas pode fazer com que seu programa seja mais rápido porque ele elimina a sobrecarga associada às chamadas de função.

# Parâmetro de Referência: &
O que estamos fazendo aí é alocando, reservando, um espaço na memória do seu computador. Assim, quando usamos 'num', o C++ entende que devemos ir no endereço para onde essa variável aponta e pegar o número que está dentro daquele local da memória.

# Sobrecarga de Funções em C++ : 
Sobrecarga, ou overloading, é a técnica que permite que tenhamos funções com mesmo nome, desde que seus parâmetros sejam diferentes

# Introdução a Linguagem 
# BREVE HISTÓRICO DA LINGUAGEM C
### • Origem: década de 70 (Dennis Ritchie)
### • É uma linguagem estruturada de alto/médio nível.
### • Criada para prover acesso de baixo nível ao hardware (CPU, I/Os e periféricos) e se entender bem com o Assembly.
### • Muito utilizada para compiladores, games, sistemas operacionais e sistemas embarcados.
### • Foi criada, influenciada e testada por programadores. É a mais popular entre excelentes programadores.
### • Podemos dizer que no C, a unidade de programação é a função.
### • Foi desenvolvida no Bell Laboratories no início da década de 1980 por Bjarne Stroustrup
### • C++ fornece vários recursos que aprimoraram a Linguagem C, sobretudo a programação orientada a objetos (object-oriented programming) ou OOP
### • Objetos consistem em componentes de software reutilizáveis que modelam itens do mundo real.
### • No C++, a unidade de programação é a classe, que contém funções que implementam operações e dados que implementam atributos. A partir da classe, os objetos são instanciados

# PROGRAMAÇÃO ESTRUTURADA
### • Na década de 1960, muitos problemas ocorriam por utilização de transferências de controle nos códigos-fonte. A principal vilã associada a isso é a instrução goto, que promove um desvio incondicional para um endereço relativo na memória de programa.
![image](https://github.com/DanielFreitassc/Programacao_aplicada/assets/129224303/d97dabbe-7764-4a77-b640-2b57551ccf2e)
### • O trabalho de Böhm e Jacopini, apresentou o conceito de programação estrutura, que eliminava a necessidade de instruções goto, independente do código.
### • Assim, todos os programas podem ser escritos em termos de estruturas de controle, que são:estrutura de sequência, estrutura de seleção e estrutura de repetição.
### • Dica: Nunca, jamais, em hipótese alguma, utilize a instrução goto nos softwares em C ou C++!
![image](https://github.com/DanielFreitassc/Programacao_aplicada/assets/129224303/09c77eb8-a2ae-4695-b53e-953514ba1dc4)
# ESTRUTURADA VS ORIENTADA A OBJETOS
```
ESTRUTURADA VS ORIENTADA A OBJETOS
Programação Estruturada      Programação Orientada a Objetos
• Eficiente para solucionar  • Defende um pensamento de
  problemas simples e direto.  programação mais voltado ao
                               pensamento humano.
```
![image](https://github.com/DanielFreitassc/Programacao_aplicada/assets/129224303/c6a4c36d-b8f8-4d60-8182-8fdb4462d4c4) ![image](https://github.com/DanielFreitassc/Programacao_aplicada/assets/129224303/ab04f16c-ef04-46cc-8a64-8c1e59424453)

# PALAVRAS RESERVADAS 
### Palavras reservadas da linguagem C e C++


auto| break| case| char| const| continue| default| do
:--------- | :--------- | :--------- | :--------- | :--------- | :--------- | :--------- | :--------- |
double| else| enum| extern| float| for| goto| if
int| long| register| return| short| signed| sizeof| static
struct| switch| typedef| union| unsigned| void| volatile| while
and| and_eq| asm| bitand| bitor| bool| catch| class
compl| const_cast| delete| dynamic_cast| explicit| export| false| friend
inline| mutable| namespace| new| not| not_eq| operator| or
or_eq| private| protected| public| reinterpreted_cast| static_cast| template| this
throw| true| try| typeid| typename| using| virtual| wchat_t
xor| xor_eq|

# HELLO WORLD 
## Fizemos um hello world que é um classico primeiro codigo para dar sorte :), Segue exemplo...
### Com printf
```
#include <iostream>
using namespace std;
int main() {
cout << "Hello World!\n";
printf("Também pode ser utilizado.\n");
return 0;
}
```
# Só com o cout
```
#include <iostream>
int main() {
std::cout << "Hello World!"<< std::endl;
return 0;
}
```
# ENTRADA E SAÍDA DE DADOS
### • Para entrada de dados utilizamos o objeto cin e para saída de dados utilizamos o objeto cout. Exemplo:
```
#include <iostream>
int main()
{
int val;
std::cout << "Digite um valor: ";
std::cin >> val;
std::cout << “Valor: "<< val << std::endl;
return 0;
}
```
### • Objeto manipulador de fluxo: endl (end line – e também pertence ao namespace std. Gera a saída de um caractere de nova linha e esvazia o buffer de saída).

# ENTRADA E SAÍDA DE DADOS
- Objeto de fluxo de saída: cout
- Operador de inserção de fluxo: <<
- Objeto de fluxo de entrada: cin
- Operador de extração de fluxo: >>
# Exemplo: Soma e Média
```
int main()
{
int num1, num2;
float media;
std::cout << "Digite dois numeros: ";
std::cin >> num1 >> num2;
media = (num1+num2)/2;
std::cout << "Soma = " << num1+num2 << std::endl;
std::cout << "Media = " << media << std::endl;
return 0;
}
```
# Exemplo: Teste Condicional
```
#include <iostream>
int main()
{
if(8 < 23)
std::cout << "Verdadeiro" << std::endl;
if(8 > 23)
std::cout << "Falso" << std::endl;
return 0;
}
```
# PRECEDÊNCIA DE OPERADORES ARITMÉTICOS
Operador| Operação| Ordem de Avaliação|
:--------- | :--------- | :---------
" ( ) " |Parênteses |Maior. Internos primeiros. Esquerda para a direita.
" * / " |Multiplicação e Divisão |Mediano. Esquerda para a direita se houver vários.
" % " |Módulo |Mediano. Esquerda para a direita se houver vários.
" + - " |Adição e Subtração |Menor. Esquerda para a direita se houver vários.

Sequência| Descrição Do Escape
:--------- | :---------
\n| Nova Linha
\t| Tabulação Horizontal
\r| Posiciona o cursos no início da linha atual (sem nova linha)
\a| Aviso sonoro
\\\  | Imprime um caractere de barra invertida
\’| Imprime aspas simples
\”| Imprime aspas duplas
# NSTRUÇÕES DE SELEÇÃO
### • As instruções de seleção da linguagem C e da linguagem C++ são exatamente as mesmas e contempla as opções:
# Seleção Simples:
```
int val = 741;
if(val > 555)
cout << "Valor maior que 555" << endl;
int val = 741;
if(val > 555)
cout << "Valor maior que 555" << endl;
else
cout << "Valor menor que 555" << endl;
```
# Seleção Aninhada:
```
int temperature = 25;
if(temperature > 40)
cout << "Muito calor" << endl;
else if(temperature > 30)
cout << "Calor" << endl;
else if(temperature > 20)
cout << "Temperatura ok" << endl;
else if(temperature > 10)
cout << "Frio" << endl;
else
cout << "Muito frio" << endl
```
### • Quando desejamos efetuar múltiplas ações podemos associar uma variável, retorno de função ou expressão com expressões inteiras constantes. A instrução switch garante esta funcionalidade.
```
int val = 0;
cout << "Digite um numero inteiro: ";
cin >> val;
switch(val)
{
case 1:
cout << "Numero 1." << endl;
break;
case 2:
cout << "Numero 2." << endl;
break;
default:
cout << "Nem 1, nem 2." << endl;
}

```
- A instrução switch pode ter um número indeterminado de cases.
- A instrução switch pode ter um número indeterminado de cases.
- Quando utilizamos default, significa que será a opção executada quando nenhum caso for satisfeito.
- O uso de default é opcional.
- Após a conclusão de cada caso, precisamos de uma instrução break, para sair do switch, do contrário, ele continuará executando os casos seguintes.
# Swich case
```
char opt;
cout << "Digite um caractere: ";
cin >> opt;
switch(opt)
{
case 'A’:
case ‘a’:
cout << "Caractere A" << endl;
break;
case ‘B’:
case ‘b’:
cout << "Caractere B" << endl;
break;
default:
cout << "Nem A, nem B" << endl;
}

```
### O swich também pode ser utilizada para selecionar caracteres. Normalmente utilizamos o tipo de dado char para declarar variáveis que vão armazenar o byte referente a cada caractere de acordo com a tabela ASCII.
### • As instruções de repetição da linguagem C e da linguagem C++ são parecidas. As instruções while e do-while são idênticas, entretanto a instrução for possui algumas simples alterações. Número definido de repetições:
```
//variável de controle de 1 até 50 com incrementos de 1.
for(int i=1; i<=50; i++)
//variável de controle ed 50 até 1 com decrementos de 1.
for(int i=50; i>=1; i--)
//variável de controle faz a sequência 3, 6, 9, 12, 15.
for(int i=3; i<=15; i+=3)
//exemplo com duas variáveis de controle, i vai de 0 até 9, j vai de 9 até 0.
for(int i=0, j=9; i<=9; i++, j--)
//realiza iterações até 10, o i deve ter sido declarado e inicializado a priori.---------------|
for( ; i<=10; i++)                                                                             |
//a variável i deverá sempre incrementada dentro do bloco de instruções do for.                |                 ------------------------------
for(int i=0; i<=10; )                                                                          |-----------------| Estas aplicações não são  |
//avaliará a condição como sempre verdadeira, gerando um loop infinito.                        |                 | permitidas na linguagem C.|          
for(int i=0; ; i++)                                                                            |                 ______________________________
//omitindo todos os parâmetros: loop infinito.                                                 |
for( ; ; )                                                                     -----------------

```

