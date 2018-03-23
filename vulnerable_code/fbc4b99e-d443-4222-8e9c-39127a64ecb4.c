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
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[75];
    int c[83];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*l/9;
   printf("vulnerabbvbbty");
   printf("%f\n",l);
   return 0;
}
