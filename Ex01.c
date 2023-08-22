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