#include<stdio.h>
#include<stdlib.h>
int strct();
void begin();
void entry();
void user();
void roomavl();
void roomser();
int restaurant();
void update();
void book();
void cancel();
void feedback();
void fooddel();
struct entry1
{
    char name[20];
    double contactno;
    char email[50];
    char address[100];
    float totalAmount;
}e;
int main()
{
   printf("\n                       ::::::::::::::::::::::::::::::::::::::");
   printf("\n                       ||                                  ||");
   printf("\n                       ||     |||||||||||||||||||||||||    ||");
   printf("\n                       ||     ||                     ||    ||");
   printf("\n                       ||     ||       HOTEL         ||    ||");
   printf("\n                       ||     ||     SKY BLUE        ||    ||");
   printf("\n                       ||     ||                     ||    ||");
   printf("\n                       ||     ||                     ||    ||");
   printf("\n                       ||     |||||||||||||||||||||||||    ||");
   printf("\n                       ||                                  ||");
   printf("\n                       ::::::::::::::::::::::::::::::::::::::\n\n");                
                                     
   printf("\n\t          Hanging bridge,S.no-1/8,Aundh-Ravet, BRTS Rd\n\t\t\t\t    Pune 411033, INDIA");
   printf("\n\n                              Ph. No.:9023456787");
   printf("\n\n\n                         HOTEL SKY BLUE WELCOMES YOU !!");
   printf("\n\n\n\tHotel SKY BLUE is one of the newest Hotel in PUNE. The Hotel is equipped with with all the general amenities and facilities that go along with a memorable stay.Set amidst beautifully landscaped gardens, it proves to be an ideal dream destination for perceptive traveller.");
   printf("\n\n\tThe Hotel have well furnished rooms along with rooms providing pleasent views of the city. The hotel satisfies the needs of business as well as the leisure traveller. All the rooms at the hotel are furnished beautifully. All the rooms are fitted with amenities.");
   printf("\n\n                             AMENITIES .......\n");
   printf("\t\t\t1. 100 percent Power backup.\n");
   printf("\t\t\t2. Automatic lift.\n");
   printf("\t\t\t3. Ample parking space.\n");
   printf("\t\t\t4. Round the clock security.\n");
   printf("\t\t\t5. Running hot and cold water.\n");
   printf("\t\t\t6. Free internet service.\n");
   printf("\t\t\t7. 24 hours room service.\n");
   printf("\t\t\t8. Laundary service.\n");
   printf("\t\t\t9.Resturant & Dine-in room");
   begin();
   return 0;
}
void begin()
{
    entry();
    strct();
    user();
}
void entry()
{
    int ch;
    printf("\n\n\t\t==============WELCOME!!!!!!!!!=============");
    printf("\n\n\t\t1. ADMIN");
    printf("\n\n\t\t2. CUSTOMER");
    printf("\n\n\t\tEnter your choice : ");
    scanf("%d",&ch);
    if(ch==1)
    {
        char a[]="abc@123";
        char x[10];
        int pin=1234,password;
        printf("\n\n\t\tEnter Your Username : ");
        scanf("%s",x);
        printf("\n\n\t\tEnter Your Password : ");
        scanf("%d",&password);
        if(a==x || pin==password)
        {
           strct();
        }
        else
        {
            printf("\n\n\t\tINCORRECT USERNAME/PASSWORD ENTERED");
            exit(0);
        }
    }
}
int strct()
{
  int c;
    printf("\n\n");
    printf("\t\tWELCOME TO STAY INN\t\t");
    printf("\n\t------Select One Of The Choices------\n");
    printf("1.\tRoom Avialability\n");
    printf("2.\tRoom Services\n");
    printf("3.\tResturant\n");
    printf("4.\tBooking\n");
    printf("5.\tUpdate\n");
    printf("6.\tCancellation\n");
    printf("7.\tFood Cancellation\n");
    printf("8.\tFeedback\n");
    printf("9.\tExit");
    printf("\n\n\t\t");
    printf("\t\tEnter Your Choice : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        roomavl();
        break; 
        case 2:
        roomser();
        break;
        case 3:
        restaurant();
        break;
        case 4:
        book();
        break;
        case 5:
        cancel();
        break;
        case 6:
        update();
        break;
        case 7:
        fooddel();
        break;
        case 8:
        feedback();
        break; 
        case 9:
        printf("\n\t\t\t\t\tTHANKS!!!!!!!!!!!!!");
        exit(0);
        break;
        default:
        printf("\n\t\t\t\t\t\tInvalid option selected.......... ");
    }
    return 0;
}
void roomavl()
{
    int x;
    printf("\n\n\t\t1. Suite");
    printf("\n\n\t\t2. Delux");
    printf("\n\n\t\t3. Basic");
    printf("\n\n\t\t4. Exit");
    printf("\n\n\t\tSelect Type Of Room You Want : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("\n\n\t\tPrice per night : 6000");
        printf("\n\n\t\tNumber of room available : 10");
        break;
        case 2:
        printf("\n\n\t\tPrice per night : 4500");
        printf("\n\n\t\tNumber of room available : 20");
        break;
        case 3:
        printf("\n\n\t\tPrice per night : 3500");
        printf("\n\n\t\tNumber of room available : 15");
        break;
        case 4:
        printf("\n\n\t\tTHANK YOU!!!!!!!!!!");
        break;
        default:
        printf("\n\n\t\tSelect Valid Option..........");
        break;
    }
}
void roomser()
{
    int x;
    printf("\n\n\t\tPls give the review if the service is completed : ");
    printf("\n\n\t\t1. YES");
    printf("\n\n\t\t2. NO");
    printf("\n\n\t\tPlease Give review : ");
    scanf("%d",&x);
    printf("\n\n\t\t\tThank's for review");
    switch(x)
    {
        case 1:
        printf("Tell us again If You need service!!!!!");
        break;
        case 2:
        printf("Sorry for the inconvenience!!!!!!");
        break;
        default:
        exit(0);
        break;
    }
}

