#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i%j;
   l = i/j;
   l = k%j;
   l = i-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
