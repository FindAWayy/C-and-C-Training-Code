
// Static data member and member functions in inheritance( Example 3 )

#include <iostream>
using namespace std;

class Patient {
public:
    static int totalPatients;

    Patient() {
        totalPatients++;
    }

    static void displayTotalPatients() {
        cout << "Total Patients: " << totalPatients << endl;
    }
};

int Patient::totalPatients = 0;

class Inpatient : public Patient {

public:
    static int totalInpatients;

    Inpatient() {
        totalInpatients++;
    }

    static void displayTotalInpatients() {
        cout << "Total Inpatients: " << totalInpatients << endl;
    }
};
int Inpatient::totalInpatients = 0;

class Outpatient : public Patient {
private:
    string appointmentTime;

public:
    static int totalOutpatients;

    Outpatient() {
        totalOutpatients++;
    }

    static void displayTotalOutpatients() {
        cout << "Total Outpatients: " << totalOutpatients << endl;
    }
};
int Outpatient::totalOutpatients = 0;

class CriticalCarePatient : public Patient {

public:
    static int totalCriticalCarePatients;

    CriticalCarePatient(){
        totalCriticalCarePatients++;
    }

    static void displayTotalCriticalCarePatients() {
        cout << "Total Critical Care Patients: " << totalCriticalCarePatients << endl;
    }
};

int CriticalCarePatient::totalCriticalCarePatients = 0;

int main() {
    Inpatient ip1;
    Inpatient ip2;
    Outpatient op1;
    CriticalCarePatient cc1;
    Outpatient op2;
    CriticalCarePatient cc2;
    Inpatient ip3;
    CriticalCarePatient cc3;

    Patient::displayTotalPatients();
    
    Inpatient::displayTotalInpatients();
    
    Outpatient::displayTotalOutpatients();
    
    CriticalCarePatient::displayTotalCriticalCarePatients();

    return 0;
}