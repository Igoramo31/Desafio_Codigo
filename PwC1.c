#include <stdio.h>
#include <string.h>

void inverterOrdem(char str[]) {
  int tamanho = strlen(str);
  int inicio = 0;
  int fim = tamanho - 1;

  while (inicio < fim) { 
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inicio++;
    fim--;
  }

  inicio = 0;
  fim = 0;

  while (fim <= tamanho) {
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
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  inverterOrdem(str);

  printf("%s\n", str);

  return 0;
}
