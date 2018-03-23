#include <stdio.h>
int main() {
   int i=4;
   int j=51;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = k/j;
   l = j%j;
   l = j-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
