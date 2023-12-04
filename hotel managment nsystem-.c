#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct room
{
    char name[30];
    char nat[15];
    int day,cont0;
    char from[60];
    char to[30];
    int prc;
}room[20];
int main()
{
    int a,c,d,za=9,zb=11;
    char b[30]={'\0'};

    c:
    printf("\n\n\n\n");
    printf("     ***********************************************************\n");
    printf("    *                                                           *\n");
    printf("    *                                                           *\n");
    printf("    *             Welcome To E Error Makers  Hotel              *\n");
    printf("    *                                                           *\n");
    printf("    *                                                           *\n");
    printf("     ***********************************************************\n");
    printf("\n\n\n\n\n");
    printf("\t----------------------------------------------------\n");
    printF("\t|                                                     |\n");
    printf("\t|\tChoose a category\t\t\t\t |\n\t|\t\t\t\t\t\t\t |\n");
    printf("\t|\t 1.Get availability                              |\n");
    printf("\t|\t 2.Features of room                              |\n");
    printf("\t|\t 3.Room Allocation                               |\n");
    printf("\t|\t 4.Show Customer Details                         |\n");
    printf("\t|\t 6.Cancellation                                  |\n");
    printf("\t|\t 7.Room deallocation                             |\n");
    printf("\t|\t 8.Exit\t\t\t                       |\n\t|\t\t\t\t\t\t|\n");
    printf("\t--------------------------------------------------------\n");
    printf("\n\t\t Enter The Category You Want To Select: ");
    scanf("%d",&a);
    printf("\n\n\n\n");

    switch(a)
    {
        case 1:
        system("cls");
        printf("\n\n\n\n");
        printf("       ----------------------------------------\n");
        printf("      |          Room Availability             |\n");
        printf("       ----------------------------------------\n\r");
        printf("\n\n");
        printf("\t Room No\t| Room type\t| Charges | Total | Available\n");
        printf("\n");
        printf("\t 1\t Prednt1 Suite\t 9,800\t 09 \t %d\n",za);
        printf("\t 2\t exctive Room\t 6,500\t 11 \t %d\n",zb);
        printf("\n      -----------------------------------------\n");
        system("pause");
        system("cls");
        printf("\n\n\n\n");
        printf("       --------------------------------------------\n");
        printf("      |                    Rooms                   |\n");
        printf("       --------------------------------------------\n\r");
        printf("\n\t Room | Room |  from  |  To  |  Name\n");
        printf("\t No | Type |       |       |    \n\n");
        for(int i=0;i<9;i++)
        {
            printf("\n\t %d  Pre   %s  %s  %s",i+1,room[i].from,room[i].to,room[i].name);
        }
        for(int i=9;i<20;i++)
        {
            printf("\n\t %d  Exc   %s   %s   %s",i+1,room[i].from,room[i].to,room[i].name);
        }
        printf("\n      ---------------------------------------------------------\n");
        printf("\n\t Press 1 for Room Allocation and press any No for main menu: ");
        scanf("%d",&d);
        if(d==1)
        {
            int ab;
            goto ab;
        }
        else
        {
            system("cls");
            goto c;
        }
        break;
        case 2:
        cd:
            system("cls");
            printf("\n\n\n");
            printf("    ---------------------------------------------------------\n");
            printf("   |                       Features of Room                  |\n");
            printf("    ---------------------------------------------------------\n");
            printf("\n\t\t 1.Presidential suiter");
            printf("\n\t\t 2.Executive room");
            printf("\n\t\t 3.Main menu\n");
            printf("\n       ----------------------------------------------------\n");
            printf("\n\tSelect The Type: ");
            scanf("%d",&d);
            if(d==1)
            {
                system("cls");
                printf("\n\n\n\n");
                printf("       --------------------------------------------------\n");
                printf("       |             For Your Comport                     |\n");
                printf("       --------------------------------------------------\n");
                printf("\n\t 1.Two Oversized Bedrooms With King-sized Bed\n\t 2.Pillow Menu\n\t 3. Separate Living And Dining Areas\n\t 4.Fully Equipped Kitchen\n");
                printf("\n\n        --------------------------------------------------------\n");
                printf("\n\n");
                system("pause");
                system("cls");
                printf("\n\n\n\n");
                printf("       ---------------------------------------------------\n");
                printf("      |                For Your Convenice                 |\n");
                printf("       ---------------------------------------------------\n");
                printf("\n\t 1.Wired and wireless high-speed internet access\n\t 2.Spare electrical outlet and power adapter\n\t 3.IDD telephone and voice mail\n");
                printf("\n\n       ------------------------------------------------\n");
                system("pause");
                system("cls");
                printf("\n\n\n\n");
                printf("       ----------------------------------------------------\n");
                printf("      |                    For Your Induigence             |\n");
                printf("       ----------------------------------------------------\n");
                printf("\n\t 1. 65 inci Smart television Internet Protocol television with local and cable channels in the living area\n\t 2.55 LCD television\n");
                printf("            ------------------------------------------------\n");
                printf("\n\n");
                printf("pause");
                int cd;
                goto cd;
            }
            else if(d==2)
            {
                system("cls");
                printf("\n\n\n\n");
                printf("       ----------------------------------------------\n");
                printf("      |                  For Your Comfort            |\n");
                printf("      -----------------------------------------------\n");
                printf("\n\t 1.A choice of king-sized or twin beds\n\t 2.pillow menu\n\t 3.Executive writing table and stationery set\n\t 4.Ensuite bathroom\n");
                printf("\n\n      ---------------------------------------------------------\n");
                printf("\n\n");
                printf("Pause");
                printf("cls");
                pritf("\n\n\n\n");
                printf("      -----------------------------------------------------\n");
                printf("     |                    For Your Convenience             |\n");
                printf("      -----------------------------------------------------\n");
                printf("\n\t 1.Wired and wireless high-speed Internet access\n\t 2.Spare electrical outlet and power adapter\n\t 3.IDD telephone and voice mail\n");
                printf("\n\n     ---------------------------------------------------\n");
                printf("\n\n");
                printf("pause");
                printf("cls");
                printf("\n\n\n\n");
                printf("      --------------------------------------------------------\n");
                printf("     |               For Your Indulgence                      |\n");
                printf("      --------------------------------------------------------\n");
                printf("\n\t 1. 32 inci LCD interactive television with local and cable \n\t 2.DVD player\n\t 3.fully-stocked minibar \n\t 4.coffee and tree\n");
                printf("\n\n       ----------------------------------------------------\n");
                printf("\n\n");
                system("pause");

                int cd;
                goto cd;
            }
            else
            {
                system("cls");
                goto c;
            }
            break;

            case 3:
            ab:
                system("cls");
                printf("\n\n\n\n");
                printf("\t -------------------------------------------\n");
                printf("\t |             Room Allocation              |\n");
                printf("\t -------------------------------------------\n");
                printf("\n\t\t Types of room\n");
                printf("\n\t\t 1.Presidential suiter");
                printf("\n\t\t 2.Executive Room");
                printf("\n\t\t 3.Main menu\n");
                printf("      ------------------------------------------\n");
                printf("\n\t\t Enter the category you want to select: ");
                sacnf("%d",&d);
                if(d==1)
                {
                    system("cls");
                    printf("\n\n\n\n");
                    za=za-1;
                    printf("\t ----------------------------------------\n");
                    printf("\t|            presdential suiter          |\n");
                    printf("\t ----------------------------------------\n");
                    printf("\n");
                    printf("\n\t\t per day charges 9,800\n");
                    printf("\n\t\t Enter the room no: ");
                    int z;
                    scanf("%d",&z);
                    room[z-1].cntl=0;
                    room[z-1].Prc=9,800;
                    printf("\n\t\t Enter Name:      ");
                    gets(room[z-1].name);
                    gets(room[z-1].Name);
                    printf("\n\t Enter Nationality:  ");
                    gets(room[z-1].nat)
                    print("\n\t\t How many Days you\n\t         want to say:    ");
                    scanf("%d",& room[z-1].day);
                    printf("\n\t\t Date:\n\t\t From :     ");
                    gets(room[z-1].from);
                    gets(room[z-1].from);
                    printf("\n\t\t To:         ");
                    gets(room[z-1].to);
                    room[z-1].prc=9800*room[z-1].day;
                    printf("\n     ---------------------------------------\n");
                    system("pause");
                    system("cls");
                    goto c;
                }
                else if(d==2)
                {
                    system("cls");
                    printf("\n\n\n\n");
                    zb=zb-1;
                    printf("\t -----------------------------------------\n");
                    printf("\t |                 Executive Room         |\n");
                    printf("\t -----------------------------------------\n");
                    printf("\n");
                    printf("\n\t\t Per day charges 6,500\n");
                    printf("\n\t\t Enter the room no: ");
                    int z;
                    scanf("%d",&z);
                    room[z-1].cnt=1;
                    printf("\n\t\t Enter Name:      ");
                    gets(room[z-1].Name);
                    gets(room[z-1].Name);
                    printf("\n\t Enter Nationality:  ");
                    gets(room[z-1].nat)
                    print("\n\t\t How many Days you\n\t         want to say    ");
                    scanf("%d",& room[z-1].day);
                    printf("\n\t\t Date:\n\t\t From :     ");
                    gets(room{z-1}.from);
                    gets(room{z-1}.from);
                    printf("\n\t\t To:         ");
                    gets(room[z-1].to);
                    room[z-1].prc=6500*room[z-1].day;
                    printf("\n     ---------------------------------------\n");
                    system("pause");
                    system("cls");
                    goto c;
                }
                else
                {
                    system("pause");
                    system("cls");
                    goto c;
                }
                break;

            case 4:
                system("cls");
                printf("\n\n\n\n");
                printf("\t -----------------------------------------------\n");
                printf(" |              Customar Details                  |\n");
                printf("\t -----------------------------------------------\n");
                printf("\n");
                printf("\n");
                printf("\n\t\t Enter the room no: ");
                int z;
                scanf("%d",&z);
                printf("\n\t\t Name:                %s",room[z-1].Name);
                printf("\n\t\t Nationality:         %s,room[z-1].nat);
                printf("\n\t\t Stay for %d days",room[z-1].day);
                printf("\n\t\t Date:");
                printf("\n\t\t From: %s",room[z-1].from);
                printf("\n\t\t To:  %s",room[z-1].To);
                printf"\n\t\t Total price: %d,room[z-1].prc);
                printf("\n\n       -----------------------------------------\n");
                printf("\n\t Press 1 for main menu: ");
                scanf("%d",&d);
                if(d==1)
                {
                    system("cls");
                    goto c;
                }
                break;

                case 5;
                system("cls");
                printf("\n\n\n\n");
                printf(" ------------------------------------------------\n");
                printf(" |                  Cancellation                 |\n");
                printf(" ------------------------------------------------\n");
                printf("\n");
                printf("\n\t\t Enter the room no: ");
                scanf("%d",&z);
                printf("\n\t Name:           %s",strcpy(room[z-1].Name,b));
                printf("\n\t Nationality     %s",strcpy(room[z-1].nat,b));
                printf("\n\t\t Stay for %d days",room[z-1].day=0);
                printf("\n\t\t Date:");
                printf("\n\t\t From: %s",strcpy(room[z-1].from,b));
                printf("\n\t\t To:   %s",strcpy(room[z-1].to,b));
                printf("\n\t\t Total price: %d",room[z-1].prc*0);
                room[z-1].cnt=0;
                printf("\n      -------------------------------------------------\n");
                printf("\n\t Press 1 for main menu: ");
                scanf("%d",&d);
                if(d==1)
                {
                    system("cls");
                    goto c;
                }
                break;
                case 7:
                    system("cls");
                    printf("\n\n\n\n");
                    printf("\t ----------------------------------------------------\n");
                    printf("\t |                      Room Deallocaion             |\n");
                    printf("\t ----------------------------------------------------\n");
                    printf("\n");
                    printf("\n\t\t Enter the room no: ");
                    scanf("%d",&z);
                    printf("\n\t\t Name:           %s",room[z-1].name);
                    printf("\n\t\t Nationality:    %s",room[z-1].nat);
                    printf("\n\t\t Stay for %d days",room[z-1].day);
                    printf("\n\t\t Date: ");
                    printf("\n\t\t From:           %s",room[z-1].from);
                    printf("\n\t\t To:             %s",room[z-1].to);
                    printf("\n\t\t Thanks for staying here");
                    printf("\n\n -------------------------------------------------\n");
                    strcpy(room[z-1].name,b;
                    strcpy(room[z-1].nat,b);
                    room[z-1].prc=0;
                    strcpy(room[z-1].from,b);
                    strcpy(room[z-1].to,b);
                    room[z-1].prc=0;
                    room[z-1].cnt=0;
                    printf("\n\n\t Press 1 for main menu:");
                    scanf("%d",&d);
                    if(d==1
                       {
                           system("clS");
                           goto c;
                       }
                       break;


    } break;
            case 8:
            return 0;
            break;




}
