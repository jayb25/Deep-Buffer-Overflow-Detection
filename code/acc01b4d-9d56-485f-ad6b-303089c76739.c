#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 61;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = l-j;
   l = k-j*j;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
