// important concepts in Structures 

// Default Member Initializers

struct Person {
    string name = "Unknown"; 
    int age = 0;            
};

int main() {
    Person p; // Will have default values
    cout << "Name: " << p.name << ", Age: " << p.age << endl;
    return 0;
}

// Bit fields 

struct Flags {
    unsigned int flag1 : 1; // 1 bit
    unsigned int flag2 : 1; // 1 bit
    unsigned int flag3 : 4; // 4 bits
};

int main() {
    Flags f = {1, 0, 15}; // Set flag1 and flag3
    cout << "Flag1: " << f.flag1 << ", Flag2: " << f.flag2 << ", Flag3: " << f.flag3 << endl;
    return 0;
}

///Padding 

struct A {
    char a;  // 1 byte
    // 3 bytes padding for alignment
    int b;   // 4 bytes
};

struct B {
    int b;   // 4 bytes
    char a;  // 1 byte
    // 3 bytes padding for alignment
};

int main() {
    cout << "Size of A: " << sizeof(A) << endl; // Size: 8
    cout << "Size of B: " << sizeof(B) << endl; // Size: 8
    return 0;
}


