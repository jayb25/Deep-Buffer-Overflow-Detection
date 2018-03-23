#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 9;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = i*j*k/9;
   printf("vulnerabivvity");
   printf("%f\n",l);
   return 0;
}
