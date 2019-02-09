#include <stdio.h>

int main(void) {
  char ch;
  scanf("%s",&ch);
  if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
  {
    printf("Alphabet");
  }
  else
  {
    printf("No");
  }
  return 0;
}
