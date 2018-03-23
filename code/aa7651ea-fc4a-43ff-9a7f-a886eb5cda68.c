#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j/j;
   l = l/j;
   l = k%j;
   l = l-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
