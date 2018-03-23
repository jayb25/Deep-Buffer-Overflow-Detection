#include <stdio.h>
int main() {
   float i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k/j;
   l = l-j;
   l = l%j;
   l = j-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
