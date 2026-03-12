#include<stdio.h>
#include<string.h>
struct Passenger{
	int passenger_id;
	char firstname[50];
	char lastname[50];
	int age;
	char gender[50];
	char seatno[15];
	int busid;
};
struct Bus{
	int bus_id;
	char bus_name[50];
	char source[50];
	char destination[50];
	int total_seats;
	int available_seats;
};
struct Ticket{
	int ticket_id;
	int passenger_id;
	int bus_id;
	char seatno[50];
	char travel_date[15];
};
struct Passenger passenger[100];
struct Bus bus[50];
struct Ticket ticket[500];
int total_passengers=0;
int total_bus=0;
int total_tickets=0;

void addbus()
	{

			if(total_bus >= 50)
			{
   				 printf("Bus database full\n");
   				 return;
			}
		printf("----------------Enter bus details--------------------\n");
		printf("Enter the Bus ID :\n");
		scanf("%d",&bus[total_bus].bus_id);
		printf("Enter the name of the bus:\n");
		scanf("%s",bus[total_bus].bus_name);
		printf("Enter the source of bus:\n");
		scanf("%s",bus[total_bus].source);
		printf("Enter the destination of bus:\n");
		scanf("%s",bus[total_bus].destination);
		printf("Enter the total no. of seats:\n");
		scanf("%d",&bus[total_bus].total_seats);
		printf("Enter the available seats in bus:\n");
		scanf("%d",&bus[total_bus].available_seats);
		total_bus++;
		printf("Record added successfully\n");
	}
void displaybus()
	{
	 	for(int i=0;i<total_bus;i++)
		{
			printf("-----------Bus details-----------\n");
			printf("Bus ID :%d\n",bus[i].bus_id);
			printf("Bus Name:%s\n",bus[i].bus_name);
			printf("Source :%s\n",bus[i].source);		
			printf("Destination:%s\n",bus[i].destination);
			printf("Total Seats: %d\n",bus[i].total_seats);
			printf("Available seats: %d\n",bus[i].available_seats);
			printf("----------------------------------\n");
		}
	}
void searchbusbydestiandsource()
	{
		char desti[50],sours[50];
		int found=0;
		printf("Enter the destination of bus which you want to find :");
		scanf("%s",desti);
		printf("Enter the source of bus which you want to find:\n");
		scanf("%s",sours);
		for(int j=0;j<total_bus;j++)
		{
			if(strcmp(bus[j].destination,desti)==0)
			{
					if(strcmp(bus[j].source,sours)==0)
					{
						printf("-----------Bus details-----------\n");
						printf("Bus ID :%d\n",bus[j].bus_id);
						printf("Bus Name:%s\n",bus[j].bus_name);
						printf("Source :%s\n",bus[j].source);		
						printf("Destination:%s\n",bus[j].destination);
						printf("Total Seats: %d\n",bus[j].total_seats);
						printf("Available seats: %d\n",bus[j].available_seats);
						printf("----------------------------------\n");

					found=1;
					break;
			}
					
	}
}
if(found==0)
{
		printf("Record not found\n");
}
}

void checkseatavailability()
{
		char seat[15];int found =0;
		printf("Enter seat no.\n");
		scanf("%s",seat);
		for(int d=0;d<total_passengers;d++)
		{
			if(strcmp(seat,passenger[d].seatno)==0)
			{
					found=1;
					break;

			}
}
			if(found)
				printf("Seat already booked\n");
			else
			{
				printf("Seat is available\n");
			}
		
	
	}