int restaurant()
{
    int a;
    int b;
    printf("\n\n\t\t1.Butter Chicken");
    printf("\n\n\t\t2. Butter Paneer");
    printf("\n\n\t\t3. Butter naan");
    printf("\n\n\t\t4. Tandoori Roti");
    printf("\n\n\t\t5. Chicken Biryani");
    printf("\n\n\t\t6. Veg Pulao");
    printf("\n\n\t\t7. Jeera Rice");
    printf("\n\n\t\t8. Gulab Jamun");
    printf("\n\n\t\t9. Ice cream");
    printf("\n\n\t\t10. Hakkah Noodles");
    printf("\n\n\t\t11. Paneer chilli");
    printf("\n\n\t\tEnter the dish number you want!! : ");
    scanf("%d",&a);
    
    printf("\n\nEnter 1 to confirm order?");
    scanf("%d",&b);
    if (b==1){
    	printf("Order sucessful. You will have %d order.",&a);
	}else{
		printf("Thank you for using services.");
	}
	return 0;
}

void book()
{
    FILE* fp;
    fp = fopen("Register.txt", "a"); 
    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        return;
    }
    printf("\n\n\t\tName: ");
    scanf("%s", e.name);
    printf("\n\n\t\tContact Number: ");
    scanf("%d", &e.contactno);
    printf("\n\n\t\tEmail: ");
    scanf("%s", e.email);
    printf("\n\n\t\tEnter Address: ");
    scanf("%s", e.address);
    fprintf(fp, "Name: %s\nContact Number: %lf\nEmail: %s\nAddress: %s\n\n",
            e.name, e.contactno, e.email, e.address);
    fclose(fp);
    strct();
}

void cancel()
{
	FILE* fp;
    fp = fopen("Deleted.txt", "a+"); 
    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        return;
    }
    printf("\n\n\t\tName: ");
    scanf("%s", e.name);
    printf("\n\n\t\tContact Number: ");
    scanf("%d", &e.contactno);
    fprintf(fp, "Name: %s\nContact Number: %d\n\n",
            e.name, e.contactno);
    fclose(fp);
    strct();
}
void feedback()
{
    int ch;
    printf("\n\n\t\tPlease give the feedback of stay:");
    scanf("%d",&ch);
    printf("\n\n\t\t Thank's for feedback");
}
void update()
{
    int ch;
    printf("\n\n\t\tYour booking is cancelled");
}
void fooddel()
{
    int ch;
    printf("Do you want to delete this order? Press 1: ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("Order is cancelled.\n");
    }
    else
    {
        printf("Mission Aborted.\n");
    }
}
void user()
{
    int ch;
    printf("\n\n\t\tWELCOME!!!!!!!!!!!!");
    printf("\n\n\t\t1. Room Available");
    printf("\n\n\t\t2. Room Service");
    printf("\n\n\t\t3. Restaurant");
    printf("\n\n\t\t4. Feedback");
    printf("\n\n\t\t5.Exit");
    printf("\n\n\t\tEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        roomavl();
        break;
        case 2:
        roomser();
        break;
        case 3:
        restaurant();
        break;
        case 4:
        feedback();
        break;
        default:
        printf("\n\n\t\tPlease enter Valid Option............");
        break;
    }
}