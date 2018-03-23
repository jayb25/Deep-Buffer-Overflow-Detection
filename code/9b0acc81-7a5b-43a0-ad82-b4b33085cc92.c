#include <stdio.h>
int main() {
   int i=00;
   int j=42;
   int k;
   int l;
   k = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = i-j;
   l = i%j;
   l = j%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
