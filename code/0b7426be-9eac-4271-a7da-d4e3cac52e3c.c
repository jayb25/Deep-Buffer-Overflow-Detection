#include <stdio.h>
int main() {
   int i=0;
   int j=118;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i/j;
   k = l-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
