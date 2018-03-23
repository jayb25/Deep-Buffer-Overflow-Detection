#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = l/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
