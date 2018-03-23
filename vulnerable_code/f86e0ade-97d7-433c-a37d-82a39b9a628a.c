#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[61];
    char c[69];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabitity");
   printf("%f\n",l);
   return 0;
}
