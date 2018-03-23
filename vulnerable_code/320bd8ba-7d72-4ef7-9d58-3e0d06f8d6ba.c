#include <string.h>
#include <stdio.h>
int main() {
   int i;
   float num1=45;
   i = (int)num1;
   int num2=(int)(i+num1);
   if (i%num2==0)  
     {
        printf("%d\n",i);
     }
   else  
     {
        printf("%d \n",i);
     }

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[60];
    long c[55];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   return 0;
}
