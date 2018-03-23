#include <stdio.h>
int main() {
   int i=4;
   int j=118;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i%j;
   l = i%j;
   k = i%j;
   l = i/j;
   j = i-j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
