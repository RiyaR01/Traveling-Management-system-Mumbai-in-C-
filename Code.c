#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
void tourist_spots(int );int stay(int);int travel(int);void total(int,int,int);void bill(int,int,int,int);void foodguide();
void display();
void displaybill();
void gotoxy (short int col,short int row);
int main()
{   display();
   gotoxy(31,9);
    printf("!!WELCOME TO WEEKEND GETAWAYS!!\n");
    gotoxy(1,15);
    printf("\t\t\t      MUMBAI: A CITY THAT NEVER SLEEPS!!\n");
    printf("\t\t\t     ************************************\n");
    printf("Let's get started:\n \n\n");int n;
    printf("Please select the serial number that describes your nationality \n");
    printf("1.Indian \n");
    printf("2.Other \n");
    scanf("%d",&n);
    system("cls");
    if(n==1)
    tourist_spots(1);
    else
        tourist_spots(2);
    return 0;
}
void tourist_spots(n)
{
    int days,j,flag=1,film,film1,per,pack,pack1,cost1,cost2,cost3;int c;
     char ch[20][100]={"Gate way of India","Jahangir Art Gallery","Prince of Wales Museum","Rajabai Tower","Mantralay","Assembly Hall","Marine Drive","Hotel Oberoi","Wankhade Stadium","Nariman Point","Taraporewala Aquarium","Girgaon Chowpatti","Haji Ali Dargah","Film city","Nehru Center","Bandstand","Juhu beach","Sanjay Gandhi National Park","Siddhivinayak Temple","Shri Mahalaxmi Temple"};
     char ti[20][100]={"24*7,Everyday","9:00 a.m to 5:30 p.m,Everyday","9:30 a.m. to 5:30 p.m ,Everyday","05:30 am to 10:00 pm; every day","10:00 a.m. to 5:00 p.m., everyday","11:00 am to 05:00 pm; closed on Mondays","24*7,Everyday","24*7,Everyday","07:30 am to 06:30 pm; closed on Mondays","24*7,Everyday","05:30 am to 10:00 pm; every day","24*7,Everyday","9:00 a.m to 9:00 p.m,Everyday","10:00 a.m to 5:00 p.m,Eveyday","9:00 a.m to 4:00 p.m,closed on mondays","24*7,Everyday","24*7,Everyday","10:00 a.m to 5:00 p.m,Everyday","10:00 a.m to 5:00 p.m,Everyday","10:00 a.m to 5:00 p.m,Everyday"};
     char p[20][100]={"no entry fee","Rs. 200 per person","Rs. 500 per person","Rs. 50 per person","Rs. 10 per person","Rs. 10 per person","no entry fee","no entry fee","Depends upon package selected","no entry fee","Rs. 100 per person","no entry fee","no entry fee","Depends upon package selected","Rs. 400 per person","no entry fee","no entry fee","Rs. 100 per person","no entry fee","no entry fee"};
     int i=0,k=0,nat;
     char p1[20][100]={"no entry fee","Rs. 400 per person","Rs. 1000 per person","Rs. 100 per person","Rs. 20 per person","Rs. 20 per person","no entry fee","no entry fee","Depends upon package selected","no entry fee","Rs. 100 per person","no entry fee","no entry fee","Depends upon package selected","Rs. 400 per person","no entry fee","no entry fee","Rs. 100 per person","no entry fee","no entry fee"};
            if(n==1)
            {
                for(i=0;i<20;i++)
            {
                printf("%d.",(i+1));printf(ch[i]);printf(":\n");
                printf("Timings: ");printf(ti[i]);
                printf("\n");printf("Entry fees: ");
                printf(p[i]);printf("\n");printf("\n");printf("\n");
            }
            }
            else
            {
               for(i=0;i<20;i++)
            {
                printf("%d.",(i+1));printf(ch[i]);printf(":\n");
                printf("Timings: ");printf(ti[i]);
                printf("\n");printf("Entry fees: ");
                printf(p1[i]);
                printf("\n");printf("\n");printf("\n");
            }
            }
            printf("Have a good look and then press 2 to go the next page\n");
            scanf("%d",&c);
            system("cls");
            printf("Enter the number of days you plan to stay :\n");
            scanf("%d",&days);
            j=ceil(20.0/days);
            for(i=0;i<20;i=i+j)
             {
                 printf("DAY %d : \n",flag);
                 for(k=i;k<i+j;k++)
                 {
                     printf(ch[k]);
                     printf("\n\n");
                 }
                 flag++;
             }
             /*if(days%2!=0&&days>1)
             {
               printf("Day %d:\n",days);
               printf("Rest and local shopping. \n");
             }*/
             printf("Have a good look and then press 2 to go the next page\n");
             scanf("%d",&c);
             system("cls");
             printf("Enter the number of persons planning to come on the trip (for entry fee cost estimation): \n");
             scanf("%d",&per);
             printf("Mumbai Film city offers 3 packages: \n");
             printf("1.Gold:Rs.1000 per person \n");
             printf("2.Silver:Rs.700 per person \n");
             printf("3.Normal:Rs.500 per person \n");
             printf("Which package do you choose- 1/2/3? \n");
            scanf("%d",&film);
            if(film==1)
                pack=1000;
            else if(film==2)
                pack=700;
            else
                pack=500;
             printf("Wankhade Stadium offers 3 packages: \n");
             printf("1.Gold(allows you to watch a normal practice match )(3 months prior booking required ):Rs.2500 per person \n");
             printf("2.Silver(allows you to spectate Wankhade stadium from inside on a non-match day ):Rs.1000 per person \n");
             printf("3.Normal(allows entry to the wankhade park ):Rs.10 per person \n");
             printf("Which package do you choose- 1/2/3? \n");
             scanf("%d",&film1);

             if(film1==1)
                pack1=2500;
            else if(film1==2)
                pack1=1000;
            else
                pack1=10;
            if(n==1)
                cost1=(200*per)+(500*per)+(50*per)+(10*per)+(10*per)+(100*per)+(400*per)+(100*per)+pack+pack1;
            else
                cost1=(400*per)+(1000*per)+(100*per)+(20*per)+(20*per)+(100*per)+(400*per)+(100*per)+pack+pack1;
             printf("\n \n \n");
             cost2=stay(days);
             cost3=travel(days);
             total(cost1,cost2,cost3);
}
            int stay(days)
             {
             int star,room,cost2,rp,rt,rt1,rt2,nr;
             printf("LET US FIND THE BEST HOTEL FOR YOU !\n");
             printf("Which kind of hotel would you pick?-5 star/4 star/3 star/self accomodation \n");
             printf("Kindly enter 0 for self accomodation and the respective number for other starred hotels. \n");
             scanf("%d",&star);
            if(star!=0)
             {
             printf("Enter number of rooms you would wish to book.\n");
             scanf("%d",&nr);
             }
             if(star==5)
             {
                 printf("Best 5 star hotels in mumbai: \n");
                 printf("1.Taj Hotel \n");
                 printf("2.The Oberoi Mumbai: \n");
                 printf("3.JW Marriott Mumbai Sahar Airport \n");
                 printf("4.Trident bandra kurla \n");
                 printf("Enter your choice: \n");
                 scanf("%d",&room);
                 room=1;

             }
             else if (star==4)
             {
                 printf("Best 4 star hotels in mumbai: \n");
                 printf("1.Hyatt Regency Mumbai International Airport \n");
                 printf("2.Radisson Mumbai Andheri MIDC \n");
                 printf("3.The Fern Residency \n");
                 printf("4.Le Sutra Hotel\n");
                 printf("Enter your choice: \n");
                 scanf("%d",&room);
                 room=2;
             }
             else if (star==3)
             {
                 printf("Best 3 star hotels in mumbai: \n");
                 printf("1.Treebo Trip Nest Inn \n");
                 printf("2.Treebo Trend Cruz Royal: MIDC \n");
                 printf("3.Urbanpod hotel \n");
                 printf("4.Hotel Kohinoor Elite near BKC:\n");
                 printf("Enter your choice: \n");
                 scanf("%d",&room);
                 room=3;
             }
             else
             {
                 room=0;
             }
             switch (room)
             {
             case 0:
                cost2=0;
                break;
             case 1:
                printf("Select room type:\n");
                printf("1.Luxury Grand Room: Rs. 20,000 per day \n");
                printf("2.Executive Suite: Rs. 40,000 per day \n");
                printf("3.Signature Suite: Rs. 80,000 per day \n");
                printf("Enter your choice. \n");
                scanf("%d",&rt);
                if(rt==1)
                    rp=20000*nr;
                else if(rt==2)
                    rp=40000*nr;
                else
                    rp=80000*nr;
             break;
             case 2:
                printf("Select room type:\n");
                printf("1.Luxury Grand Room: Rs. 10,000 per day \n");
                printf("2.Executive Suite: Rs. 20,000 per day \n");
                printf("3.Signature Suite: Rs. 40,000 per day \n");
                printf("Enter your choice. \n");
                scanf("%d",&rt);
                if(rt1==1)
                    rp=10000*nr;
                else if(rt1==2)
                    rp=20000*nr;
                else
                    rp=40000*nr;
                break;
                case 3:
                printf("Select room type:\n");
                printf("1.Luxury Grand Room: Rs. 5,000 per day \n");
                printf("2.Executive Suite: Rs. 10,000 per day \n");
                printf("3.Signature Suite: Rs. 20,000 per day \n");
                printf("Enter your choice. \n");
                scanf("%d",&rt2);
                if(rt2==1)
                    rp=5000*nr;
                else if(rt==2)
                    rp=10000*nr;
                else
                    rp=20000*nr;
                    break;
             default:
                printf("Wrong choice! \n");
             }
             if(room==0)
             {
                 cost2=0;
             }
             else
             {
                 cost2=days*rp;
             }
             return (cost2);
             }
                 void total(cost1,cost2,cost3)
                 {
                     int  c;
                     printf("Have a good look and then press 2 to go the next page\n");
                     scanf("%d",&c);
                     system("cls");
                     int total;
                      if(cost2==0&&cost3!=0)
                       {
                         total=cost1+cost3;
                         printf("Total price of your trip:%d (exclusive of stay)\n",total);
                         }
              else if(cost3==0&&cost2!=0)
              {
                  total=cost1+cost2;
                  printf("Total price of your trip:%d (exclusive of travel)\n",total);
              }
              else if(cost2==0&&cost3==0)
              {
                  total=cost1;
                  printf("Total price of your trip:%d (exclusive of travel and stay)\n",total);
              }
              else
                {
                  total=cost1+cost2+cost3;
                  printf("Total price of your trip:%d \n",total);
                }
                bill(cost1,cost2,cost3,total);
                 }
                 void bill(cost1,cost2,cost3,total)
                 {
                     int c,ch,ch1;float gt;int c1;
                     printf("Have a good look and then press 2 to go the next page\n");
                     scanf("%d",&c1);
                     system("cls");
                     printf("Wish to confirm your booking? \nplease press 0 \nif you wish to cancel press 1.\n\n");
                     scanf("%d",&c);
                     if(c==0)
                     {
                         printf("Following are the payment modes accepted:\n");
                         printf("1.Credit/Debit Card\n");
                         printf("2.Cash\n");
                         printf("3.Net Banking\n");
                         printf("4.Google Pay\n");
                         printf("5.Paytm");
                         printf("\nEnter the wished serial number: \n");
                         scanf("%d",&ch1);
                         gt=total+(0.05*total);
                         if(ch1==1||ch1==3||ch1==4||ch1==5)
                         {
                             gt=gt+50;
                             printf("Convinience Fee(Rs.50)added. \n");

                         }
                         printf("Have a look at the discounts:\n");
                         printf("1.First Booking with Weekend Getaways:'Save Rs.100 from grandtotal'\n\n");
                         printf("2.Gold Membership:'Save Rs. 200 on grandtotal'\n\n");
                         printf("3.Full Cash Payement:'Save Rs.100 on grandtotal'\n\n");
                         printf("4.None of the above\n\n");
                         printf("Please note,you can choose only one discount.\n\n");
                         printf("Enter your choice:\n");
                         scanf("%d",&ch);

                         if(ch==1)
                        {
                         gt=gt-100;
                          printf("\nHERE IS A SUMMARY OF YOUR BILL:");
                         displaybill();
                         gotoxy(2,31);
                         printf(" Total entry fee charges:       Rs. %d \n\n",cost1);
                         gotoxy(2,33);
                         printf(" Total stay charges:            Rs. %d \n\n",cost2);
                         gotoxy(2,35);
                         printf(" Total travel charges:          Rs. %d \n\n",cost3);
                         gotoxy(2,37);
                         printf(" Total:                         Rs. %d \n\n",total);
                         gotoxy(2,39);
                         printf(" Tax:                           Rs. %0.2f \n\n",(0.05*total));
                         gotoxy(2,41);
                         printf(" Discount:                      Rs %d \n\n",100);
                         gotoxy(2,43);
                         printf(" GRAND TOTAL :                  Rs. %0.2f \n\n",gt);
                        }
                        else if(ch==2)
                        {
                           gt=gt-200;
                            printf("\nHERE IS A SUMMARY OF YOUR BILL:");
                           displaybill();
                          gotoxy(2,31);
                         printf(" Total entry fee charges:       Rs. %d \n\n",cost1);
                         gotoxy(2,33);
                         printf(" Total stay charges:            Rs. %d \n\n",cost2);
                         gotoxy(2,35);
                         printf(" Total travel charges:          Rs. %d \n\n",cost3);
                         gotoxy(2,37);
                         printf(" Total:                         Rs. %d \n\n",total);
                         gotoxy(2,39);
                         printf(" Tax:                           Rs. %0.2f \n\n",(0.05*total));
                         gotoxy(2,41);
                         printf(" Discount:                      Rs %d \n\n",200);
                         gotoxy(2,43);
                         printf(" GRAND TOTAL:                   Rs. %0.2f \n\n",gt);
                        }
                        else if(ch==3)
                        {
                            gt=gt-100;
                             printf("\nHERE IS A SUMMARY OF YOUR BILL:");
                         displaybill();
                         gotoxy(2,31);
                         printf(" Total entry fee charges:       Rs. %d \n\n",cost1);
                          gotoxy(2,33);
                         printf(" Total stay charges:            Rs. %d \n\n",cost2);
                          gotoxy(2,35);
                         printf(" Total travel charges:          Rs. %d \n\n",cost3);
                          gotoxy(2,37);
                         printf(" Total:                         Rs. %d \n\n",total);
                          gotoxy(2,39);
                         printf(" Tax:                           Rs. %0.2f \n\n",(0.05*total));
                          gotoxy(2,41);
                         printf(" Discount:                      Rs. %d\n\n",100);
                          gotoxy(2,43);
                         printf(" GRAND TOTAL :                  Rs. %0.2f \n\n",gt);
                        }
                        else
                        {
                         printf("\nHERE IS A SUMMARY OF YOUR BILL:");
                         displaybill();
                         gotoxy(2,31);
                         printf(" Total entry fee charges:       Rs. %d \n\n",cost1);
                          gotoxy(2,33);
                         printf(" Total stay charges:            Rs. %d \n\n",cost2);
                          gotoxy(2,35);
                         printf(" Total travel charges:          Rs. %d \n\n",cost3);
                          gotoxy(2,37);
                         printf(" Total:                         Rs. %d \n\n",total);
                          gotoxy(2,39);
                         printf(" Tax:                           Rs. %0.2f \n\n",(0.05*total));
                          gotoxy(2,41);
                         printf(" Discount:                      Rs. %d\n\n",0);
                          gotoxy(2,43);
                         printf(" GRAND TOTAL :                  Rs. %0.2f \n\n",gt);
                        }
                      foodguide();
                        }
                         else
                         {
                             printf("We are sorry to hear this!Hope to see you soon.");
                         }
                     }
      void foodguide()
                 {
                     int c,g;
                     int i,j;char f[31][100];int d,d1,k=0;
                     printf("Have a good look and then press 2 to go the next page\n");
                     scanf("%d",&c);
                     system("cls");
                     printf("\nThere is no sincerer love than the love of (street) food!!\n\n");
                     printf("Apart from the above bill we offer a dine and disco package too.\n\n");
                     printf("Mumbai is known for its 'khau gallis' and radiant night life.\n\n");
                     printf("At Weekend Getaways,we make an exclusively customised dine and disco to do list for you.\n\n");
                     printf("And guess what this is absolutely free!\n\n");
                     printf("Enter 0 if you wish to proceed else press 1 .\n");
                     scanf("%d",&g);
                     if(g==0)
                     {
                    char dine[9][100]={"Kheema Pav at Gulshan-e-Iran, Crawford Market","White Biryani at Noor Mohmaddi, Bhendi Bazaar","Tandoori Delicacies at Jai Jawan","The Ultimate Chinese Thali at Sahibaan, Worli","Strawberry and Cream (Seasonal) at Bachelorr's, Charni Road","Ice Cream Sandwich/Biscuit at K. Rustom, Churchgate","Pav B+haji at Amar Juice Center, Vile Parle"," Frankies at Breadkraft, Lokhandwala","Anand Dosa and Vada Pav Stall near Mithibai College, Vile Parle"};
                     char disco[5][100]={"PlayBoy CLub","Club Sirkus","Matahaari","China House Lounge","One Street Over"};
                     printf("All you have to do is...press 1 for the place you want to add to your list and if you wish to skip the place press 0 \n");
                     for(i=0;i<9;i++)
                     {
                         printf(dine[i]);
                         printf("\n make a choice\n");
                         scanf("%d",&d);
                         if(d==1)
                         {
                             strcpy(f[k],dine[i]);k++;
                         }
                     }
                     system("cls");
                     for(i=0;i<5;i++)
                     {
                         printf(disco[i]);
                         printf("\n make a choice\n");
                         scanf("%d",&d1);
                         if(d1==1)
                         {
                             strcpy(f[k],disco[i]);k++;
                         }
                     }
                     system("cls");
                     printf("Your dine and disco to do list:\n");
                     for(i=0;i<k;i++)
                     {
                         printf("%d",(i+1));printf(".");
                         printf(f[i]);printf("\n\n\n");
                     }
                     }
                     else
                     {
                         printf("No problem! We hope you have an amazing stay and make memories that you will cherish forever!\n");
                     }
                 }
