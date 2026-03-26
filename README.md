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

Enter choice: 1
Enter Flight Number: 101
Enter Destination: Delhi
Enter Seats: 5
Flight Added Successfully!

Enter choice: 3
Enter Passenger Name: Rahul
Enter Flight Number: 101
Ticket Booked Successfully!

Enter choice: 7
Name: Rahul | Flight No: 101
```

---

## 🎥 Demo Video Link



---

## ✅ Conclusion

This project demonstrates how linked lists can be used to efficiently manage dynamic data like flights and passengers. It performs CRUD operations and simulates real-world airport management in a simple and effective way.
🛠️ Compilation & Execution
✅ Step 1: Save your file

Save your program as:

airport.c
✅ Step 2: Compile the program
gcc airport.c -o project
✅ Step 3: Run the program
./project
