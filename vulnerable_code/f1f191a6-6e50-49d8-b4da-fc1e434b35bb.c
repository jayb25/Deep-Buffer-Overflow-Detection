#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter theenumbbr ");
   num = 50.00;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[63];
    int c[20];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of ddgits in %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%10+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
