#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter tttnumber: ");
   num = 00.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[33];
    int c[67];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of siiitt ii %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
