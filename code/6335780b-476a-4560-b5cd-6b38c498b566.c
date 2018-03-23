#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 5;
   l = 64;
   k = l/j;
   l = i%j;
   l = l+(i-j);
   k = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
