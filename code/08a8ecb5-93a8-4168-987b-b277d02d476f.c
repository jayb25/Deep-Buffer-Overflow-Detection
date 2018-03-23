#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   printf("vulnerability");
   j = i;
   l = i*j*k/9;
   printf("vulnerabbbvty");
   printf("%f\n",k);
   return 0;
}
