#include <stdio.h>
#include <string.h>

void encontrarPalin(char str[]) {
  int tamanho = strlen(str);
  int fim = 1, inicio = 0;
  int low, high;
  int comprimento;

  for (int i = 0; i < tamanho; i++) {
    low = i - 1;
    high = i + 1;

    while (low >= 0 && high < tamanho && str[low] == str[high]) {
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
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  encontrarPalin(str);

  printf("%s", str);

  return 0;
}
