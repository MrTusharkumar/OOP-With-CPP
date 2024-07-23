// types of Inhrtance 
// single Inhrtance
// multiple Inhrtance
// multi level Inhrtance
// hybrid Inhrtance 
// hierarchical Inhrtance

 // single inhertance 
/*
#include<iostream>
using namespace std;

class abc{
public:
int a,b;
void get(){
 cout<<"Enter the value  :";
 cin>>a>>b;                      
}
};

class xyz:public abc{
int c; 
public: void add(){
c = a+b;
cout<<c;
}

};

int main(){
xyz x1;
x1.get();
x1.add();
   return 0;
} */

// multple inhertance 
/* 
#include <iostream>
using namespace std;

class abc{
public:
int a ;
void get(){
 cout<<"Enter The Value Of a : ";
 cin>>a;
}
};    

class mno{
public: 
int b;
void get2(){
cout<<"Enter The Value of B : ";
cin>>b;
}
};

class xyz : public abc , public mno{
public:
int c ;
void add (){
c=a+b;
cout<<"\nThe Totals value of varible are : "<<c;
}
};
int main (){
xyz x1 ;
x1.get();
x1.get2();
x1.add(); 
return 0;
}                        
*/

// multi level inhertance 
/*
#include <iostream>
using namespace std;

class abc{
public:
int a,b;
void get(){
cout<<"Enter The Value : ";
cin>>a>>b;
}
};

class mno:public abc{
public: int c;
void add(){
c=a+b;
}
};
class xyz:public mno{
public:
void display(){
cout<<"The Sum of : "<<c;
}
};

int main(){
xyz x1;
x1.get();
x1.add();
x1.display(); 
return 0;
 
 }*/
 
 // hierorchical inhertance 
 /*
  #include <iostream>
  using namespace std;
 
  class abc{
  public: int a; 
  void get(){
  cout<<"Enter The value : ";
  cin>>a;
  }
  };
  
  class mno:public abc{
  public: 
  void square(){
  get();
  cout<<"Square of "<<a*a<<endl;
  }
  };
 
  class xyz: public abc{
  public:
  void cube(){
  get();
  cout<<"Cube of "<<a*a*a;
  }
  };
 
  int main(){
 mno m1;
 xyz x1;
 
 m1.square();
 
 x1.cube();  
   return 0;
   }
   */
    