#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/j;
   printf("vulnerabbbviy");
   printf("%f\n",l);
   return 0;
}
