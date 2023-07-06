#include <stdio.h>
#include <string.h>

void inverterOrdem(char str[]) {
  int tamanho = strlen(str);
  int inicio = 0;
  int fim = tamanho - 1;

  while (inicio < fim) {  // Loop 1
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inicio++;
    fim--;
  }

  inicio = 0;
  fim = 0;

  while (fim <= tamanho) {  // Loop 2
    if (str[fim] == ' ' || str[fim] == '\0') {
      for (int j = inicio; j < (inicio + fim) / 2; j++) {
        char temp = str[j];
        str[j] = str[inicio + fim - j - 1];
        str[inicio + fim - j - 1] = temp;
      }
      inicio = fim + 1;
    }
    fim++;
  }
}


int main() {
  char str[100]; // String de tamanho 100

  fgets(str, sizeof(str), stdin); //Input

  str[strcspn(str, "\n")] = '\0'; // substitui quebra de linha pelo fim da string

  inverterOrdem(str); // Chama função

  printf("%s\n", str); //Output

  return 0;
}

/* README

    BIBLIOTECAS:
    
  stdio.h - Biblioteca padrão de entrada e saída em C, que fornece funções para leitura de dados do teclado (fgets) e exibição de dados na tela (printf).

  string.h - Biblioteca que fornece funções para manipulação de strings em C, nesse código utilizei as funções strcspn para substituir an quebra de linha pelo final da string e strlen para armazenar o tamanho da string e usar como parametro da lógica.

    VARIAVEIS:
    
  str - Armazena a string digitada pelo usuário em char.
  tamanho - Obtém o tamanho da string em int.
  inicio - Índice de início para a inversão das palavras em int.
  fim - Índice de fim para a inversão dos caracteres em int.
  temp - String criada com o objetivo de auxiliar na lógica do código, "String temporária"

    FUNÇÕES:
    
  main - A função principal tem como objetivo coletar os dados do usuário (fgets) e permitir que eles sejam trabalhados na função "inverterOrdem". Após a execução dessa função, ela exibe o resultado obtido por meio da função printf.

  inverterOrdem - A função inverterOrdem tem como objetivo inverter a ordem das palavras na string. Ela recebe a string como parâmetro e realiza duas etapas principais:

  Loop 1 - A função inverte os caracteres utilizando um laço while, ela percorre a string a partir das extremidades (início e fim) e troca os caracteres de posição. Isso é feito repetidamente até que os índices de início e fim se cruzem, garantindo que todos os caracteres sejam invertidos.
  
Exemplo:
input: "Hello, World"
output: "dlroW ,olleH"

  Loop 2 - A função Inverte as palavras dentro da string, em seguida, percorre a string novamente, mas desta vez procurando por espaços em branco ou o final da string. Quando encontra um espaço em branco ou o final da string, utiliza outro laço para inverter a ordem dos caracteres entre os índices de início e fim da palavra. Isso é feito para cada palavra encontrada na string.
  
Exemplo:
input: "dlroW ,olleH"
output: "World Hello,"

*/
