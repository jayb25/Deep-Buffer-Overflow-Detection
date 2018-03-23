#include <stdio.h>
int main() {
   int i=40;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = i%j;
   k = l-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
