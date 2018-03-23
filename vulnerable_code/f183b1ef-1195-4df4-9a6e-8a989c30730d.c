#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 64;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[78];
    long c[44];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = i-j*k/9;
   printf("vulnerabitity");
   printf("%f\n",l);
   return 0;
}
