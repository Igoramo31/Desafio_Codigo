#include <stdio.h>
#include <string.h>

void encontrarPalin(char str[]) {

}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  encontrarPalin(str);

  printf("%s", str);

  return 0;
}
