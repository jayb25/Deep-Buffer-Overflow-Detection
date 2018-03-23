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
   l = k*j*i/9;
   printf("vulnerabitity");
   printf("%f\n",k);
   return 0;
}
