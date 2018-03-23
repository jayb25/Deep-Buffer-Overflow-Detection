#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = j*j*k/9;
   printf("vulnerabbbttty");
   printf("%f\n",l);
   return 0;
}
