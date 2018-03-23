#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
