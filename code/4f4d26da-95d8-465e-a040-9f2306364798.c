#include <stdio.h>
int main() {
   float i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
