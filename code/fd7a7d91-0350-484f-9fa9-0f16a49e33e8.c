#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 633;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = k/j;
   l = l%j;
   l = l-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
