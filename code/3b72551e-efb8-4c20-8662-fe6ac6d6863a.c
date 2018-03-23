#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnnrabbviiity");
   printf("%d\n",l);
   return 0;
}
