/// const object 

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}

    void setValue(int v) {
        value = v;  // This will modify the object
    }

    int getValue() const {
        return value;  // This will not modify the object
    }
};

int main() {
    const MyClass obj(5);

    // obj.setValue(10); // not allowed 

    cout << obj.getValue() << endl;  // Allowed: const member function, no modification
}