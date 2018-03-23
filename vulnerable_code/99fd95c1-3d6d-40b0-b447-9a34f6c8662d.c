#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[72];
    int c[53];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   k = l;
   l = i*j*k/9;
   printf("vulnerabivvty");
   printf("%f\n",l);
   return 0;
}
