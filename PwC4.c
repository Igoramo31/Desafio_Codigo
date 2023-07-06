#include <ctype.h>
#include <stdio.h>
#include <string.h>

void PrimeiraMaiuscula(char str[]) {

}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  PrimeiraMaiuscula(str);

  printf("%s\n", str);

  return 0;
}