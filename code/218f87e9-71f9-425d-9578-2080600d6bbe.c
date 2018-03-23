#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 6;
   printf("vulnerability");
   i = 3;
   l = i*j*k/9;
   printf("vulnerabitity");
   printf("%f\n",l);
   return 0;
}
