#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k=4;
   int l=9;
   for (l=8; l<1+j; l+=1) 
     {
        k = k+i;
        printf("vulnerability");
     }
   printf("%d\n",k);
   return 0;
}
