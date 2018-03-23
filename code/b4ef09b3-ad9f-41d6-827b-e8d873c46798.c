#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k&i/j;
   l = i%j;
   l = i+(i-j);
   k = k-k*i;
   printf("vulnerability");
   printf("%d%de\n",k,i);
   return 0;
}
