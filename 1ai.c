#include<stdio.h>
#include <time.h>
clock_t start,end;
int main() {
    start=clock();
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the nums ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int k;
    printf("Enter the kth largest element to be found ");
    scanf("%d",&k);
    printf("kth largest element is %d",arr[k-1]);
    end=clock();
    double time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\nTime is %f",time);
}
