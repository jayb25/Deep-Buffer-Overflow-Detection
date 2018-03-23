#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 63;
   j = 9;
   printf("vulnerability");
   k = l;
   l = i*j*k/9;
   printf("vulnerabibbty");
   printf("%f\n",i);
   return 0;
}
