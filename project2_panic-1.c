 
#include <stdio.h>
#include <stdlib.h>

/*


U15718954
Geonhee Choi
Project2-1 solution 



*/
int main(void)
{
    int  N,i,C,D,sum=0;//initialize variables
    
    
    printf("Enter item price:\n");//ask use inpur
    scanf("%d",&C);  //scan item per price
    
    if(C<=0){  //input check
        printf("Invalid price 0 \n Price must be greather than 0\n");
        
        exit(EXIT_FAILURE);
        
    }
    
    printf("Enter number of units:\n");
    //ask number of unit
    scanf("%d",&N);  //scan number of unit
    
    if(N<=0){  //input validation
        printf("Invalid number of units 0 \n Number of units must be greater than 0\n");
        
        exit(EXIT_FAILURE);
        
        
    }
    
    
    printf("Enter money amount:\n");
    //ask input money
    scanf("%d",&D);  //scan amount of dollar
    
    if(D<0){ //input validation
        
        printf("Invalid money amount -1 \n  Money amount must be greater than or equal to 0\n");
        
        exit(EXIT_FAILURE);
        
        
    }
    
    i = 0;  //make i=0
    while (i <=N ) {
      
    sum+= C*i;  //count the item per price
     i++; //i count
    
    }
  
     
    
        
    if(sum<=D){  // if sum <=D
        
        printf("Has enough money!\n");
       //print has enough money
    }

    if(sum>D)

	{
        
        
        //print the need money 
          
        printf("Needs %d dollar(s) to complete the purchase!\n", sum-D);
  
       
    }
   


    return 0;
}

