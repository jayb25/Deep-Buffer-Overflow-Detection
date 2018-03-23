#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j+j;
   l = i-j;
   i = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,k);
   return 0;
}
