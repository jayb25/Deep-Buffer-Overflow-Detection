#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulneaabiiity");
   k = 3;
   l = l*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[54];
    long c[26];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%f\n",i);
   return 0;
}
