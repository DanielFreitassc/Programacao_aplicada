# Disciplina 
> Programaçao aplicada em ``C`` e ``C++``
# Professor: [Vagner Rodrigues](https://github.com/professorvagner)

Começaremos em ``C``
e depois em C++ com orientação a objeto.
### Documentação 1: [C/C++](https://www.w3schools.com/c/)
### Documentação 2: [C/C++](https://cplusplus.com/reference/)
# Aula 01
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
# Aula 02
- Aula dois começamos vendo a diferença entre as duas linguagens o professor pediu para criarmos uma conta no [w3schools](https://www.w3schools.com/).
- Em seguida pediu para que nós olharmos a Syntax do [C](https://www.w3schools.com/c/c_syntax.php)
- Mostrou a Indentação do [Python](https://www.w3schools.com/python/gloss_python_indentation.asp) e comparou com o [C](https://www.w3schools.com/c/)
- Comparou as variaveis de ``C`` com as ``"variaveis"`` do ``Python``.
- Vimos [Especificadores de formato](https://www.w3schools.com/c/c_variables.php), usamos no `printf()` o especificador `%` Para gerar o valor de uma variável.
```
int => inteiros
float => numeros com virgula
char => caracteres
```
```
string => %s
int => %d ou %i
float => %f
char => %c
```
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
```
|Tipo de Dados  | Tamanho      |      Descrição
|int	        | 2 or 4 bytes |      Armazena números inteiros, sem decimais.
|float	        | 4 bytes      |      Armazena números fracionários, contendo  6 casas decimais.
|double	        | 8 bytes      |      Armazena números fracionários, contendo 15 casas decimais. 
|char	        | 1 byte       |      Armazena um único caractere/letra/número ou valores ASCII.
```
```
Menor que: a < b
Menor ou igual a: a <= b
Maior que: a > b
Maior ou igual a: a >= b
Igual a a == b
Diferente de: a != b
```
```
Condicionais:
Use if para especificar um bloco de código a ser executado, se uma condição especificada for true
Use else para especificar um bloco de código a ser executado, se a mesma condição for false
Use else if para especificar uma nova condição para testar, se a primeira condição for false
Use switch para especificar muitos blocos alternativos de código a serem executados

```
# Aula 03
Na aula 3 fizemos os seguintes codigos.
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
  printf("Digite a primeira nota: ");
  scanf("%f",&nota1);
  printf("Digite a segundnan nota: ");
  scanf("%f",&nota2);
  printf("Digite a segundnan nota: ");
  scanf("%f",&nota3);
  media =  (nota1 + nota2 + nota3)/3;
  printf("A média das notas é %.2f", media);
  return 0;
}
```
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


Palavra chave	Tipo	Tamanho	Intervalo
:--------- | :--------- | :--------- | :--------- |
char|	Caracter|	|1|	-128 a 127
signed| char|	Caractere com sinal|	1|	-128 a 127
unsigned char	Caractere sem sinal	1	0 a 255
Int	Inteiro	2	-32.768 a 32.767
signed int	Inteiro com sinal	2	-32.768 a 32.767
unsigned int	Inteiro sem sinal	2	0 a 65.535
short int	Inteiro curto	2	-32.768 a 32 767
signed short int	Inteiro curto com sinal	2	-32.768 a 32.767
unsigned short int	Inteiro curto sem sinal	2	0 a 65.535
long int	Inteiro long	4	-2.147.483.648 a 2.147.483.647
signed long int	Inteiro longo com sinal	4	-2.147.483.648 a 2.147.483.647
unsigned long int	Inteiro longo sem sinal	4	0 a 4.294.967.295
float	Ponto flutuante com precisão simples	4	3.4 E-38 a 3.4E+38
double	Ponto flutuante com precisão simples	8	1.7 E-308 a 1.7E+308
long double	Ponto flutuante com precisão dupla longo	16	3.4E-4932 a 1.1E+4932
# Aula 04
