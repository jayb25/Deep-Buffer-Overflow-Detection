#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   k = l-j;
   l = i%j;
   l = l%j;
   j = i-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
