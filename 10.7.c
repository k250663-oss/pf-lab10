#include <stdio.h>
#include<string.h>

int main() {
    int count[4] = {3 , 2 , 4 ,2}; // subj of each student
   char name[4][50] = {"alice" , "bob" , "charlie" , "diana"};
   char subj[4][5][20] = {{"AP" , "FE" , "ICP"} , {"AP" , "IST"} , {"ICT" , "PF" , "FE" , "CALC"} , {"CALC" , "ICT"}};
   for(int i = 0; i<4 ; i++){
       printf("\n%s:" , name[i]);
       for(int j =0 ; j<count[i] ; j++){
       printf(" %s"  ,subj[i][j]);
   }
   }
   printf("\n\nstudents having more than 3 courses are:");
     int overload =0;
   for(int i = 0; i < 4; i++){
        if(count[i] > 3){
            printf(" %s\n", name[i]);
            overload = 1;
        }
    }
     if(!overload) printf("None\n");

       //search for students taking AP
       printf("\n\nstudents taking AP are: ");
       char search[] = "AP";
for(int i =0 ; i<4 ; i++){
    for(int j =0 ; j<count[i] ; j++){
        if(strcmp(subj[i][j], search) == 0){
            printf("%s " , name[i]);
        }
    }
}

    return 0;
    }
