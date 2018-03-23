#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 13;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = k%j;
   l = l%j;
   l = j-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
