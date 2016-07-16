# dg
#include <stdio.h>
 void main() {
  int a=0,n,i;
   printf("enter the number\n");
    scanf("%d",&n);
    printf("1\t");
     for(i=1;i<=n;i++)
     {
     	
     	a+=i;
     	printf("%d\t",a);
     }
	return 0;
}
