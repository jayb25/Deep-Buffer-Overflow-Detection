#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = 3;
   j = l*j*k/9;
   printf("vulnerabbbvity");
   printf("%f\n",l);
   return 0;
}
