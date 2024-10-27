// pointers arithmetic 

int *p; 
int x = 10;
int *p = &x;

int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr; 
cout<<*ptr<<endl;
ptr++; 
cout<<*ptr<<endl;
cout<<ptr<<endl;
cout<<arr<<endl;

ptr += 2; 
ptr -= 1; 

int *start = &arr[0];
int *end = &arr[4];
cout<<start<<endl;
cout<<end<<endl;
int diff = end - start;
cout<<diff<<endl;

ptr = &arr[0];
for (int i = 0; i < 5; i++) {
    cout<<*(ptr+i)<<endl; 
}

















