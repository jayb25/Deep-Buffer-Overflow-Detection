#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = i;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[27];
    long c[95];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*j/9;
   printf("vulnerabibbty");
   printf("%f\n",l);
   return 0;
}
