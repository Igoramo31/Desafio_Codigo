#include <ctype.h>
#include <stdio.h>
#include <string.h>

void PrimeiraMaiuscula(char str[]) {
  int tamanho = strlen(str);
  int k = 0;

  for (int i = 0; i < tamanho; i++) { // Loop 1
    if (str[i] != ' ') {
      str[i] = toupper(str[i]);
      i = tamanho;
    }
  }

  for (int i = 0; i < tamanho; i++) { // Loop 2
    if (str[i] == ' ') {
      if (str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?') {
        k = 1;
      }
      if (str[i + 1] != ' ' && k == 1) {
        str[i + 1] = toupper(str[i + 1]);
        k = 0;
      }
    }
  }
}

int main() {
  char str[100]; // String de tamanho 100

  fgets(str, sizeof(str), stdin); // Input

  str[strcspn(str, "\n")] =
      '\0'; // substitui quebra de linha pelo fim da string

  PrimeiraMaiuscula(str); // Chama função

  printf("%s\n", str); // Output

  return 0;
}

/* README

      BIBLIOTECAS:

    stdio.h - Biblioteca padrão de entrada e saída em C, que fornece funções para
   leitura de dados do teclado (fgets) e exibição de dados na tela (printf).

    string.h - Biblioteca que fornece funções para manipulação de strings em C,
   nesse código utilizei as funções strcspn para substituir a quebra de linha
   pelo final da string, strlen para armazenar o tamanho da string e usar como
   parametro da lógica e strncpy para copiar/substituir uma string pela outra.

    ctype - Biblioteca que fornece funções para manipulação de caracteres, nesse
   código utilizei a função toupper para transformar caracteres minusculos em
   maiusculos.

      VARIAVEIS:

    str - Armazena a string digitada pelo usuário em char.
    tamanho - Tamanho da string de entrada em int.
    k - chave para memorizar que a proxima letra deve ser maiuscula em int.

      FUNÇÕES:

    main - A função principal tem como objetivo coletar os dados do usuário
   (fgets) e permitir que eles sejam trabalhados na função "inverterOrdem". Após
   a execução dessa função, ela exibe o resultado obtido por meio da função
   printf.

    PrimeiraMaiuscula - A função tem como objetivo transformar em maiúscula a primeira letra de cada frase na string. Para isso, ela utiliza dois loops.

    Loop 1 - Esse loop é responsável por identificar a primeira letra de cada frase e transformá-la em maiúscula. Ele utiliza um loop for que percorre toda a string verificando se o caractere é um espaço em branco (' '). Se o caractere não for um espaço em branco, ele é transformado em maiúscula e o loop é interrompido.

    Loop 2 - O objetivo desse loop é definir as regras de pontuação que indicam onde uma letra maiúscula deve ser inserida. Assim como o primeiro loop, ele percorre toda a string. Nesse caso, ele verifica a existência de caracteres de pontuação. Caso encontre um caractere de pontuação, a variável k é armazenada com o valor 1, indicando que a próxima letra encontrada deve ser transformada em maiúscula.

Por fim, a função transforma em maiúscula a primeira letra de cada frase na string, independentemente da presença de espaços.

*/
