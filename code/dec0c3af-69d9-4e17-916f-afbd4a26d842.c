#include <stdio.h>
int main() {
   int i=0;
   int j=62;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%dnn",k);
   return 0;
}
