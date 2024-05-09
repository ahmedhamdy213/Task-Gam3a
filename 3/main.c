#include<stdio.h>
#include<stdlib.h>


void main()
{
    char Ch;
    printf("Enter Number Or Charcter : ");
    scanf("%c",&Ch);
    if (Ch>='0' && Ch<= '9')
    {
        printf("The Input Is Number " );
        printf("No ASCII CODe ");
    }
    else if ((Ch>='A' && Ch<= 'Z')  || (Ch>='a' && Ch<= 'z'))
    {
        printf("The Input Is Character\n" );
        if (Ch>='A' && Ch<= 'Z')
        {
            printf("The Charcter is upper\n" );

        }
        else
        {
            printf("The Charcter is Lower\n" );

        }
        printf("ASCII == %d \n",Ch);
        
    }
    printf ("End . . . . . ");
  
    


}