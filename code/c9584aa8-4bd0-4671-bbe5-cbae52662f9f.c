#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = k%j;
   l = i-j;
   k = k--*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
