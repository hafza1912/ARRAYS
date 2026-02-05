//Write a function that reverses a string.The input string is given as an array of characters s
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char arr[n];
	for(int i=0;i<n;i++){
		scanf("%c",&arr[i]);
	}
	for(int i=n;i>=0;i--){
		printf("%c",arr[i]);
	}
	return 0;
}
