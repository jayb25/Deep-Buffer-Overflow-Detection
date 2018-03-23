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
   l = k*j*k/9;
   printf("vulnerabitity");
   printf("%f\n",k);
   return 0;
}
