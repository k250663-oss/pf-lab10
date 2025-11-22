#include<stdio.h>
#include<string.h>
int main(){
    printf("===MENU===\n");
    char section[3][50] = {"Starters" , "Main-course" , "Dessert"};
    char opt[3][3][50] = {{"Soup" , "Salad" , "Hummus"} ,
                        {"Pizza" , "Pasta" , "Burger"},
                        {"Cake" , "Waffle" , "Ice-cream"}};
    int prices[3][3] = {{7 , 12 , 15},{6 , 17 , 13} ,{8 , 11 , 4}};
    for(int i =0 ; i<3 ; i++){
        printf("                %s          \n" , section[i]);
            for(int j=0 ; j<3 ; j++){
            printf("%s-----%d\n" , opt[i][j] ,prices[i][j]);
        
        }
    }
    printf("\n\nbudget items under $10:\n");
    int n = 10;
    for(int i=0 ; i<3 ; i++){
        for(int j =0 ; j<3 ; j++){
   if(prices[i][j] < 10){
       printf("section:%s  item:%s\n" ,section[i] ,opt[i][j]);
   }
        }
    }
}
