/*Return the maximum profit you can achieve from this transaction
If you cannot achieve any profit, return 0 */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int maxProfit=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        } else if(arr[i]-min>maxProfit){
            maxProfit=arr[i]-min;
        }
    }
    printf("Max profit:%d",maxProfit);
    return 0;
}
