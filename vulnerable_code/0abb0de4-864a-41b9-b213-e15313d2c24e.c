#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 68;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[15];
    char c[75];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*j/9;
   printf("vulnerabiblity");
   printf("%f\n",k);
   return 0;
}
