// The sort() function can be overloaded by passing a custom comparator (a lambda or a functor).

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
};

bool compareByAge(const Person& a, const Person& b) {
    return a.age < b.age;  // Sort by age in ascending order
}

int main() {
    vector<Person> people = {Person("Alice", 30), Person("Bob", 25), Person("Charlie", 35)};
    sort(people.begin(), people.end(), compareByAge);  // Custom comparator

    for (const auto& p : people) {
        cout << p.name << " (" << p.age << ")\n";
    }
    return 0;
}
