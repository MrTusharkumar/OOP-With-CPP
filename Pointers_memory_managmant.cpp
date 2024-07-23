// Pointers Memoery Mangament Topics
// 1. New and  delete operator
// 2. Pointer Arthimetic Operators
// 3. 1d Arrays using Pointer
// 4. 2d Arrays using Pointer
// 5. Void Pointer
// 6. Null pointers
// 7. Class & Object using Pointer
// 8. Pointers to derived class 

// #1 New and delete operator
/*
#include <iostream>
using namespace std;

int main()
{
    cout<<" allocation of memory using new operator. "<<endl;
    int *ptr = new int[10]{100,101,102,103,104,105,106,107,108,109};
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<" deallocation of memory using delete operator."<<endl;
    delete [] ptr ;
    ptr = nullptr; 
    cout<<ptr<<endl;
    cout<<*ptr;
    
    return 0;
} 
*/ 

// Pointer Arthimetic Operators
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr = ptr + 2;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr = ptr - 2;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;


    return 0;
} 
*/ 

/*
// 1d array using pointer   
#include <iostream>
using namespace std;

int main()
{
    int arr[5]= {1,2,3,4,5};
    int *ptr = arr ;
    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
} 
*/
// 2d array using pointer   
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *ptr = &arr[0][0];
    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 3; j++)
            {  
                cout<<*ptr<<endl;
                ptr++;  
            }
    }
    return 0;
}
*/

// Void Pointer 
/*
#include <iostream>
using namespace std;

int main()
{
    float x = 5.5;
    void  *ptr = &x;
    cout<<ptr<<endl;
    float *ptr2 = static_cast<float*>(ptr);
    
    cout<< *ptr2 <<endl;  
    return 0;
}
*/

// Null pointers
/*
#include <iostream>
using namespace std;

int main()
{
    int *ptr = 0;
    int *ptr2 = nullptr;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;
    return 0;
}
 */

// object & class using pointer
 /*
#include <iostream>
using namespace std;

class abc{
    int x;
    public: 
    void put(int a)
    {
        x = a;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
int main()
{
    abc a1;
    abc *ptr = &a1;
  // 1. Accessing members using dot(.) operator
  a1.put(6);
  a1.display();
  // 2. Accessing members using pointer
  ptr -> put(5);
  ptr -> display();
  // 3. Accessing members deferenceing (*) & (.) operators/
  (*ptr).put(4);
  (*ptr).display();    
    return 0;
}
*/



// Pointers to derived class
  /*
#include <iostream>
using namespace std;

class A{
    
    public: int x;
    void put(int a){
      x=a; }
      void display(){
        cout<<x<<endl;
      }
};

class B: public A{
    int y;
    public:
    void put1 (int a ,int b){
        x=a;
        y=b;
    }
      void display1(){
      cout<<x<<endl<<y;
      }
};
int main()
{ A a;
 A *aptr ;
 aptr = &a;
 aptr -> put(10);
 aptr -> display();
 B b;
 B *bptr;
 bptr =&b;
 bptr -> put(5);
 bptr -> display();
 bptr -> put1(15,8080);
 bptr -> display1();

    return 0;
}   
 */