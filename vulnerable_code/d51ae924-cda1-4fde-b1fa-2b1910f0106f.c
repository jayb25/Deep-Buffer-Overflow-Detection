#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 33;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[66];
    int c[60];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbbiity");
   printf("%f\n",l);
   return 0;
}
