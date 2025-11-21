#include<stdio.h>
#include<string.h>
int main(){
    char pass[50];
    int count = 0;
   printf("enter password:");
    scanf("%s" , pass);
       int len = strlen(pass);
    if(len >= 8){
           count++;
    }
    else{
        printf("short length");
    }
    char ch1 = '@';
    char ch2 = '#';
    char ch3 = '!';
    char ch4 ='%';
    char ch5 ='$';
    if(strchr(pass , ch1)||(pass , ch2)||(pass , ch3)||(pass , ch4)||(pass , ch5)){
        count++;
    }
    else{
        printf("no special character");
    }
    int dig = 0;
    for(int i=0 ; i<len;i++){
        if(pass[i]>'0' && pass[i]<'9'){
            dig =1;
        }
    }
    if(dig){
        count++;
    }
    else{
        printf("no digit");
    }
    int capital =0;
    for(int i=0 ; i<len ; i++){
        if(pass[i]>'A' && pass[i]<'Z'){
            capital =1;    // true
        }
    }
    if(capital){
        count++;
    }
    else{
        printf("no capital letter");
    }
    printf("conditions checked:%d" , count);
    if(count == 4){
        printf("\nvalid");
    }
    else{
        printf("\ninvalid");
    }
    return 0;
}

