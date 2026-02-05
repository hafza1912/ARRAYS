/*Given a non-empty array of integers nums, every element appears twice except for one
Find that single one */
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int single = 0;
    for(int i = 0; i < n; i++) {
        single = single ^ arr[i];
    }
    printf("%d", single);
    return 0;
}
