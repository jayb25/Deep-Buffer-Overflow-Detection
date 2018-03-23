#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   j = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
