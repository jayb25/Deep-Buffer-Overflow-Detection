#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = j;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvvty");
   printf("%f\n",l);
   return 0;
}
