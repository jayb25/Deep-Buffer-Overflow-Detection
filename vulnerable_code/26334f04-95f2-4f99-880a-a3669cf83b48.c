#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter the number ");
   num = 50.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[19];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of dibtgii i %d ii %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1%+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
