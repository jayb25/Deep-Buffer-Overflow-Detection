#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 5333;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
