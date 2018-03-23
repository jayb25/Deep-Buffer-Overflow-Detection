#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 58;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-l*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
