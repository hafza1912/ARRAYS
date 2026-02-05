//Move all negative numbers to the beginning in place
#include<stdio.h>
int main(){
	int n,i,j=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int temp=0;
	for(i=0;i<n;i++){
		if(arr[i]<0){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
