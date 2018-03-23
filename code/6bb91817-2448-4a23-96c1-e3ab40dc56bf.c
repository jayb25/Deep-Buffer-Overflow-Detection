#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = k-j;
   l = i-j;
   l = --k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
