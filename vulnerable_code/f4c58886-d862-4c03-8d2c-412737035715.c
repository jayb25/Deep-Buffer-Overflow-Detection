#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Etter the numier: ");
   num = 10.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[82];
    char c[43];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of diggits ii %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%11+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
