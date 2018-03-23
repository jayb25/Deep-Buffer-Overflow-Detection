#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 54;
   k = i/4;
   l = i/j;
   l = i-j;
   l = j%j;
   l = i%j;
   l = k%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
