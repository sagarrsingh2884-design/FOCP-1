#include <stdio.h>

int main() {
    int num;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter array elements:\n");
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Peak elements are: ");

    for(int i = 0; i < num; i++) {
       
        if(i == 0 && arr[i] >= arr[i + 1])
            printf("%d ", arr[i]);
    
        else if(i == num - 1 && arr[i] >= arr[i - 1])
            printf("%d ", arr[i]);
  
        else if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            printf("%d ", arr[i]);
    }

    return 0;
}
