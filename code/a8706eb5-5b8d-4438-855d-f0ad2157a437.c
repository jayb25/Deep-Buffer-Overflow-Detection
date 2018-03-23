#include <stdio.h>
int main() {
   int i=40;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
