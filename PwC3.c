#include <stdio.h>
#include <string.h>

void encontrarPalin(char str[]) {
  int tamanho = strlen(str);
  int fim = 1, inicio = 0;
  int low, high;
  int comprimento;

  for (int i = 0; i < tamanho; i++) { // Loop 1
    low = i - 1;
    high = i + 1;

    while (low >= 0 && high < tamanho && str[low] == str[high]) { // Loop 2
      low--;
      high++;
    }

    comprimento = high - low - 1;

    if (comprimento > fim) {
      fim = comprimento;
      inicio = low + 1;
    }
  }

  strncpy(str, str + inicio, fim);
  str[fim] = '\0';
}


int main() {
  char str[100]; // String de tamanho 100

  fgets(str, sizeof(str), stdin); //Input

  str[strcspn(str, "\n")] = '\0'; // substitui quebra de linha pelo fim da string

  encontrarPalin(str); // Chama função

  printf("%s", str); //Output

  return 0;
}

/* README
  
      BIBLIOTECAS:
      
    stdio.h - Biblioteca padrão de entrada e saída em C, que fornece funções para leitura de dados do teclado (fgets) e exibição de dados na tela (printf).
  
    string.h - Biblioteca que fornece funções para manipulação de strings em C, nesse código utilizei as funções strcspn para substituir a quebra de linha pelo final da string, strlen para armazenar o tamanho da string e usar como parametro da lógica e strncpy para copiar/substituir uma string pela outra.
  
      VARIAVEIS:
      
    str - Armazena a string digitada pelo usuário em char.
    tamanho - Tamanho da string de entrada em int.
    fim, inicio - Variáveis para acompanhar o índice de início e fim da maior substring palindrômica em int.
    low, high - Variáveis para percorrer a string em int.
    comprimento - Armazena o comprimento do palíndromo encontrado em int.
  
      FUNÇÕES:
      
    main - A função principal tem como objetivo coletar os dados do usuário (fgets) e permitir que eles sejam trabalhados na função "inverterOrdem". Após a execução dessa função, ela exibe o resultado obtido por meio da função printf.
  
    encontrarPalin - A função recebe uma string como parâmetro e tem como objetivo encontrar a maior subsequência palindrômica dentro dessa string.

    O loop 1 - É onde as variáveis low e high são inicializadas com os valores corretos para comparar os caracteres ao redor do caractere atual.

    O loop 2 - Interno verifica se os caracteres nas posições low e high são iguais e se as posições estão dentro dos limites da string. Ele continua avançando para os dois lados enquanto os caracteres forem iguais.

    Após sair do loop 2, a variável comprimento é calculada como a diferença entre high e low, menos 1.

    Em seguida, verifica se o comprimento é maior que o fim, que armazena o comprimento do maior palíndromo encontrado até o momento. Se for, atualiza o fim e o inicio com os novos valores.

    No final do loop 1, a sequência palindrômica é substituida na str, especificando o inicio e o fim do palíndromo encontrado. Em seguida, é adicionado o caractere nulo '\0' para indicar o final da string.
  
*/
