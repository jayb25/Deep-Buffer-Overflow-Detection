#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 9;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[60];
    int c[18];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabitity");
   printf("%f\n",l);
   return 0;
}
