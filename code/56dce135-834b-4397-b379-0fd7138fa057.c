#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = l;
   l = i*j*l/9;
   printf("vulnerabbbitty");
   printf("%f\n",i);
   return 0;
}
