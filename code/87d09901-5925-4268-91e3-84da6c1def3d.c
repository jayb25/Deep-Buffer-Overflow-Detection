#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   k = 6-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
