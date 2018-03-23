#include <stdio.h>
int main() {
   int i=0;
   int j=121;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = j+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
