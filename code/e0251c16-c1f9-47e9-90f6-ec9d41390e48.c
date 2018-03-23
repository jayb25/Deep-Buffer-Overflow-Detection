#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   k = l/j;
   l = i%j;
   l = k-j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
