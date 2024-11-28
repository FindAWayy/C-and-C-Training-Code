// Algorithms using user defined data types in sets 


#include <iostream>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Overload comparison operators for sorting A comparisons in set
    bool operator<(const Person& other) const {
        return age < other.age; // Sort by age in ascending order
    }

    bool operator==(const Person& other) const {
        return name == other.name; // Find by name
    }

    bool operator>(const Person& other) const {
        return age > other.age;
    }
};

int main() {

    set<Person> people = {
        Person("H", 25),
        Person("K", 30),
        Person("M", 20),
        Person("R", 25)
    };

    for (const auto& p : people) {
        cout << p.name << " (" << p.age << ") ";
    }
    cout << endl;


 auto oldest = *max_element(people.begin(), people.end(), 
        [](const Person& a, const Person& b) { return a.age < b.age; });
    cout << "Oldest person: " << oldest.name << endl;

    // Min element: Find the person with the minimum age
  auto youngest = min_element(people.begin(), people.end(), 
    [](const Person& a, const Person& b) { return a.age < b.age; });
cout << "Youngest person: ";
youngest->display();  // No need to print the result of display, it's already handled by display().

    // Accumulate: Sum of ages of all people
    int total_age = accumulate(people.begin(), people.end(), 0, 
        [](int sum, const Person& p) { return sum + p.age; });
    cout << "Total age: " << total_age << endl;

    // Count: Count how many people are of age 25
    int count_25 = count_if(people.begin(), people.end(), [](const Person& p) {
        return p.age == 25;
    });
    cout << "Count of 25-year-olds: " << count_25 << endl;

    // Find: Find a specific person by name
    auto it = find(people.begin(), people.end(), Person("H", 0));
    if (it != people.end()) {
        cout << "Found H" << endl;
    } else {
        cout << "H not found" << endl;
    }

    // Binary Search: Since the set is already sorted, we can use binary search
    bool found = binary_search(people.begin(), people.end(), Person("K", 0));
    if (found) {
        cout << "K is in the set" << endl;
    } else {
        cout << "K is not in the set" << endl;
    }

    // Lower Bound: Find the first person with age >= 25
    auto lb = lower_bound(people.begin(), people.end(), Person("", 25), 
        [](const Person& a, const Person& b) { return a.age < b.age; });
    if (lb != people.end()) {
        cout << "First person with age >= 25: " << lb->name << endl;
    }

    // Upper Bound: Find the first person with age > 25
    auto ub = upper_bound(people.begin(), people.end(), Person("", 25), 
        [](const Person& a, const Person& b) { return a.age < b.age; });
    if (ub != people.end()) {
        cout << "First person with age > 25: " << ub->name << endl;
    }

    return 0;
}
