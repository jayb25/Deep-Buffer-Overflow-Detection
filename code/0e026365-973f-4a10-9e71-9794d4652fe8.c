#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%4;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%dnn",k,l);
   return 0;
}
