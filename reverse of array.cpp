//Reverse an array and print
#include<stdio.h>
int main(){
	int i,n,j=0;
	scanf("%d",&n);
	int arr[n];	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int res[n];
	for(i=0;i<n;i++){
		res[i]=arr[n-i-1];
    }
    for(i=0;i<n;i++){
    	printf("%d ",res[i]);
	}   
	return 0;
}
