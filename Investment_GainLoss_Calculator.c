
#include <stdio.h>
int main() {
    int last_month_investment;
    int money;
    int difference;
    
    printf("Enter your last month investment: ");
    scanf("%d", &last_month_investment);

    printf("Enter this month's income: ");
    scanf("%d", &money);
    
    if (money > last_month_investment) {
        difference = money - last_month_investment;
        printf("You have gained %d this month.\n", difference);
    } else {
        difference = last_month_investment - money;
        printf("You have lost %d this month.\n", difference);
    }
    
    return 0;
}
 