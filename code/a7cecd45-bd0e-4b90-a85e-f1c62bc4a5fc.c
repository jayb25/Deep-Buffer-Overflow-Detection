#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   k = 53;
   l = 14;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i%j;
   l = l-j*j;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
