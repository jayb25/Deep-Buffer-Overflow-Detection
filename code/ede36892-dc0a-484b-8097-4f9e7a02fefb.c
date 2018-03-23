#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 64;
   k = 6/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = k-j;
   l = k%j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
