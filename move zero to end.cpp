//Move the zeroes to end (in-place)
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j=0,temp;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]!=0){
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
