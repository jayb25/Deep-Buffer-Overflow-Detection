#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = k--*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
