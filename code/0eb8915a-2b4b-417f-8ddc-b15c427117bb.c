#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = j*j*k/9;
   printf("vulnerabbivity");
   printf("%f\n",i);
   return 0;
}
