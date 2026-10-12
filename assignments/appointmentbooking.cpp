// Appointment Booking System (very easy version)
// Name: SYED MUHAMMAD HAAD     Reg No: 2026(S)-CS-112
#include <iostream>
using namespace std
int totalSlots = 0;        
int bookedSlots = 0;         
int fee = 0;                 
int freeSlots = 0;
int income = 0;
void addData()
{
    cout << "Enter total slots: ";
    cin >> totalSlots;
    cout << "Enter booked slots: ";
    cin >> bookedSlots;
    cout << "Enter fee per appointment: ";
    cin >> fee;
    cout << "Data added!" << endl;
}
void calculate()
{
    freeSlots = totalSlots - bookedSlots;
    income = bookedSlots * fee;
    cout << "Calculation done!" << endl;
}
void showResults()
{
    cout << "Free slots : " << freeSlots << endl;
    cout << "Income     : Rs " << income << endl;
}

int main()
{
    int choice;
    while (true)
    {
        cout << endl;
        cout << "===== APPOINTMENT BOOKING =====" << endl;
        cout << "1. Add data" << endl;
        cout << "2. Calculate" << endl;
        cout << "3. Show results" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            addData();
        }
        else if (choice == 2)
        {
            calculate();
        }
        else if (choice == 3)
        {
            showResults();
        }
        else
        {
            cout << "Wrong choice!" << endl;
        }
    }

    return 0;
}