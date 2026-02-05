/*Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int target;
	scanf("%d",&target);
	for(int i=0;i<n;i++){
		int comp=target-arr[i];	
		for(int j=i+1;j<n;j++){					
			if(arr[j]==comp){
				printf("%d %d",i,j);
				return 0;
			}
		}		
	}
	printf("%d",-1);	
	return 0;
}
