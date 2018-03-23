#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = j%j;
   l = i%j;
   k = i-k*l;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
