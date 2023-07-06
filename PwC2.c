#include <stdio.h>
#include <string.h>

void RemovaDuplicado(char str[]) {
  int tamanho = strlen(str);
  int i, j, k;

  for (i = 0; i < tamanho - 1; i++) { // Loop 1
      for (j = i + 1; j < tamanho; j++) { // Loop 2
        if (str[j] != ' ' && str[i] == str[j]) {
          for (k = j; k < tamanho - 1; k++) { // Loop 3
            str[k] = str[k + 1];
          }
          tamanho--;
          j--;
        }
      }
  }

  str[tamanho] = '\0';
}

int main() {
  char str[100]; // String de tamanho 100

  fgets(str, sizeof(str), stdin); //Input
  
  str[strcspn(str, "\n")] = '\0'; // substitui quebra de linha pelo fim da string

  RemovaDuplicado(str); // Chama função

  printf("%s\n", str); //Output

  return 0;
}

/* README
  
      BIBLIOTECAS:
      
    stdio.h - Biblioteca padrão de entrada e saída em C, que fornece funções para leitura de dados do teclado (fgets) e exibição de dados na tela (printf).
  
    string.h - Biblioteca que fornece funções para manipulação de strings em C, nesse código utilizei as funções strcspn para substituir a quebra de linha pelo final da string e strlen para armazenar o tamanho da string e usar como parâmetro da lógica.
  
      VARIAVEIS:
      
    str - Armazena a string digitada pelo usuário em char.
    tamanho - Obtém o tamanho da string em int.
    i, j, k - São contadores para auxiliar na lógica do código em int.
  
      FUNÇÕES:
      
    main - A função principal tem como objetivo coletar os dados do usuário (fgets) e permitir que eles sejam trabalhados na função "inverterOrdem". Após a execução dessa função, ela exibe o resultado obtido por meio da função printf.
  
    RemovaDuplicado - A função recebe uma string como parâmetro e tem como objetivo remover caracteres duplicados dentro dessa string. Ela utiliza três loops de for aninhados para percorrer a string e comparar os caracteres.
  
  Loop 1 - (variável i) percorre a string a partir do início até o penúltimo caractere (tamanho - 1), porque não é necessário comparar o último caractere com nenhum outro.
    
  Loop 2 - (variável j) percorre a string a partir da posição seguinte à de i até o final da string.
  
  Dentro desse segundo loop, há um if que verifica se o caractere na posição j não é um espaço em branco e se é igual ao caractere na posição i. Isso garante que os espaços em branco não sejam excluidos,e se essa condição for verdadeira, significa que há um caractere duplicado.
  
  Loop 3 - Caso haja um caractere duplicado, o terceiro loop for (variável k) é utilizado para deslocar todos os caracteres a partir da posição j uma posição para trás, para remover o caractere duplicado.
  
  Após remover o caractere duplicado, o tamanho da string é decrementado em 1 (tamanho--) e a variável j é decrementada em 1 (j--), para evitar pular a próxima comparação.
  
  Após o término dos loops, o caractere na posição tamanho é substituído por '\0', para indicar o novo final da string.

*/
