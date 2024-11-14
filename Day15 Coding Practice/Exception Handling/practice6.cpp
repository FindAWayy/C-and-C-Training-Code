
// Exception Handling( example 5 ) Stack Unbinding 

class A1 {
  int* p;
public:
  A1()
  {
    cout << "A's Constr" << endl;
    p = new int[10];
  }
  ~A1()
  {
    if (p != nullptr)
    {
      delete[]p;
      p = nullptr;
    }

    cout << "Inside A's des" << endl;
  }
};

class B1 {
  A1 aObj1;
  A1 aObj2;

public:
  B1()
  {
    try {
      vector<int> intVector;
      cout << intVector.at(5);
    }
    catch (exception& ex)
    {
      cout<<"Insidde B1's catch" << endl; 
    }

  }
  void BMemFunc()
  {
    vector<int> intVector;
    cout << intVector.at(5);
  }

};


int main()
{

  B1 objB;
  
  return 0;
}