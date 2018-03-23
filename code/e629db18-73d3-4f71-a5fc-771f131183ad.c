#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   k = l-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
