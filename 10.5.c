// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    int stud;
    char hname[40];
    printf("enter number of students:");
    scanf("%d" , &stud);
    char name[stud][50];
    int marks[stud];
    int gmarks = 0;
    for(int i = 0 ; i<stud ; i++){
        printf("enter name and marks of student%d:" , i+1);
        scanf("%s %d" , name[i] , &marks[i]);
    }
    for(int i =0 ;i <= (stud-1) ; i++){
        if(marks[i] > gmarks){
            gmarks = marks[i];
            strcpy(hname, name[i]); //to save highest scorers name

    }
    }
    printf("highest marks:%d scored by:%s" , gmarks ,hname);
    int total = 0;
    for(int i=0 ; i<stud ; i++){
        total += marks[i];
    }
    int avg = total/stud;
    printf("\nAvg marks:%d" , avg);

    return 0;
}

