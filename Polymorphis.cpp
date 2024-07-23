// Polymorphism
// 1. Virtual Function
// 2. Function Overloading
// 3. Operator Overriding
// 4. Unary Operator Overriding
// 5. Binary Operator Overriding

 
 // Runtime Polymorphism With Virtual Function
 // Virtual Function
 /*
#include <iostream>
using namespace std;

class A{
 public:
  virtual void display(){
   cout<<"Base Class"<<endl;
 } };

 class B:public A {
 void display (){
    cout<<"Derived Class"<<endl; 
 } 
 };

int main()
{
    A a;
    B b ;
    A *ptr ;
    ptr = &a;
    ptr->display();
    ptr = &b;
    ptr->display();
    
    return 0;
}

*/

// Function Overloading 
/*
#include <iostream>
using namespace std;
void display(){
    cout<<"Function Overloading 0"<<endl;
}

void display(int a){
    cout<<"Function Overloading 1 : "<<a<<endl;
}

void display(double a){
    cout<<"Function Overloading 2 : "<<a<<endl;
}

void display(int a, double b){
    cout<<"Function Overloading 3 : "<<a<<" "<<b<<endl;
}

int main()
{
    display();
    display(10);
    display(5.5);
    display(30,44.4); 
    return 0;
}

*/  
//Operator Overriding unary operator
// prefix and postfix
/*
#include <iostream>
using namespace std;

class abc{
int x;
public:
abc( int a ){
    x = a;
}
void operator ++(){
    ++x;
} 
void display(){
    cout<<"x = "<<x<<endl;
}

void operator ++(int){
    x++;
} 
};
int main()
{
    abc a(10);
    ++a;
    a.display();
    a++;
    a.display();
    return 0;
}
 */ 

// Operator Overriding binary operator
/*
#include <iostream>
using namespace std;

class complex {
public:
float real, img;
complex(float x,float y){
    real = x;
    img = y;
}
// return_type operator operator_name(argument_list)
  complex operator + (complex& obj) {  
 complex temp( temp.real = real + obj.real, temp.img = img + obj.img);
   return temp;
}};

int main()
{
     complex c1(1,3); 
     complex c2(2,3);
     complex c3 = c1 + c2;
    cout << "c3.real: " << c3.real << endl;
    cout << "c3.img: " << c3.img << endl;
    return 0;
} 
*/
 // Exception Handling 
 // try, catch, throw   
/*
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter 2 Integers Value : ";
    cin>>a>>b;
     try{
        if (b !=0 ) {cout<<a/b<<endl;}
       else {throw (b) ;}
       } 
    
      catch (int exp ) {cout<< "Divide By Zero Error : "<<b; }


    return 0;
    }

*/
/*
#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

void abc(int a) {
    for (int i = 1; i <= 3; i++) {
        try {
            cout << "Enter Any Number : ";
            if (cin >> a) { // Check if input was successful
                if (a > 1) {
                    throw a;
                } else if (a == 0) {
                    throw ' ';
                } else if (a < 0) {
                    throw -5.0;
                }
            } else {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear(); // Clear the error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            }
        } catch (char c) {
            cout << "Zero : " << c << endl;
        } catch (int n) {
            cout << "+ve Number : " << n << endl;
        } catch (double d) {
            cout << "Negative Number : " << d << endl;
        }
    }
}

int main() {
    int a;
    abc(a);
    return 0;
}

*/
// specifying the type of exception 
/* #include <iostream>
using namespace std;

void abc(int a) throw (int, char )
{
switch (a)
{
    case 1 : throw a; break;
    case 2 : throw 'a'; break;
   // case 3 : throw float 5.5; break; // error

}

}

int main()
{
    try {
        abc(1);
        abc(2);
        abc(3);
    }
        catch (int a){cout<<a<<endl;}
        catch (char a){cout<<a<<endl;}
    
    return 0;
}
*/


// function Templates
  
 /* 
#include <iostream>
using namespace std;


template <typename T> T abc (T a , T b) // Generic data type
{
    return (a>b) ? a:b   ; // ternary operator   
}


int main()
{
    cout<<abc <int>(10,20)<<endl;
    cout << abc <float>(10.5, 20.5) << endl;
    cout << abc <char>('a', 'b') << endl;
    return 0;
}  */

// Class Templates 
/*
#include <iostream>
using namespace std;
template <class T> class abc{
T x;
public: 

abc (T n) { x = n; } // constructor
T get () { return x; } // Member function    
T display () {cout<<"Value = "<<x<<endl ;  }
};

int main()
{
    abc <int> a(10);  // <--  a is object of class abc
    a.display();
    abc <float> b(10.5);
    a.display();
    b.display();
    
     return 0;
}
*/


// class Templates with multiple parameters
/* 
#include <iostream>
using namespace std;

template < class T, class U, class V = int >
class abc {
    T x1;
    U x2;
    V x3;
    public:
    abc(T a, U b, V c) {
        x1 = a;
        x2 = b;
        x3 = c;

        
    }
    
    T display()
{ cout<<"x1 = "<<x1<<endl;
  cout<<"x2 = "<<x2<<endl; 
  cout<<"x3 = "<<x3<<endl;
}
    
    

};


int main()
{   
  abc <float , char > obj1 (5.5, '5', 5);
  abc <float , char , bool > obj2 (5.5, '5', true);
 cout<<"Object 1 :"<<endl;
  cout<< obj1.display();
   cout<<"Object 2 :"<<endl;
  cout<< obj2.display();
  return 0;

}
*/