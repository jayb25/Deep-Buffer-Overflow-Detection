#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = j-j*j;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
