#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 5;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = i-j;
   i = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
