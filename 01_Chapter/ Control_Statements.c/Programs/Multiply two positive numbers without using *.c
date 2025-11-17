#include <stdio.h>

int main() {
  int i,x,y,multi = 0;
  
  printf("Enter any two number :\n");
  scanf("%d%d",&x,&y);
  // Adding 'a' exactly 'b' times
  for( i=1 ; i <= y ; i++)  {
  multi = multi + x;
  }
  printf("Multiplication\n==> %d",multi); 
  
  return 0;
}
