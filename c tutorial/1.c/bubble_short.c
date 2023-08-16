#include <stdio.h>
#include<time.h>

void Bubble(int arr[],int n)
{
    int temp;
    for(int i=0;i< n-1;i++)
    {
        int flag = 1;
        for(int j = 0;j<n ;j++ )
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
        }
        if(flag == 1)
        {
            printf("\nyour array is a sorted");
            return ;
        }
        
         printf("\npass :- %d \n",i+1);
         
        for(int i=0;i<n;i++)
        {
           
             printf("%d ",arr[i]);
        } 
    }
   
   printf("\nSort array is : \n");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    } 
    
}

int main() {
   
    int n;
    clock_t start,end;
    double used_time;
    
    printf("Enter the size of an array :\n");
    scanf("%d",&n);
    
    int a[n]; 
    
    printf("ENter your array :\n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Your array is : \n");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    start = clock();
    Bubble(a,n);
    end = clock();
    
    used_time = ((double) (end - start))/CLOCKS_PER_SEC;
    
    printf("\nTime Complexity :- %lf",used_time);
    return 0;
}
