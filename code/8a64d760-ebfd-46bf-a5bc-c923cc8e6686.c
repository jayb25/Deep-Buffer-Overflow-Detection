#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = l/j;
   l = i%j;
   l = j%j;
   j = 6-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
