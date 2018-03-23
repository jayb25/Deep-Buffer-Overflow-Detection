#include <stdio.h>
int main() {
   float i=0;
   int j=524;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
