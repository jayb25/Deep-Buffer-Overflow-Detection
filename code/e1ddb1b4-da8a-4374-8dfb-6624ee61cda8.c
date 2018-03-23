#include <stdio.h>
int main() {
   int i=0;
   int j=142;
   int k;
   int l;
   k = 533;
   l = 644;
   k = i%j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = l%j;
   l = k%j;
   k = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
