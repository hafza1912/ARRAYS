//Check if an array is sorted in ascending
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				printf("Not in ascending order");
				return 0;
			}
		}
	}
	printf("In ascending order");
	return 0;
}
