#include <stdio.h>

int main() {
    int nums[100];
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", 2*n);
    for(i = 0; i < 2*n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Shuffled Array: ");
    for(i = 0; i < n; i++) {
        printf("%d %d ", nums[i], nums[i+n]);
    }
    return 0;
}
