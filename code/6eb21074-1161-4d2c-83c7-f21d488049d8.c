#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
