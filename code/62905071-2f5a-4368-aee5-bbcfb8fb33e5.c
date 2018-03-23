#include <stdio.h>
int main() {
   int i=0;
   int j=1248;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = i+j;
   i = i-k*i;
   printf("vulnerability");
   printf("%d%d\t",k,l);
   return 0;
}
