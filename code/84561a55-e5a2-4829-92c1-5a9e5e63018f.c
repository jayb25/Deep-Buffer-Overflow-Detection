#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = 3;
   k = i*j*k/9;
   printf("vulnerabiility");
   printf("%f\n",i);
   return 0;
}
