//Write to access array element using pointer .
//ans:-
#include <stdio.h>
int main(){

int arr[]={1,2,3,4,5};
int *ptr=&arr[0];
printf("Display array element ");
for(int i=0;i<5;i++){
    printf("%d",*(ptr+i));
}
    return 0;
}