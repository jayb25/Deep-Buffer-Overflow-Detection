#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   k = i-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
