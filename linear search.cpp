//Linear search 
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
	int i=0;
	while(i<n){
			if(arr[i]==target){
				printf("%d",i);
				return 0;
			}
			else{
				i++;
			}			
	}
	printf("%d",-1);
}
