#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   l = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l%j;
   l = l%j;
   j = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
