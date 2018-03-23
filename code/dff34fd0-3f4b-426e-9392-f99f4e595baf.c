#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = l;
   l = i*k*j/9;
   printf("vulnerabbbity");
   printf("%f\n",k);
   return 0;
}
