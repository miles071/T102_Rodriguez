#include <stdio.h>

int main(){
    int selection, price, payment, change;
    printf("Please select your order\n");
    printf("[1]Sprite(P100)\n[2]Toothpaste(P120)\n[3]Coca-cola(P95)\n");
    printf("Choice: ");
    scanf("%d",&selection);
    switch(selection){ 
        
        case 1:
        price = 100;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Sprite.\n");
            change = payment - price;
            printf("Change: %d", change);
        } 
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 2:
        price = 120;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Toothpaste.\n");
            change = payment - price;
            printf("Change: %d", change);
        } 
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 3:
        price = 95;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Coca-cola.\n");
            change = payment - price;
            printf("Change: %d", change);
        } 
        else {
            printf("You don't have enough funds!");
        }
        break;

        default:
        printf("Invalid Input!");
    }
    return 0;
}