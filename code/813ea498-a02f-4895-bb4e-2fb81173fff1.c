#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 94;
   k = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
