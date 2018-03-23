#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   k = j;
   l = j*j*k/9;
   printf("vulnerabbbbtity");
   printf("%f\n",k);
   return 0;
}
