#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   l = 3;
   l = l*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",k);
   return 0;
}
