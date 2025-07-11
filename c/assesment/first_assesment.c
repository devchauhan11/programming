#include <stdio.h>
int main()
{
   int food_id, amount,total_amount=0, final_bill;
   int vadapav_qty=0,sandwich_qty=0,maggi_qty=0,dabeli_qty=0;
   char choice;
   while (1)
   {

      printf("-------food-menu-----\n");
      printf("1.vadapav price=40\n");
      printf("2.sandwich price=35\n");
      printf("3.maggi price=80\n");
      printf("4.dabeli price=35\n");
      printf("Enter your choice :");
      scanf("%d", &food_id);
      if (food_id == 1)
      {
         printf("your choose Vadapav\n");
         printf("Enter qty of vadapav:");
         scanf("%d", &vadapav_qty);
         amount = 40 * vadapav_qty;
         total_amount += amount;
         
         printf("Amount :%d\n", amount);
         
         
         

      }

      else if(food_id == 2)
      {
         printf("your choose sandwich\n");
         printf("Enter qty of sandwich:");
         scanf("%d", &sandwich_qty);
         amount = 35 * sandwich_qty;
         total_amount+=amount;     //calculate total amount of food 
         printf("Amount :%d\n", amount);
         
      }

      else if (food_id == 3)
      {
         printf("your choose maggi\n");
         printf("Enter qty of maggi:");
         scanf("%d", &maggi_qty);
         amount = 40 * maggi_qty;
         total_amount+=amount;        //calculate total amount of food 

         printf("Amount :%d\n", amount);
         
      }
      if (food_id == 4)
      {
         printf("your choose dabeli\n");
         printf("Enter qty of dabeli:");
         scanf("%d", &dabeli_qty);
         amount = 35 * dabeli_qty;
         total_amount+=amount;       //calculate total amount of food 
         printf("Amount :%d\n", amount);
         
      }
      printf("you want to add more item ?y or n :");
      scanf(" %c", &choice);
      
      if(choice=='n')
      {
         printf("\n-------- FINAL BILL --------\n");
         if (vadapav_qty > 0)
             printf("Vadapav   x %d = Rs. %d\n", vadapav_qty, vadapav_qty * 40);
         if (sandwich_qty > 0)
             printf("Sandwich  x %d = Rs. %d\n", sandwich_qty, sandwich_qty * 35);
         if (maggi_qty > 0)
             printf("Maggi     x %d = Rs. %d\n", maggi_qty, maggi_qty * 80);
         if (dabeli_qty > 0)
             printf("Dabeli    x %d = Rs. %d\n", dabeli_qty, dabeli_qty * 35);
     
         printf("----------------------------\n");
         printf("Total Amount: Rs. %d\n", total_amount);
         printf("----------------------------\n");
          break;

      }


         



   }
}


