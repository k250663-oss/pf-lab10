#include<stdio.h>
#include<string.h>
int main(){
char sen[100];
printf("enter your sentence:");
fgets(sen , sizeof(sen) , stdin);
int len = strlen(sen);
for(int i = 0;i<len;i++){
        if(sen[i] >= 'A' && sen[i] <= 'Z') {
            sen[i] = ((sen[i] - 'A' + 3) % 26) + 'A';
        }
        else if(sen[i] >= 'a' && sen[i] <= 'z') {
            sen[i] = ((sen[i] - 'a' + 3) % 26) + 'a';
        }
    }
    printf("encrypted sentence: %s" ,sen);
    for(int i = 0;i<len;i++){
        if(sen[i] >= 'A' && sen[i] <= 'Z') {
            sen[i] = ((sen[i] - 'A' - 3 +26) % 26) + 'A';
        }
        else if(sen[i] >= 'a' && sen[i] <= 'z') {
            sen[i] = ((sen[i] - 'a' - 3 +26) % 26) + 'a';
        }
    }
    printf("decryptid:%s" , sen);
}
