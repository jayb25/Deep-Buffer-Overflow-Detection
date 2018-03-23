#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbitty");
   i = 3;
   l = l*j*k/9;
   printf("vulnnrabbvtity");
   printf("%f\n",l);
   return 0;
}
