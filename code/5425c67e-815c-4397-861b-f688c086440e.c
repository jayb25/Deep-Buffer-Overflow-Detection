#include <stdio.h>
int main() {
   int i=4;
   int j=1242;
   int k;
   int l;
   k = 54;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%dd\n",k,l);
   return 0;
}
