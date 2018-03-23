#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i%j;
   l = k/j;
   l = i%j;
   l = l-j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
