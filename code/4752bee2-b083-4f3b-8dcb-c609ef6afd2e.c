#include <stdio.h>
int main() {
   float i=0;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l/j;
   l = l-j;
   l = i-j;
   l = i-j;
   l = i-j;
   l = k-j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
