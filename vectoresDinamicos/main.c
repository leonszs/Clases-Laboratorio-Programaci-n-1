#include <stdio.h>
#include <stdlib.h>




int main()
{

    int * pVec;
    int i ;


    pVec = (int*) malloc(sizeof(int)*5);

    for (i = 0; i<5; i++)
    {
        *(pVec+i)  =i+1;




    }
    for (i=0;i<5;i++)
    {


        printf("%d \n ", *(pVec+i));
    }

    return 0;
}
