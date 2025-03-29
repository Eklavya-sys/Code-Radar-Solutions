#include<stdio.h>
void bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            void printArray(int arr[],int size){
                if(i=0;i<size;i++){
                    printf("%d",&arr[]);

                }
                printf("\n");
            }
            int main(){
                inr arr[];
                n=sizeof(arr)/sizeof(arr[0]);
                printf("Original array=%d");
                printArray(arr,n);
                bubbleSort(arr,n);
                printf("Sorted array=%d");
                printArray(arr,n);
                return 0;
            }
        }
    }
}
