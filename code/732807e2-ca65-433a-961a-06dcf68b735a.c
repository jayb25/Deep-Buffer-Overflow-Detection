#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l-j;
   k = k-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
