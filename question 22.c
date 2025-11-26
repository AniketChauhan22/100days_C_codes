Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitLossAmount;
    float percentage;

    // Get input for cost price
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    // Get input for selling price
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        profitLossAmount = sellingPrice - costPrice;
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Profit: %.2f\n", profitLossAmount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        profitLossAmount = costPrice - sellingPrice;
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Loss: %.2f\n", profitLossAmount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}