void display()
{
   int r,c;
    for(c=30;c<=62;c++)
    {
            gotoxy(c,8);
            printf("%c",196);
            gotoxy(c,10);
            printf("%c",196);
            gotoxy(c,11);
            printf("%c",196);

    }
     for(r=8;r<=11;r++)
   {
    gotoxy(30,r);
    printf("%c",179);
    gotoxy(62,r);
    printf("%c",179);
   }
}
void displaybill()
{    int r,c;
    for(c=1;c<=50;c++)
    {
        gotoxy(c,30);
        printf("%c",196);
         gotoxy(c,32);
        printf("%c",196);
         gotoxy(c,34);
        printf("%c",196);
         gotoxy(c,36);
        printf("%c",196);
         gotoxy(c,38);
        printf("%c",196);
         gotoxy(c,40);
        printf("%c",196);
         gotoxy(c,42);
        printf("%c",196);
        gotoxy(c,44);
        printf("%c",196);
    }
    for(r=31;r<=43;r++)
    {
        gotoxy(0,r);
        printf("%c",179);
         gotoxy(51,r);
        printf("%c",179);
    }
gotoxy(0,30);
   printf("%c",218);
   gotoxy(51,30);
   printf("%c",191);
   gotoxy(0,44);
   printf("%c",192);
   gotoxy(51,44);
   printf("%c",217);
}

void gotoxy(short col,short row)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position={col,row};
    SetConsoleCursorPosition(h,position);
}

















