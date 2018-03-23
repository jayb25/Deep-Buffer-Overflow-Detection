#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 644;
   i = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = j%j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
