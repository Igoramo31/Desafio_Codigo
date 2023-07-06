#include <stdio.h>
#include <string.h>

void RemovaDuplicado(char str[]) {
  int tamanho = strlen(str);
  int i, j, k;

  for (i = 0; i < tamanho - 1; i++) {
      for (j = i + 1; j < tamanho; j++) {
        if (str[i] == str[j]) {
          for (k = j; k < tamanho - 1; k++) {
            str[k] = str[k + 1];
          }
          tamanho--;
          j--;
        }
      }
  }

}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);
  
  str[strcspn(str, "\n")] = '\0';

  RemovaDuplicado(str);

  printf("%s\n", str);

  return 0;
}
