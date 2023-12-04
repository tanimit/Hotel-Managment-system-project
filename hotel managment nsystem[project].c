#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Room {
	int roomID;
    int roomNumber;
    char type[40];
    int isAvailable;
};

struct Guest {
    int guestID;
    char name[50];
    char contact[20];
};

struct Booking {
    int bookingID;
    int roomNumber;
    int guestID;
    char date[100];
};

struct Room rooms[50]; // max rooms 50
struct Guest guests[100]; // max guests 100
struct Booking bookings[100];// max bookings 100

int roomsNum;
int guestsNum;
int bookingsNum;

void displayMenu(){
    printf("\nHotel Managment System\n");
    printf("1. Add Room\n");
    printf("2. Add guests\n");
    printf("3. Make Booking\n");
    printf("4. Display Rooms\n");
    printf("5. Display Guests\n");
    printf("6. Display Bookings\n");
    printf("0. Exit\n");
    printf("Enter Your choice: ");
}

void addRoom(){
    if(roomsNum >= 50){
        printf("Maximum room limit reached!\n");
        return;
    }
    struct Room roomNew;

    printf("Enter Room Number: ");
    scanf("%d",&roomNew.roomNumber);
		  printf("Enter Room Type: ");
    scanf("%s",&roomNew.type);
	roomNew.isAvailable = 1;

	// roomNew.roomID = roomsNum + 1;
    // rooms[roomsNum++] = roomNew;
    FILE *file = fopen("rooms.txt","a");
	fprintf(file,"%d %s %d\n",roomNew.roomNumber, roomNew.type, roomNew.isAvailable);
	fclose(file);

    printf("Room added successfully!\n");
}

   void addGuest(){
    if(guestsNum>=100){
        printf("Maximum guest limit reached!\n");
        return;
    }
    struct Guest guestNew;

    printf("Enter Guest Name: ");
    scanf("%s",&guestNew.name);

    printf("Enter Contact Number: ");
    scanf("%s",&guestNew.contact);

       guestNew.guestID = guestsNum +1;
	// guests[guestsNum++] = guestNew;
         guestsNum++;
	FILE *file =fopen("guest.txt","a");
	fprintf(file,"%d %s %s\n",guestNew.guestID,guestNew.name,guestNew.contact);
	fclose(file);

	printf("Guest added successfully!");

}

void makeBooking(){
	if(bookingsNum >=100){
		printf("Maximum booking limit reached");
		return;
	}
	struct Booking bookingNew;

	printf("Enter Room Number for Booking: ");
	scanf("%d",&bookingNew.roomNumber);

	printf("Enter Guest ID for Booking: ");
	scanf("%d",&bookingNew.guestID);

	printf("Enter Booking Date (DD/MM/YYYY): ");
	scanf("%s",&bookingNew.date);

	bookingNew.bookingID = bookingsNum + 1;
    //   bookingsNum++;
	// bookings[bookingsNum++] = bookingNew;
	FILE *file = fopen("booking.txt","a");
	fprintf(file,"%d %d %d %s\n",bookingNew.bookingID, bookingNew.roomNumber,bookingNew.guestID,bookingNew.date);
	fclose(file);
	printf("Booking made successfully!\n");

}

void displayRooms(){
	printf("\nRoom Details:\n");
	// for(int i=0; i < roomsNum; i++){
    //     printf("Room ID: %d\nRoom Number: %d\nType: %s\nAvailability: %s\n",rooms[i].roomID,rooms[i].roomNumber, rooms[i].type, rooms[i].isAvailable ? "Available" : "Occupied");
	// 	printf("-----------------------------------\n");
	// }
	FILE *file = fopen("rooms.txt","r");
	if(file==NULL){
		printf("No rooms found\n");
	return;
	}
	struct Room room;
	while(fscanf(file,"%d %s %d",&room.roomNumber,&room.type,&room.isAvailable)!=EOF){
		printf("RoomNumber: %d\nType: %s\nAvailability: %s\n",room.roomNumber,room.type,room.isAvailable ? "Available" : "Occupied");
		printf("----------------------------------------------------\n");
	}
	fclose(file);
}

void displayGuest(){
	printf("\nGuest Details:\n");
	// for(int i=0; i< guestsNum; i++){
	// 	printf("Guest ID: %d\nname: %s\nContact: %s\n", guests[i].guestID,guests[i].name, guests[i].contact);
	// 	printf("--------------------------\n");
	// }
	FILE *file = fopen("guest.txt","r");
	if(file == NULL){
		printf("No guest Found\n");
		return;
	}
	struct Guest guest;
	while(fscanf(file,"%d %s %s",&guest.guestID,&guest.name,&guest.contact)!=EOF){
		printf("GuestID: %d\nName: %s\nContact: %s\n",guest.guestID,guest.name,guest.contact);
		printf("--------------------------------\n");
	}
	fclose(file);
}

void displayBooking(){
	printf("\nBooking Details:\n");
	// for(int i= 0; i<bookingsNum;i++){
	// 	printf("Booking ID: %d\nRoom Number: %d\nGuest ID: %d\nDate: %s\n", bookings[i].bookingID,bookings[i].roomNumber, bookings[i].guestID, bookings[i].date);
	// 	printf("---------------------------\n");
	// }
	FILE *file = fopen("booking.txt","r");
	if(file == NULL){
		printf("No booking found");
		return;
	}
	struct Booking booking;
	while(fscanf(file,"%d %d %d %s",&booking.bookingID,&booking.roomNumber,&booking.guestID,&booking.date)!=EOF){
		printf("BookingID: %d\nRoomNumber: %d\nGuestID: %d\nbookingDate: %s\n",booking.bookingID,booking.roomNumber,booking.guestID,booking.date);
		printf("-----------------\n");
	}
	fclose(file);


}

int main(){
	int choice;
	do {
		displayMenu();
		scanf("%d",&choice);

		switch (choice) {
			case 1:
			addRoom();
			break;
			case 2:
			addGuest();
			break;
			case 3:
			makeBooking();
			break;
			case 4:
			displayRooms();
			break;
			case 5:
			displayGuest();
			break;
			case 6:
			displayBooking();
			break;
			case 0:
			printf("Exiting...\n");
			break;
			default:
			printf("Invalid choice. Please try again.\n");
		}

	}while(choice != 0);
	return 0;
}
