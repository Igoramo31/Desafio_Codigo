#include <stdio.h>
#include <string.h>

int VerificaPalin(char str[]) {
  int tamanho = strlen(str);
  int inicio = 0;
  int fim = tamanho - 1;

  while (inicio < fim) { // Loop
    if (str[inicio] != str[fim]) {
      return 0;
    }
    inicio++;
    fim--;
  }
  return 1; 
}

int main() {
  char str[100]; // String de tamanho 100

  fgets(str, sizeof(str), stdin); //Input

  str[strcspn(str, "\n")] = '\0'; // Substitui quebra de linha pelo fim da string

  if (VerificaPalin(str)) { // Chama função e Output por comparação do retorno
    printf("true");
  } else {
    printf("false");
  }

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

    FUNÇÕES:
    
  main - A função principal tem como objetivo coletar os dados do usuário (fgets) e permitir que eles sejam trabalhados na função "inverterOrdem". Após a execução dessa função, ela exibe o retorno do resultado obtido, e utiliza um comparador if para distinguir e enviar o output "true" ou "false".

  VerificaPalin - A função tem como objetivo verificar se uma string str é um palíndromo ou não, ela entra em um loop while que continua enquanto o índice inicio for menor que o índice fim. Esse loop percorre a string a partir das extremidades em direção ao centro.

  Dentro do loop, a função verifica se os caracteres str[inicio] e str[fim] são diferentes. Se eles forem diferentes, significa que a string não é um palíndromo, pois as letras nas posições correspondentes não são iguais. Nesse caso, a função retorna 0, indicando que não é um palíndromo.

  Se os caracteres forem iguais, a função avança para a próxima iteração do loop, incrementando o índice inicio em 1 e decrementando o índice fim em 1. Isso move os índices em direção ao centro da string.

  O loop continua até que os índices inicio e fim se cruzem ou sejam adjacentes. Quando isso acontece, significa que a função verificou todos os pares de caracteres correspondentes e não encontrou diferenças. Nesse caso, a função retorna 1, indicando que é um palíndromo.

*/
