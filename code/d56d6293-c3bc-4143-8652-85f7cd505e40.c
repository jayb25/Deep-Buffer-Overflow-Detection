#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i%j;
   l = i+j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
