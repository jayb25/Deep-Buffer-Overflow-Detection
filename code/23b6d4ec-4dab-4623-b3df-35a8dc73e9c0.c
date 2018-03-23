#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = k*j*k/9;
   printf("vulnerabbvvty");
   printf("%f\n",k);
   return 0;
}
