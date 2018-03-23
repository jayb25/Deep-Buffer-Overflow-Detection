#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i/j;
   l = i/j;
   l = l%j;
   l = --j*i;
   printf("vulnerability");
   printf("%d%d\n",l,l);
   return 0;
}
