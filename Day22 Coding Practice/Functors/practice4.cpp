// Functors ( Example 4 )

#include <iostream>
#include <vector>
#include <algorithm>

class Accumulator {
private:
    int sum;
public:
    Accumulator() : sum(0) {}

    // Functor to add numbers to the sum
    void operator()(int num) {
        sum += num;
    }

    int getSum() const {
        return sum;
    }
};

int main() {
   vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Create an accumulator functor
    Accumulator accumulator;

    // Apply the functor to each element in the vector
    for_each(numbers.begin(), numbers.end(), accumulator);

    cout << "Sum: " << accumulator.getSum() << endl;  
    return 0;
}
