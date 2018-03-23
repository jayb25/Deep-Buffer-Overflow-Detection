#include <stdio.h>
int main() {
   float i=4;
   int j=42;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l/j;
   j = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
