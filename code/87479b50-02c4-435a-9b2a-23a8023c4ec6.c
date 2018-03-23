#include <stdio.h>
int main() {
   int i=4;
   int j=01;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = k%j;
   l = i-j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
