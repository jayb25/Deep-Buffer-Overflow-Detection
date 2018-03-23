#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   l = k-4*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
