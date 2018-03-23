#include <stdio.h>
int main() {
   int i=4;
   int j=1334;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = j-j;
   l = l%j;
   l = k+k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
