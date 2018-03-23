#include <stdio.h>
int main() {
   int i=4;
   int j=128;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l/j;
   l = j%j;
   l = i+j;
   l = k-i*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
