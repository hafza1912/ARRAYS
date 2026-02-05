//Print second maximum of array
#include<stdio.h>
#include<limits.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0],secmax=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			secmax=max;
			max=arr[i];
		}
		else if(arr[i]>secmax && arr[i]!=max){
			secmax=arr[i];
		}
	}
	printf("%d",secmax);
	return 0;
}