void busmanagement()
{
		int y;
		do{
		printf("\n========== BUS MANAGEMENT ==========\n");
		printf("1.Add Bus \n2.Display Bus \n3.Search Bus by destination\n4.Check Seat availability\n5.Return to main menu\n");
		printf("Enter your choice:\n");
		scanf("%d",&y);
		if(y==1)
		{
			addbus();
		}
		else if(y==2)
		{
			displaybus();
		}
		else if(y==3)
		{
			searchbusbydestiandsource
();
		}
		else if(y==4)
		{
			checkseatavailability();
		}
		else if(y==5)
		{
				printf("Returning to main menu.....\n");
				break;
		
		}
		else 
			printf("Invalid input\n");
		}while(y!=5);
}
void addpassenger()
{

		if(total_passengers >= 100)
			{
   				 printf("Passengers database full\n");
   				 return;
			}

		printf("-------------Enter passenger details----------------\n");
		printf("Enter the passanger ID:\n");
		scanf("%d",&passenger[total_passengers].passenger_id);
		for(int i=0;i<total_passengers;i++)
		{
  		  if(passenger[i].passenger_id ==passenger[total_passengers].passenger_id) 
    		  {
       			 printf("Passenger already exists\n");
       			 return;
   		  }
		}
		printf("Enter the first name of passenger:\n");
		scanf("%s",passenger[total_passengers].firstname);
		printf("Enter the last name of passenger:\n");
		scanf("%s",passenger[total_passengers].lastname);
		printf("Enter the age of the passenger:\n");
		scanf("%d",&passenger[total_passengers].age);
		printf("Enter the geneder of the passenger:");
		scanf("%s",passenger[total_passengers].gender);
		printf("Enter the seat no. of passenger:\n");
		scanf("%s",passenger[total_passengers].seatno);
		printf("Enter the bus id in which passenger is there:");
		scanf("%d",&passenger[total_passengers].busid);
		total_passengers++;
		printf("Record added successfully\n");
}
void displaypassenger()
{
	for(int c=0;c<total_passengers;c++)
	{	
			printf("-----------Passenger Details-----------\n");
			printf("Passenger ID:%d\n",passenger[c].passenger_id);
			printf("First name :%s\n",passenger[c].firstname);
			printf("Last name:%s\n",passenger[c].lastname);
			printf("Age :%d\n",passenger[c].age);
			printf("Gender:%s\n",passenger[c].gender);
			printf("Seat number:%s\n",passenger[c].seatno);
			printf("Bus ID:%d\n",passenger[c].busid);
			printf("---------------------------------------\n");
	}
}

void searchpassengers()
{
		int id,found=0;
		printf("Enter the passenger Id:\n");
		scanf("%d",&id);
		for(int o=0;o<total_passengers;o++)
		{
			if(passenger[o].passenger_id==id)
			{	
				printf("-----------Passenger Details-----------\n");
				printf("Passenger ID:%d\n",passenger[o].passenger_id);
				printf("First name :%s\n",passenger[o].firstname);
				printf("Last name:%s\n",passenger[o].lastname);
				printf("Age :%d\n",passenger[o].age);
				printf("Gender:%s\n",passenger[o].gender);
				printf("Seat number:%s\n",passenger[o].seatno);
				printf("Bus ID:%d\n",passenger[o].busid);
				printf("---------------------------------------\n");
				found=1;
				break;
			}
		}
	if(found==0)
	{
			printf("Record not found\n");
	}
}
void passangermanagement()
	{
		int q;
		do{
		printf("\n==========PASSENGER MANAGEMENT ==========\n");
		printf("1.Add passenger\n2.Display passenger\n3.Search Passenger\n4.Returning to main menu\n");
		printf("Enter your choice:\n");
		scanf("%d",&q);
		if(q==1)
		{
			addpassenger();
		}
		else if(q==2)
		{
			displaypassenger(); 
		}
		else if(q==3)
		{
			searchpassengers();
		}
		else if(q==4)
		{
			printf("Returning to main menu......\n");
			break;
		}
		else
			printf("Invalid input\n");
		}while(q!=4);
}


