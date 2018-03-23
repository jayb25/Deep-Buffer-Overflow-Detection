#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   l = k%j;
   l = l+j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%dnn",k,l);
   return 0;
}
