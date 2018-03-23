#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = k%j;
   k = l-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
