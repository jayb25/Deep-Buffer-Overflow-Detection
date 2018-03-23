#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   k = 44;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = i-j;
   k = k-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
