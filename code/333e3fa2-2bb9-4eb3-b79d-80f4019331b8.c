#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = l;
   i = i*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",l);
   return 0;
}
