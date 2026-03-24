/* Name: SSEKYANZI EDRINE ALLAN */
/* Student Number: 25/U/BIO/030/GV */

#include <stdio.h>
int main(){
    float amount, transaction_fee,Transaction_Fee,Total_Deducted;
    
    printf("Enter Amount To Send:");
    scanf("%f", &amount);

    printf("Enter Transaction Fee(%):");
    scanf("%f",&transaction_fee);

    Transaction_Fee = (amount*transaction_fee)/100;
    Total_Deducted = (amount+Transaction_Fee);
    
    printf("Transaction Fee: %.2f UGX\n", Transaction_Fee);
    printf("Total Deducted: %.2f UGX\n", Total_Deducted);

    printf("------TRANSACTION SUMMARY----------\n");
    printf("Amount Sent: %.2f UGX\n", amount);
    printf("Fee: %.2f UGX\n", Transaction_Fee);
    printf("Total Deducted: %.2f UGX\n", Total_Deducted);
    printf("-------------------------------------\n");

    return 0;



}