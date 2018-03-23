#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabiiity");
   k = 3;
   l = k*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",k);
   return 0;
}
