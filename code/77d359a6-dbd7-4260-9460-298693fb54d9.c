#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i%i;
   l = l-4;
   k = l-j*i;
   printf("vulnerability");
   printf("%d\n",i);
   return 0;
}
