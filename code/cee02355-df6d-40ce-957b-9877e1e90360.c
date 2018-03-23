#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+(i-j);
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
