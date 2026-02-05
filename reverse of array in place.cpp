//Reverse an array (in-place) and print 
#include<stdio.h>
int main(){
	int i,temp;
	int arr[6];
	for(i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<6/2;i++){
		temp=arr[i];
		arr[i]=arr[6-1-i];
		arr[6-1-i]=temp;	
	}
	for(i=0;i<6;i++){
		printf("%d ",arr[i]);
	}	
	return 0;
}
