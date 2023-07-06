#include <stdio.h>
#include <string.h>

void RemovaDuplicado(char str[]) {

}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);
  
  str[strcspn(str, "\n")] = '\0';

  RemovaDuplicado(str);

  printf("%s\n", str);

  return 0;
}