void bookticket()
	{
		printf("----------Enter ticket details---------\n");
		if(total_tickets >= 50)
		{
    			printf("Ticket database full\n");
    		return;
		}
		printf("Enter the ticket_id:\n");
		scanf("%d",&ticket[total_tickets].ticket_id);

		printf("Enter the passenger_id:\n");
		scanf("%d",&ticket[total_tickets].passenger_id);

		printf("Enter the bus id:\n");
		scanf("%d",&ticket[total_tickets].bus_id);

		printf("Enter the travel date :\n");
		scanf("%s",ticket[total_tickets].travel_date);

		printf("Record added successfully\n");
		total_tickets++;
	}

void displayticket()
{
	for(int x=0;x<total_tickets;x++)
	{
			printf("==============================================\n");
			printf("                BUS TICKET                     \n");
			printf("==============================================\n");
			printf("Ticket ID:%d\n",ticket[x].ticket_id);
			printf("Passenger ID:%d\n",ticket[x].passenger_id);
			printf("Bus ID:%d\n",ticket[x].bus_id);
			for(int b=0;b<total_bus;b++)
            {
    			if(bus[b].bus_id == ticket[x].bus_id)
   			 {
        			printf("Bus Name: %s\n",bus[b].bus_name);
    			 }
	    }
			printf("Travel ID:%s\n",ticket[x].travel_date);
			for(int p=0;p<total_passengers;p++)
			{
				if(passenger[p].passenger_id==ticket[x].passenger_id)
				{
					printf("Passenger Name: %s %s\n",passenger[p].firstname,passenger[p].lastname);
				}
			}
			printf("==============================================\n");
	}
}

void cancelticket()
	{
		int id,found=0;
		printf("Enter the ticket id number of the ticket:\n");
		scanf("%d",&id);
		for(int e=0;e<total_tickets;e++)
		{
			if(id==ticket[e].ticket_id)
		{	
			// Shift remaining records left to delete student
			for(int i=e;i<total_tickets-1;i++)
			{
    				ticket[i]=ticket[i+1];
			}
			total_tickets=total_tickets-1;
			printf("Ticket cancelled successfully\n");
			found=1;
			break;
		}
		}
		if(found==0)
		{
			printf("Record not found\n");
		}
}

	
void reservationmanagement()
{
		printf("Total buses:%d\n",total_bus);
		printf("Total passengers:%d\n",total_passengers);
		printf("Total tickets :%d\n",total_tickets);
		
}

void ticketmanagement()
	{
		int g;
	do{
		printf("\n========== TICKET MANAGEMENT ==========\n");
		printf("1.Book Tickets\n2.Display tickets\n3.Cancel tickets\n4.Return to main menu\n");
		printf("Enter your choice:\n");
		scanf("%d",&g);
		if(g==1)
		{	
			bookticket();
		}
		else if(g==2)
		{
			displayticket();
		}
		else if(g==3)
		{
			cancelticket();
		}
		else if(g==4)
		{
			printf("Returning to main menu.........\n");
			break;
		}
		else
			printf("Invalid input\n");
		}while(g!=4);
}
		
			
int main(){
		int choice;
		printf("==================================================================\n");
		printf("                       BUS RESERVATION SYSTEM                         \n");
		printf("==================================================================\n");
		printf("             	       Developed in C language                        \n");
		printf("               Modules: Passengers|  Bus  | Tickets                   \n");
		printf("==================================================================\n");
		do{
			printf("1.Bus Management\n2.Passenger Management\n3.Ticket Management\n4.Reservation Statistics\n5.Exit\n");
			printf("Enter your choice\n");
			scanf("%d",&choice);
			if(choice==1)
			{
				busmanagement();
			}
			else if(choice==2)
			{
				passangermanagement();
			}
			else if(choice==3)
			{
				ticketmanagement();
			}
			else if(choice==4)
			{
				reservationmanagement();
			}
			else if(choice==5)
			{
				printf("Returning to console......\n");
				break;
			}
			else
			{
				printf("Invalid input\n");
			}
			}while(choice!=5);
return 0;
}