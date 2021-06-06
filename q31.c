#include<stdio.h>
#include<stdlib.h>

int main()
{
    int na,i,j,max; //na=no. of arrays
    printf("Enter no. of arrays\n");
    scanf("%d",&na);
    double *a[na];
    double largest[na];
    int ne[na]; //ne=no. of elements in an array

    for(i=0;i<na;i++)
    {
        printf("Enter size of array #%d\n",i+1);
        scanf("%d",&ne[i]);
        if(ne[i]>0)
        {
            a[i]=(double*)malloc( sizeof(double) * ne[i] ); //the first element will store the size of the array
            printf("Enter array elements\n");
            for(j=0;j<ne[i];j++)
            {
                scanf("%lf",&a[i][j]);
            }
        }
        else
        {
            a[i]=NULL;
        }
    }

    for(i=0;i<na;i++)
    {
        if(a[i]==NULL)
        {
            printf("Not able to find the largest element of an empty array(array #%d), returned value will be incorrect\n",i+1);
        }
        else
        {
            max=0;
            for(j=0;j<ne[i];j++)
            {
                if((a[i])[j] > (a[i])[max])
                {
                    max=j;
                }
            }
            largest[i]=(a[i])[max];
        }
    }
    printf("[ ");
    for(i=0;i<na-1;i++)
    {
        printf("%f, ",largest[i]);
    }
    printf("%f ]\n",largest[i]);
    return 0;
}

//As question specifies an example with double type values, storage and printing has to be done in double format
//Thus the outputs are not in the same format as the one mentioned in the question