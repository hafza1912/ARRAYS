//Find first and last occurrence of an element in an array
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                if(first==-1){
                    first=i;   
                }
                last=j;        
            }
        }
        if(first!=-1)
            break;  
    }

    printf("%d %d",first,last);
    return 0;
}

