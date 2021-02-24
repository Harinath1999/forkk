#include<stdio.h>

int main(){
    int no;
    no = fork();
    printf("Hello ");
    if(no>0)
    {
        printf("Hai \n");
        
    }
    else
    printf("bye \n");
}
