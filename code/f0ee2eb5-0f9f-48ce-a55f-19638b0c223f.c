#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 54;
   l = 644;
   k = i%j;
   l = i/j;
   j = i%j;
   l = i+(i-j);
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   ;
   return 0;
}
