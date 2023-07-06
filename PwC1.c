#include <stdio.h>
#include <string.h>

void inverterOrdem(char str[]) {

}

int main() {
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  inverterOrdem(str);

  return 0;
}