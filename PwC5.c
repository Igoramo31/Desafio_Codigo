#include <stdio.h>
#include <string.h>

int VerificaPalin(char str[]) {
  int tamanho = strlen(str);
  int inicio = 0;
  int fim = tamanho - 1;

  while (inicio < fim) {
    if (str[inicio] != str[fim]) {
      return 0;
    }
    inicio++;
    fim--;
  }
  return 1; 
}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  if (VerificaPalin(str)) {
    printf("true");
  } else {
    printf("false");
  }

  return 0;
}
