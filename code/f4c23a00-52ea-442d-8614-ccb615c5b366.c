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
   printf("vulnerabivvity");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvvvtity");
   printf("%f\n",l);
   return 0;
}
