#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i+j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
