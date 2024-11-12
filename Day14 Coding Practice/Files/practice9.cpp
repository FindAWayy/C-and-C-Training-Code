
// Reading csv files 

#include <iostream>
#include <fstream>
#include <sstream>  // for std::stringstream
#include <string>
#include <vector>

// Use the std namespace to avoid prefixing with "std::"
using namespace std;

// Define a structure to hold employee data
struct Employee {
    string name;
    int salary;
    string designation;
    string qualification;
};

// Function to split a string by a delimiter (comma in this case)
vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(str);
    
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    
    return tokens;
}

int main() {
    string fileName = "test5.csv";
    ifstream inFile(fileName);

    // Check if the file is open
    if (!inFile.is_open()) {
        cout << "Error opening the file.\n";
        return 1;
    }

    // Vector to hold all employees
    vector<Employee> employees;

    // Read the file line by line
    string line;
    while (getline(inFile, line)) {
        // Split the line by commas
        vector<string> fields = split(line, ',');

        // Create an Employee object and fill its fields
        if (fields.size() == 4) {  // Make sure we have all 4 fields
            Employee emp;
            emp.name = fields[0];
            emp.salary = stoi(fields[1]);  // Convert salary to integer
            emp.designation = fields[2];
            emp.qualification = fields[3];
            
            // Add employee to the list
            employees.push_back(emp);
        }
    }

    // Close the file
    inFile.close();

    // Display the data
    cout << "Employee Data:\n";
    cout << "--------------------------------------------------\n";
    for (const auto& emp : employees) {
        cout << "Name: " << emp.name << "\n"
             << "Salary: " << emp.salary << "\n"
             << "Designation: " << emp.designation << "\n"
             << "Qualification: " << emp.qualification << "\n"
             << "--------------------------------------------------\n";
    }

    return 0;
}
