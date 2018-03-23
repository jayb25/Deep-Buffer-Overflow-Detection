#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 531;
   l = 44;
   k = i/j;
   l = i%j;
   l = l+j;
   l = j%j;
   k = j-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
