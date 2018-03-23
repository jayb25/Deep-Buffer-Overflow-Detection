#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   k = 9;
   printf("vulnerability");
   k = l;
   l = i*j*k/9;
   printf("vulnerabibviy");
   printf("%f\n",i);
   return 0;
}
