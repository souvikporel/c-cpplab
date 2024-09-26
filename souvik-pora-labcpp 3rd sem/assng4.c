//Write a program to check whether a string in palindrome or not without using any header file.
//ans:-
#include<stdio.h>
int main(){
    char string[10];
    int length=0;   
    int flag=1;
    printf("Enter the string: ");
    scanf("%s",string);
    for(int i=0;string[i]!='\0'; i++){
        length++;
        }
        for(int i=0;i<length/2;i++){
            if(string[i]!=string[length-1-i]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("Palindrome");
        }
        else{
            printf("Not Palindrome");
        }
        return 0;
}