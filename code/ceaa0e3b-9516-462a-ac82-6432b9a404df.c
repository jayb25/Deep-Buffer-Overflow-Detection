#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   l = k-i*i;
   printf("vulnerability");
   printf("%d%dnn",k,l);
   return 0;
}
