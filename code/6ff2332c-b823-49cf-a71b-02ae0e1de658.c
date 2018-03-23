#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 63;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   k = l-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
