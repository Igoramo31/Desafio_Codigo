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
    printf("%s\n", str);
}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  inverterOrdem(str);

  return 0;
}
