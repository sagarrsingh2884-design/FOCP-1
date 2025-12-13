#include <stdio.h>
int main(){

int num;
int position;
int arr[100];
int insert,choose;
printf("enter number of terms in array : ");
scanf("%d",&num);

for(int i=0;i<num;i++){
    printf("enter the value of array : ");
    scanf("%d",&arr[i]);
}
printf("enter the element to insert : ");
scanf("%d",&insert);

printf("TO insert in \n front choose 1\nmiddle choose 2\nlast choose 3\n");
scanf("%d",&choose);
if(choose==1){
position=0;
}else if(choose==2){
    
    printf("tell where to insert : ");
    scanf("%d",&position);
position--;

}else if(choose==3){
position=num;
}else{
    printf("invalid number entered\n");
}
 for (int i = num; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = insert;
    num++;

    
    printf("Array after insertion:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
