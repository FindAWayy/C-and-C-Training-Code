// Algorithms using user defined data types in vector 

#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    // For sorting by age
    bool operator<(const Person& other) const {
        return age < other.age;
    }

    // For displaying Person info
    void display() const {
        cout << name << " (" << age << " years old)" << endl;
    }
};

// Comparison function for max_element, min_element (for name comparison)
bool compareByName(const Person& a, const Person& b) {
    return a.name < b.name;  // Sort by name in ascending order
}

int main() {
    vector<Person> people = {
        Person("H", 22),
        Person("K", 21),
        Person("R", 20),
        Person("M", 23)
    };

    // Sorting by age (using overloaded < operator)
    sort(people.begin(), people.end());

    cout << "Sorted by age:" << endl;
    for (const auto& person : people) {
        person.display();
    }
    cout << endl;

    // Reverse the vector
    reverse(people.begin(), people.end());

    cout << "Reversed vector:" << endl;
    for (const auto& person : people) {
        person.display();
    }
    cout << endl;

    // Find the maximum element based on age (after sorting by age)
    auto max_age = max_element(people.begin(), people.end());
    cout << "Person with maximum age: ";
    max_age->display();
    cout << endl;

    // Find the minimum element based on age
    auto min_age = min_element(people.begin(), people.end());
    cout << "Person with minimum age: ";
    min_age->display();
    cout << endl;

    // Accumulate ages
    int total_age = accumulate(people.begin(), people.end(), 0, [](int sum, const Person& p) {
        return sum + p.age;
    });
    cout << "Total age of all people: " << total_age << endl << endl;

    // Count occurrences of a specific age
    int count_28 = count_if(people.begin(), people.end(), [](const Person& p) {
        return p.age == 28;
    });
    cout << "Number of people with age 28: " << count_28 << endl << endl;

    // Find a person by name
    auto it = find_if(people.begin(), people.end(), [](const Person& p) {
        return p.name == "H";
    });
    if (it != people.end()) {
        cout << "Found person with name Bob: ";
        it->display();
    } else {
        cout << "Person named Bob not found!" << endl;
    }
    cout << endl;

    // Binary search (works only if the vector is sorted)
    sort(people.begin(), people.end(), compareByName);  // Sort by name for binary_search
    bool found = binary_search(people.begin(), people.end(), Person("K", 35), compareByName);
    if (found) {
        cout << "Person K found!" << endl;
    } else {
        cout << "Person K not found!" << endl;
    }
    cout << endl;

    // Lower bound and upper bound for name search
    auto lb = lower_bound(people.begin(), people.end(), Person("H", 0), compareByName);
    auto ub = upper_bound(people.begin(), people.end(), Person("M", 0), compareByName);

    if (lb != people.end()) {
        cout << "Lower bound for 'H': ";
        lb->display();
    } else {
        cout << "Lower bound for 'H' not found!" << endl;
    }

    if (ub != people.end()) {
        cout << "Upper bound for 'M': ";
        ub->display();
    } else {
        cout << "Upper bound for 'M' not found!" << endl;
    }

    return 0;
}
