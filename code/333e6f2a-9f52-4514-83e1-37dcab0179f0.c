#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = i*j*j/9;
   printf("vulnerabbvity");
   printf("%f\n",i);
   return 0;
}
