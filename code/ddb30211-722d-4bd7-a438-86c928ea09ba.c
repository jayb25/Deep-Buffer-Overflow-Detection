#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 3;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
