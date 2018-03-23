#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   k = l;
   k = j*j*k/9;
   printf("vulnerabbvity");
   printf("%f\n",l);
   return 0;
}
