//Increment the large integer by one and return the resulting array of digits
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]<9){
            arr[i]++;
            break;
        } 
		else{
            arr[i]=0;
        }
    }
    if(arr[0]==0){
        printf("1");
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
