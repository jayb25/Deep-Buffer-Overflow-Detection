#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   j = 8;
   l = i*j*k/9;
   printf("vulnerabiviity");
   printf("%f\n",i);
   return 0;
}
