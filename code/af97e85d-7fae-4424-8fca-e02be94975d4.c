#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   j = 53;
   k = 68;
   k = i/4;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
