#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = i*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",i);
   return 0;
}
