#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 534;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = i%j;
   l = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
