#include <stdio.h>
int main(void) {
  int n , sum, cheng , i , j;
  printf("Please input n: ");
  scanf("%d",&n);
  printf("n = %d\n",n);
   for (i = 1, sum = 0;i <= n ; ++i) {
   	for (j=1 , cheng =1 ;j <= i ; ++j ) {
   		cheng  *= j;
	   }
	sum +=cheng;
   }
   printf("sum = %d",sum);
   return 0;
} 
