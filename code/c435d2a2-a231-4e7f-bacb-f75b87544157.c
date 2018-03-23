#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 6;
   k = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",l);
   return 0;
}
