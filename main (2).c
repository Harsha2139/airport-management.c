#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Flight {
    int flightNo;
    char destination[50];
    int seats;
    struct Flight *next;
};

struct Passenger {
    char name[50];
    int flightNo;
    struct Passenger *next;
};

struct Flight *fhead = NULL;
struct Passenger *phead = NULL;

// CREATE - Add Flight
void addFlight() {
    struct Flight *newF = (struct Flight *)malloc(sizeof(struct Flight));

    printf("Enter Flight Number: ");
    scanf("%d", &newF->flightNo);
    printf("Enter Destination: ");
    scanf("%s", newF->destination);
    printf("Enter Seats: ");
    scanf("%d", &newF->seats);

    newF->next = fhead;
    fhead = newF;

    printf("Flight Added Successfully!\n");
}

// READ - Display Flights
void displayFlights() {
    struct Flight *temp = fhead;

    if (temp == NULL) {
        printf("No Flights Available!\n");
        return;
    }

    while (temp != NULL) {
        printf("Flight No: %d | Destination: %s | Seats: %d\n",
               temp->flightNo, temp->destination, temp->seats);
        temp = temp->next;
    }
}

// CREATE - Book Ticket
void bookTicket() {
    struct Passenger *newP = (struct Passenger *)malloc(sizeof(struct Passenger));

    printf("Enter Passenger Name: ");
    scanf("%s", newP->name);
    printf("Enter Flight Number: ");
    scanf("%d", &newP->flightNo);

    struct Flight *temp = fhead;

    while (temp != NULL) {
        if (temp->flightNo == newP->flightNo && temp->seats > 0) {
            temp->seats--;

            newP->next = phead;
            phead = newP;

            printf("Ticket Booked Successfully!\n");
            return;
        }
        temp = temp->next;
    }

    printf("Booking Failed!\n");
    free(newP);
}

// DELETE - Cancel Ticket
void cancelTicket() {
    char name[50];
    printf("Enter Passenger Name: ");
    scanf("%s", name);

    struct Passenger *temp = phead, *prev = NULL;

    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {

            struct Flight *f = fhead;
            while (f != NULL) {
                if (f->flightNo == temp->flightNo) {
                    f->seats++;
                }
                f = f->next;
            }

            if (prev == NULL)
                phead = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            printf("Ticket Cancelled!\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("Passenger Not Found!\n");
}

// UPDATE - Modify Flight
void updateFlight() {
    int num;
    printf("Enter Flight Number to Update: ");
    scanf("%d", &num);

    struct Flight *temp = fhead;

    while (temp != NULL) {
        if (temp->flightNo == num) {
            printf("Enter New Destination: ");
            scanf("%s", temp->destination);
            printf("Enter New Seats: ");
            scanf("%d", &temp->seats);

            printf("Flight Updated!\n");
            return;
        }
        temp = temp->next;
    }

    printf("Flight Not Found!\n");
}

// SEARCH - Flight
void searchFlight() {
    int num;
    printf("Enter Flight Number: ");
    scanf("%d", &num);

    struct Flight *temp = fhead;

    while (temp != NULL) {
        if (temp->flightNo == num) {
            printf("Found: %s | Seats: %d\n",
                   temp->destination, temp->seats);
            return;
        }
        temp = temp->next;
    }

    printf("Flight Not Found!\n");
}

// READ - Display Passengers
void displayPassengers() {
    struct Passenger *temp = phead;

    if (temp == NULL) {
        printf("No Passengers!\n");
        return;
    }

    while (temp != NULL) {
        printf("Name: %s | Flight No: %d\n",
               temp->name, temp->flightNo);
        temp = temp->next;
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Airport Menu ---\n");
        printf("1. Add Flight\n");
        printf("2. Display Flights\n");
        printf("3. Book Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Update Flight\n");
        printf("6. Search Flight\n");
        printf("7. Show Passengers\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addFlight(); break;
            case 2: displayFlights(); break;
            case 3: bookTicket(); break;
            case 4: cancelTicket(); break;
            case 5: updateFlight(); break;
            case 6: searchFlight(); break;
            case 7: displayPassengers(); break;
            case 8: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
}