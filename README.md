# airport-management.c
# ✈️ Airport Management System

## 📌 Project Title

Airport Management System using Linked List in C

---

## 👨‍💻 Team Members

* Member 1: [Thugu.harsha vardhan reddy]
* Member 2: [Boodati jayanth]

---

## ❗ Problem Statement

Managing flight and passenger details manually is difficult and time-consuming.
This project aims to develop a simple system to:

* Add flight details
* Book tickets
* Cancel tickets
* Search flights
* Display passengers

The system improves efficiency using data structures.

---

## 🧠 Data Structure Used

* **Singly Linked List**

  * Used for storing flight details
  * Used for storing passenger details

### Why Linked List?

* Dynamic memory allocation
* Easy insertion and deletion
* Efficient for real-time data updates

---

## ⚙️ Algorithm Explanation

### 1. Add Flight

* Create a new flight node
* Take input (flight number, destination, seats)
* Insert at beginning of flight list

### 2. Display Flights

* Traverse flight list
* Print each flight’s details

### 3. Book Ticket

* Input passenger name and flight number
* Search flight list
* If seats available:

  * Reduce seat count
  * Add passenger to passenger list
* Else show booking failed

### 4. Cancel Ticket

* Search passenger by name
* Remove passenger node
* Increase seat count in corresponding flight

### 5. Update Flight

* Search flight by number
* Modify destination and seats

### 6. Search Flight

* Traverse flight list
* Match flight number
* Display details if found

### 7. Display Passengers

* Traverse passenger list
* Print all passenger details

---

## 🛠️ Compilation Instructions

### Step 1: Save file

Save as `airport.c`

### Step 2: Compile

```
gcc airport.c -o airport
```

### Step 3: Run

```
./airport
```

---

## 💻 Sample Output

```
--- Airport Menu ---
1. Add Flight
2. Display Flights
3. Book Ticket
4. Cancel Ticket
5. Update Flight
6. Search Flight
7. Show Passengers
8. Exit
1. Add Flight
Input: 1

Enter Flight ID: AI-101

Enter Destination: New York

Enter Total Seats: 150

Output: ✅ Flight AI-101 added successfully!

2. Display Flights
Input: 2

Current Flights: > | Flight ID | Destination | Available Seats | Status |
| :--- | :--- | :--- | :--- |
| AI-101 | New York | 150 | On Time |
| EK-202 | Dubai | 85 | Delayed |

3. Book Ticket
Input: 3

Enter Flight ID to book: AI-101

Enter Passenger Name: Alex Smith

Output: 🎟️ Ticket booked! Seat confirmed for Alex Smith on AI-101.

4. Cancel Ticket
Input: 4

Enter Ticket/Passenger ID: Alex Smith

Output: 🗑️ Ticket for Alex Smith has been cancelled. Seat is now available.

5. Update Flight
Input: 5

Enter Flight ID to update: EK-202

New Status: Boarding

Output: 🔄 Flight EK-202 status updated to: Boarding.

6. Search Flight
Input: 6

Enter Destination to search: Dubai

Result Found: EK-202 | Destination: Dubai | Seats: 85 | Status: Boarding

7. Show Passengers
Input: 7

Enter Flight ID: AI-101

Passenger List for AI-101: > 1. Alex Smith

2. Jordan Lee

3. Sam Rivera

8. Exit
Input: 8

Output: Exiting System... Have a safe flight! 👋
```

---

## 🎥 Demo Video Link



---

🛠️ Compilation & Execution

✅ Step 1: Save your file

Save your program as:

airport management.c

✅ Step 2: Compile the program


gcc airport management.c -o project

✅ Step 3: Run the program

./project

2. Running the Program
   

3.laasOnce it compiles without errors, you can run the executable:



On Linux/macOS:


Bash


./airport-management


On Windows:


Bash


airport-management.exe


## ✅ Conclusion

This project demonstrates how linked lists can be used to efficiently manage dynamic data like flights and passengers. It performs CRUD operations and simulates real-world airport management in a simple and effective way.


