#include <stdio.h>
int main()
{
    int n ;
    //accept input
    //printf("Enter value of n:\n") ;
    printf("n=");
    scanf("%d",&n) ;
    int series[30]={0,1} ; // add 0 1 for initialization
    for (int i=2; i <= n ; i++ ) //adding the elements
    {
        series[i] = series[(i-2)] + series[(i-1)];
    }
    /*for (int j = 0; j <= n ; j++)//print
   {  
       printf("%d\t", series[j]);
   }*/
   printf("\n%d", series[n]);
    return 0 ;
}
/* #include <stdio.h>
int main()
{
    int n ;
    //accept input
    printf("Enter value of n:\n") ;
    scanf("%d",&n) ;
    int series[30]={0,1} ; // add 0 1 for initialization
    for (int i=2; i <= n ; i++ ) //adding the elements
    {
        series[i] = series[(i-2)] + series[(i-1)];
    }
    for (int j = 0; j <= n ; j++)//print
   {  
       printf("%d\t", series[j]);
   }
   printf("\n%d", series[n]);
    return 0 ;
}

#include <stdio.h>
int main()
{
     int n = 5 , num  ;  
    //printf("Enter value of n") ;
    //scanf("%d",&n) ;
    int series[n] ;
    for (int i=0; i<=n ;i++)
    {
        int series[]={0 , 1 , num} ;
        num = series[i] + series[i+1] ;

        printf("%d\t", series[i]);
    }
    //int fibbo();
    return 0 ;
}*/