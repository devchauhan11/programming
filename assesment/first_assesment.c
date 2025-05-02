
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10
                    
// Structure to represent a menu item
struct MenuItem {
    int code;
    char name[20];
    float price;
};

// Structure to represent an order
struct Order {
    struct MenuItem item;
    int quantity;
};

int main() {
    struct MenuItem menu[] = {
        {1, "Burger", 50.0},
        {2, "Pizza", 120.0},
        {3, "Sandwich", 40.0},
        {4, "Fries", 30.0},
        {5, "Coke", 20.0}
    };
    int menuSize = sizeof(menu) / sizeof(menu[0]);
    struct Order orders[MAX_ITEMS];
    int orderCount = 0;

    int code, quantity;

    printf("====== MENU ======\n");
    for (int i = 0; i < menuSize; i++) {
        printf("%d. %s - ₹%.2f\n", menu[i].code, menu[i].name, menu[i].price);
    }
    printf("==================\n");

    while (1) {
        printf("Enter item code (0 to finish): ");
        scanf("%d", &code);
        if (code == 0)
            break;

        int found = 0;
        for (int i = 0; i < menuSize; i++) {
            if (menu[i].code == code) {
                found = 1;
                printf("Enter quantity for %s: ", menu[i].name);
                scanf("%d", &quantity);
                orders[orderCount].item = menu[i];
                orders[orderCount].quantity = quantity;
                orderCount++;
                break;
            }
        }
        if (!found) {
            printf("Invalid code. Try again.\n");
        }
    }

    // Print bill
    float total = 0;
    printf("\n====== BILL ======\n");
    for (int i = 0; i < orderCount; i++) {
        float amount = orders[i].item.price * orders[i].quantity;
        total += amount;
        printf("%s x %d = ₹%.2f\n", orders[i].item.name, orders[i].quantity, amount);
    }
    printf("------------------\n");
    printf("Total: ₹%.2f\n", total);
    printf("==================\n");

    return 0;
}

