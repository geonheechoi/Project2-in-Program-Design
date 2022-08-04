#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/*
U15718954
Geonhee Choi
Project2-2sol



*/
int main()
{
    char ch,read;
    int flag=0; //make flag
    //ask input
    printf("Enter the input: ");
    ch=getchar(); //read by getchar

    ch=tolower(ch);
    // ch convert as lower case
    while((read=getchar())!='\n') //read by getchar
    {
        //read convert as lower case
        read=tolower(read);


        if((isalpha(ch)) && (isalpha(read))) //check ch and read alphabet
        {
            //compare ch1 and read
           if(ch>read)
            {
                //flag to true
                flag=1;
            }
            ch=read; //match ch1 and read
        }
        else{
            flag=1; // flag to true
        }
    }

    flag==0? printf("Output: In order"):printf("Output:Not in order");
    //Conditinal expression, As conditon flag=0, true->in order,false-> Not in order

	return 0;
}





