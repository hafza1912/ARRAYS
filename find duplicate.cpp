//Find duplicate numbers in an array 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				printf("%d",arr[i]);
				return 0;
			}
		}
	}
	printf("Duplicate is not present");
	return 0;
}
