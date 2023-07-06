#include <stdio.h>
#include <string.h>

int VerificaPalin(char str[]) {
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
