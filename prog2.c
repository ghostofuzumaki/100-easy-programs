#include <stdio.h>
int main(){
  int a,b;
  printf("Enter the numbers: ");
  scanf("%d %d",&a,&b);
  int sum = a + b;
  printf("Their sum is : %d\n",sum);
  return 0;
}