#include <stdio.h>
 
int main()                                      //ps=1
{
    int a[5],i,n,smallest,biggest;                   //ps=5
   
    printf("Enter size of the array : ");     //1 

    scanf("%d",&n);                            //1
 
    printf("Enter elements in array : ");     //1
    for(i=0; i<n; i++)                        //1(n+1)+n
    {
        scanf("%d",&a[i]);                   //n
    }
 
    smallest=biggest=a[0];                   //1       
    for(i=1; i<n; i++)                       //1
    {
         if(smallest>a[i])                  //n
		  smallest=a[i];                    //n
		   if(biggest<a[i])                 //n
		    biggest=a[i];                   //n
    }
     printf("smallest of array is : %d",smallest);  //1
          printf("\biggest of array is : %d",biggest); //1
 
 
    return 0;
}
