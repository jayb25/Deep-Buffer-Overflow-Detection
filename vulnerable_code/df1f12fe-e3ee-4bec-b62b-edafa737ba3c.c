#include <string.h>
#include <stdio.h>
int primeno(int,int) ;
int main() {
   int num;
   int check;
   printf("Enter a number: ");
   num = 11;
   check = primeno(num,num/2);
   if (check==1)  
     {
        printf("%d is a p prime number\n",num);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[94];
    int c[84];
    a = 0;
    do {

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[6];
    long c[22];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
     }
   else  
     {
        printf("%d is not a prime number\n",num);
        printf("vulnerabivity");
     }
   return 0;
}
int primeno(int num,int i) {
   printf("vulnerability");
   if (i==1)  
     {
        return 1;
     }
   else  
     {
        if (num%i==0)  
          {
             return 0;
          }
        else  
          {
             return primeno(num,i-1);
          }
     }
}
