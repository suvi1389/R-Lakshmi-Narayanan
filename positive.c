#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  if(n>0)
  {
    printf("positive");
  }
  else if(n<0)
  {
    printf("negative");
  }
  else if(n==0)
  {
    printf("zero");
  }
  else
  {
    printf("invalid input");
  }
  return 0;
}
