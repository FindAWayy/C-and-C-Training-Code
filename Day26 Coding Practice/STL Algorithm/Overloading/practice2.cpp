// Overloading of different algorithms 


#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Overload comparison operators for sorting and comparisons in set
    bool operator<(const Person& other) const {
        return age < other.age;  // Sort by age in ascending order
    }

    bool operator>(const Person& other) const {
        return age > other.age;  // Sort by age in descending order
    }

    bool operator==(const Person& other) const {
        return name == other.name;  // Compare by name
    }

    bool operator!=(const Person& other) const {
        return !(*this == other);  // Not equal by name
    }

    bool operator<=(const Person& other) const {
        return *this < other || *this == other;
    }

    bool operator>=(const Person& other) const {
        return *this > other || *this == other;
    }

    // Method to display the Person's details
    void display() const {
        cout << name << " (" << age << " years old)" << endl;
    }
};

// 1. Overloaded Sort
void overloaded_sort(vector<Person>& people, bool ascending = true) {
    if (ascending) {
        sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
            return a.age < b.age;  // Sort in ascending order
        });
    } else {
        sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
            return a.age > b.age;  // Sort in descending order
        });
    }
}

// 2. Overloaded Max Element
 auto overloaded_max_element(const vector<Person>& people) {
    return max_element(people.begin(), people.end(), [](const Person& a, const Person& b) {
        return a.age < b.age;  // Find the person with max age
    });
}

// 3. Overloaded Min Element
Person overloaded_min_element(const vector<Person>& people) {
    return *min_element(people.begin(), people.end(), [](const Person& a, const Person& b) {
        return a.age < b.age;  // Find the person with min age
    });
}

// 4. Overloaded Accumulate (Sum of ages)
int overloaded_accumulate(const vector<Person>& people) {
    return accumulate(people.begin(), people.end(), 0, [](int sum, const Person& p) {
        return sum + p.age;  // Add up all ages
    });
}

// 5. Overloaded Count
int overloaded_count(const vector<Person>& people, int age) {
    return count_if(people.begin(), people.end(), [age](const Person& p) {
        return p.age == age;  // Count people of a specific age
    });
}

// 6. Overloaded Find
Person overloaded_find(const vector<Person>& people, const string& name) {
    auto it = find_if(people.begin(), people.end(), [&name](const Person& p) {
        return p.name == name;  // Find a person by name
    });
    if (it != people.end()) {
        return *it;  // Return found person
    } else {
        return Person("", -1);  // Return a default person if not found
    }
}

// 7. Overloaded Binary Search
bool overloaded_binary_search(const vector<Person>& people, const Person& person) {
    return binary_search(people.begin(), people.end(), person, [](const Person& a, const Person& b) {
        return a.age < b.age;  // Compare by age for binary search
    });
}

// 8. Overloaded Lower Bound
Person overloaded_lower_bound(const vector<Person>& people, int age) {
    auto lb = lower_bound(people.begin(), people.end(), Person("", age), [](const Person& a, const Person& b) {
        return a.age < b.age;  // Find the first person with age >= age
    });
    if (lb != people.end()) {
        return *lb;  // Return person with age >= age
    }
    return Person("", -1);  // Return default person if not found
}

// 9. Overloaded Upper Bound
Person overloaded_upper_bound(const vector<Person>& people, int age) {
    auto ub = upper_bound(people.begin(), people.end(), Person("", age), [](const Person& a, const Person& b) {
        return a.age < b.age;  // Find the first person with age > age
    });
    if (ub != people.end()) {
        return *ub;  // Return person with age > age
    }
    return Person("", -1);  // Return default person if not found
}

int main() {

    // Create a vector of Person objects
    vector<Person> people = {
        Person("H", 25),
        Person("K", 30),
        Person("M", 20),
        Person("R", 25)
    };

    // 1. Overloaded Sort
    cout << "Sorted people (ascending by age):" << endl;
    overloaded_sort(people);
    for (const auto& p : people) {
        p.display();
    }

    // 2. Overloaded Max Element
    auto oldest = overloaded_max_element(people);
    cout << "Oldest person: ";
    oldest->display();

    // 3. Overloaded Min Element
    Person youngest = overloaded_min_element(people);
    cout << "Youngest person: ";
    youngest.display();

    // 4. Overloaded Accumulate (Sum of ages)
    int total_age = overloaded_accumulate(people);
    cout << "Total age: " << total_age << endl;

    // 5. Overloaded Count (Count 25-year-olds)
    int count_25 = overloaded_count(people, 25);
    cout << "Count of 25-year-olds: " << count_25 << endl;

    // 6. Overloaded Find (Find person by name)
    Person found_person = overloaded_find(people, "H");
    cout << "Found person 'H': ";
    found_person.display();

    // 7. Overloaded Binary Search (Check if person exists)
    bool found = overloaded_binary_search(people, Person("K", 30));
    if (found) {
        cout << "Person 'K' found in the set." << endl;
    } else {
        cout << "Person 'K' not found in the set." << endl;
    }

    // 8. Overloaded Lower Bound (Find first person >= 25)
    Person lb = overloaded_lower_bound(people, 25);
    cout << "First person with age >= 25: ";
    lb.display();

    // 9. Overloaded Upper Bound (Find first person > 25)
    Person ub = overloaded_upper_bound(people, 25);
    cout << "First person with age > 25: ";
    ub.display();

    return 0;
}

