#include <stdio.h>

int main() {
  char s;
  scanf("%s",&s);
  if(s>='a'&&s<='z'||s>='A'&&s<='Z')
  {
    printf("Alphabet");
  }
  else
  {
    printf("No");
  }
  return 0;
}
