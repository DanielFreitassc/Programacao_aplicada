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
em seguida vimos inline
