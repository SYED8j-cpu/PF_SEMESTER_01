// Appointment Booking System - Version 2
// Name: SYED MUHAMMAD HAAD     Reg No: 2026(S)-CS-112

#include <iostream>
#include <string>
using namespace std;
void printHeader()
{
    cout << "************************************************************" << endl;
    cout << "*              Appointment Booking System                  *" << endl;
    cout << "************************************************************" << endl;
    cout << endl;
}
void clearScreen()
{
    for (int i = 0; i < 40; i++)
    {
        cout << endl;
    }
}
void waitForKey()
{
    cout << "Press Enter to continue..";
    cin.get();
}
void waitForExitKey()
{
    cout << endl << "Press Enter to exit the application..";
    cin.get();
}
int showMenu()
{
    int choice;

    cout << endl;
    cout << "Select one of the following options number..." << endl;
    cout << "1. Add 1st Doctor Data" << endl;
    cout << "2. Add 2nd Doctor Data" << endl;
    cout << "3. Add 3rd Doctor Data" << endl;
    cout << "4. Calculate Total" << endl;
    cout << "5. View All Doctors Data" << endl;
    cout << "6. Exit" << endl;
    cout << "Your Option.. ";
    cin >> choice;
    cin.ignore(1000, '\n');
    return choice;
}
int calculateFreeSlots(int totalSlots, int bookedSlots)
{
    return totalSlots - bookedSlots;
}
int calculateIncome(int bookedSlots, int fee)
{
    return bookedSlots * fee;
}
void addRecord(int number, string &name, int &totalSlots, int &bookedSlots, int &fee)
{
    cout << "Enter the name of doctor " << number << ": ";
    cin >> name;

    cout << "Enter total slots of doctor " << number << ": ";
    cin >> totalSlots;

    cout << "Enter booked slots of doctor " << number << ": ";
    cin >> bookedSlots;
    while (bookedSlots > totalSlots || bookedSlots < 0)
    {
        cout << "Booked slots cannot be more than total slots. Enter again: ";
        cin >> bookedSlots;
    }
    cout << "Enter fee per appointment of doctor " << number << " (Rs): ";
    cin >> fee;
    cin.ignore(1000, '\n');
}
void calculateTotal(int total1, int booked1, int fee1,
                    int total2, int booked2, int fee2,
                    int total3, int booked3, int fee3)
{
    int allFree = calculateFreeSlots(total1, booked1)
                + calculateFreeSlots(total2, booked2)
                + calculateFreeSlots(total3, booked3);

    int allIncome = calculateIncome(booked1, fee1)
                  + calculateIncome(booked2, fee2)
                  + calculateIncome(booked3, fee3);

    cout << "Total Free Slots (all doctors): " << allFree << endl;
    cout << "Total Income (all doctors)    : Rs " << allIncome << endl;
}
void printRecord(string name, int totalSlots, int bookedSlots, int fee)
{
    cout << name << "\t"
         << totalSlots << "\t"
         << bookedSlots << "\t\t"
         << calculateFreeSlots(totalSlots, bookedSlots) << "\t"
         << fee << "\t"
         << calculateIncome(bookedSlots, fee) << endl;
}
void viewAll(string name1, int total1, int booked1, int fee1,
             string name2, int total2, int booked2, int fee2,
             string name3, int total3, int booked3, int fee3)
{
    cout << "All Doctors Data" << endl;
    cout << "Name\tTotal\tBooked\t\tFree\tFee\tIncome" << endl;
    printRecord(name1, total1, booked1, fee1);
    printRecord(name2, total2, booked2, fee2);
    printRecord(name3, total3, booked3, fee3);
}
int main()
{
    
    string name1 = "-";
    int total1 = 0, booked1 = 0, fee1 = 0;
    string name2 = "-";
    int total2 = 0, booked2 = 0, fee2 = 0;
    string name3 = "-";
    int total3 = 0, booked3 = 0, fee3 = 0;
    int option = 0;
    while (option != 6)
    {
        clearScreen();
        printHeader();
        option = showMenu();

        if (option == 1)
        {
            addRecord(1, name1, total1, booked1, fee1);
            waitForKey();
        }
        else if (option == 2)
        {
            addRecord(2, name2, total2, booked2, fee2);
            waitForKey();
        }
        else if (option == 3)
        {
            addRecord(3, name3, total3, booked3, fee3);
            waitForKey();
        }
        else if (option == 4)
        {
            calculateTotal(total1, booked1, fee1,
                           total2, booked2, fee2,
                           total3, booked3, fee3);
            waitForKey();
        }
        else if (option == 5)
        {
            viewAll(name1, total1, booked1, fee1,
                    name2, total2, booked2, fee2,
                    name3, total3, booked3, fee3);
            waitForKey();
        }
        else if (option == 6)
        {
            waitForExitKey();
        }
        else
        {
            cout << "Wrong choice!" << endl;
            waitForKey();
        }
    }

    return 0;
}