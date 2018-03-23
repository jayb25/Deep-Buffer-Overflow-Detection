#include <string.h>
#include <stdio.h>
int main() {
   int i;
   float num1=485;
   i = (int)num1;
   int num2=(int)(i+num1);
   if (i%num2==0)  
     {
        printf("%d\n",i);
     }
   else  
     {
        printf("%d\n",i);
     }

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[79];
    long c[10];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   return 0;
}
