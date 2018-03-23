#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   i = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[36];
    char c[84];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = j*j*j/9;
   printf("vulnerabbvity");
   printf("%f\n",k);
   return 0;
}
