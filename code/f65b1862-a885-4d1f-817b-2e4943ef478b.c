#include <stdio.h>
int main() {
   int i=4;
   int j=111;
   int k;
   int l;
   k = 53;
   l = 64;
   i = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   k = l-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
