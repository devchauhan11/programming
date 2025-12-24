#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

class Event{
   public:
      string EventName, CustomerName;
      double NumberOfGuests, NumberOfMinutes, NumberOfServers;
      const double CostPerHour = 18.50, CostPerMinute = 0.40, CostOfDinner = 20.70;
      double Cost1, Cost2, CostForOneServer, TotalFoodCost, AverageCost, TotalCost, DepositAmount;

      void UserInput(){ //funciton to take data from user
         cout<<"**************Event Management System***************"<<endl<<endl;

         cout<<"Enter the name of the event"<<endl;
         cin>>EventName;

         cout<<"Enter the customer's first and last name"<<endl;
         cin.ignore();
         getline(cin, CustomerName);

         while(1){
            cout<<"Enter the number of guests"<<endl;
            cin>>NumberOfGuests;
            //check if number of guests is a valid number
            if(NumberOfGuests>0 && (NumberOfGuests-(int)NumberOfGuests)==0){
               break;
            }
            else{
               cout<<"Enter valid number of guests"<<endl;
            }
         }

         cout<<endl<<endl<<endl;
         while(1){
            cout<<"Enter the number of minutes in the event"<<endl;
            cin>>NumberOfMinutes;
            //check if number of minutes is a valid number
            if(NumberOfMinutes>0 && (NumberOfMinutes-(int)NumberOfMinutes)==0){
               break;
            }
            else{
               cout<<"Enter valid event duration"<<endl;
            }
         }

         cout<<"====================Event estimate for: "<<EventName<<"===================="<<endl;
      }

      void Calculations(){ //funciton for calculation
         NumberOfServers = ceil((double)NumberOfGuests/20); //calcualte number of servers

         Cost1 = (NumberOfMinutes / 60) * CostPerHour;
         Cost2 = ((int)NumberOfMinutes % 60) * CostPerMinute;
         CostForOneServer = floor(Cost1 + Cost2);  //cost for one server

         TotalFoodCost = NumberOfGuests * CostOfDinner;  //total cost of food

         AverageCost = TotalFoodCost / NumberOfGuests;   //cost per guest

         TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers); //net cost for the event

         DepositAmount = TotalCost * .25; //25% deposit to be paid at the time of booking
      }

      void Output(){ //funciton to display all the information
         cout<<"Number of Server: "<<NumberOfServers<<endl;

         cout<<fixed<<setprecision(2);

         cout<<"The Cost for Servers: "<<CostForOneServer<<endl;

         cout<<"The Cost for Food is: "<<TotalFoodCost<<endl;

         cout<<"Average Cost Per Person: "<<AverageCost<<endl<<endl;

         cout<<"Total cost is: "<<TotalCost<<endl;

         cout<<"Please deposit a 25% deposit to reserve the event"<<endl;

         cout<<"The deposit needed is: "<<floor(DepositAmount)<<endl;
      }
};

int main() {
   Event e; //defining object for the event class
   e.UserInput(); //calling input funciton
   e.Calculations(); //calling calculation fucntion
   e.Output(); //calling fucniton to display information
   return 0;
}
