#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 644;
   k = 7/j;
   l = i/j;
   l = i%j;
   l = l%j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
