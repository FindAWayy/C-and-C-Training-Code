/// Date program problem using security checks 

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

class Date {
private:
    int year, month, day;

public:
  Date(int y, int m, int d) : year(y), month(m), day(d) {
    if (year < 1) {
     ("Year must be positive.");
    }

    if (month < 1 || month > 12) {
     ("Month must be between 1 and 12.");
    }
    normalize();
    }




void normalize() {
    if (month < 1 || month > 12) {
       ("Month must be between 1 and 12.");
    }
    int daysInCurrentMonth = daysInMonth(month, year);
    if (day < 1 || day > daysInCurrentMonth) {
        day = daysInCurrentMonth;
    }
}

    // Prefix ++ operator (increment date by 1 day)
    Date& operator++() {
        day++;
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Postfix ++ operator (increment date by 1 day)
     Date& operator++(int) {
         ++(*this); 
         return *this;
     }

    // Overloading the += operator (add days to a date)
    Date& operator+=(int days) {
        day += days;
        while (day > daysInMonth(month, year)) {
            day -= daysInMonth(month, year);
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Overloading the - operator (difference between two dates in days)
    int operator-(const Date& other)  {
        int totalDays1 = year * 365 + month * 31 + day;
        int totalDays2 = other.year * 365 + other.month * 31 + other.day;
        return totalDays1 - totalDays2;
    }

    // Overloading the > operator (compare dates)
    bool operator>(const Date& other)  {
        if (year > other.year) return true;
        if (year == other.year && month > other.month) return true;
        if (year == other.year && month == other.month && day > other.day) return true;
        return false;
    }

    // Overloading the == operator (check if two dates are equal)
    bool operator==(const Date& other) const {
        return year == other.year && month == other.month && day == other.day;
    }

    // Overloading the <= operator (check if current date is earlier or equal)
    bool operator<=(const Date& other)  {
        return !(*this > other); 
    }

    // Overloading the = operator (copy assignment)
    Date& operator=(const Date& other) {
        if (this != &other) { // Avoid self-assignment
            year = other.year;
            month = other.month;
            day = other.day;
        }
        return *this;
    }
    
        // Prefix -- operator (decrement date by 1 day)
    Date& operator--() {
        day--;
        if (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day = daysInMonth(month, year);
        }
        return *this;
    }
    
        // Postfix -- operator (decrement date by 1 day)
    Date operator--(int) {
        Date temp = *this;
        --(*this);  // Decrement the date
        return temp;
    }
    
    // Overloading the + operator (add two dates together: date + days)
    Date operator+(int days) { 
        Date temp = *this;
        temp += days;
        return temp;
    }
 
    void display() const {
        cout << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day << endl;
    }
};

int main() {
    Date dt1(2024, 2, 28); 
    Date dt2(2024, 2, 29);
    Date dt3(2023, 12, 31);


    dt1.display();
    dt2.display();
    dt3.display();

 
    ++dt1;
    dt1.display();
    dt1++;
    dt1.display();


    dt2 += 30;
    dt2.display(); 


    int daysDifference = dt2 - dt3;
    cout << "Days difference: " << daysDifference << " days" << endl;  

    // Compare two dates using the == operator
    if (dt2 == dt1) {
        cout << "The dates are equal." << endl;
    } else {
        cout << "The dates are not equal." << endl;
    }
        
    dt2--;
    dt2.display(); 

    --dt2;
    dt2.display(); 

    Date newDate = dt1 + 50;
    newDate.display();

    // Check if a date is earlier or equal using <= operator
    if (dt3 <= dt2) {
        cout << "The first date is earlier or equal to the second date." << endl;
    }
    else {
        cout<<"The first date is not earlier to the second date ";
    }

    return 0;
}















