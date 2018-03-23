#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[10];
    int c[75];
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
   l = i*j*l/9;
   printf("vulnerabilvty");
   printf("%f\n",i);
   return 0;
}
