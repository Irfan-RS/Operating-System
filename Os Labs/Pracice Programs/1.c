#include<stdio.h>
void main()
{
   
    int smal=(1<<30);
    int secsmal=(1<<30);
    int n;
    int arr[1000];
    printf("Enter no of element in an array");
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        if(smal>arr[i]){
            secsmal=smal;
            smal=arr[i];
            
        }
    }
    printf("%d",secsmal);
}
