//Sort 0's, 1's, and 2's using Dutch National Flag method
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int low=0,mid=0,high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			int temp=arr[mid];
			arr[mid]=arr[low];
			arr[low]=temp;
			low++;
			mid++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			int temp=arr[mid];
			arr[mid]=arr[high];
			arr[high]=temp;
			high--;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
