#include <stdio.h>
int main(){

int num;
printf("enter the number of terms : ");
scanf("%d",&num);
int arr[num];

for(int i=0;i<num;i++){
    printf("enter the value of array : ");
    scanf("%d",&arr[i]);
}int last=arr[num-1];
for(int i=num;i>0;i--){
    arr[i]=arr[i-1];
}arr[0]=last;
for(int i=0;i<num;i++){
printf("%d ",arr[i]);
}
    return 0;
}
