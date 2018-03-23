#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 65;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = j-j;
   i = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
