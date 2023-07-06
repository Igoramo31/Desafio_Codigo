#include <ctype.h>
#include <stdio.h>
#include <string.h>

void PrimeiraMaiuscula(char str[]) {
  int tamanho = strlen(str);

  for (int i = 1; i < tamanho; i++) {
    if (str[i] == ' ') {
      if (str[i + 1] != ' ' && str[i - 1] == '.') {
        str[i + 1] = toupper(str[i + 1]);
      }
    }
  }
}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  PrimeiraMaiuscula(str);

  printf("%s\n", str);

  return 0;
}
