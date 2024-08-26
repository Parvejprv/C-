/*  
Topic: 
==========
Hierarchical inheritance
-----------------------------
- 


*/

#include<iostream>
using namespace std;

class Human 
{
  protected:
  string name; int age;
  public:
  Human() {
  };

  Human(string name, int age){
    this->name=name;
    this->age=age;
  }

  void show() {
    cout << "Name: " << name << ", Age: " << age << endl;
  }
  void work() {
    cout <<"I am working here\n" << endl;
  }

};
class Student: public Human
{
  int roll_number, fees;

  public:
  Student(string name, int age, int roll_number, int fees): Human(name, age) {
    this->roll_number=roll_number;
    this->fees=fees;
  }

  void display() {
    cout <<name<<" "<<age<<" "<<roll_number<<" "<<fees<< endl;
  }
};
class Teacher: public Human
{
  int salary;

  public:
  Teacher(int salary, string name, int age)
  {
    this->salary=salary;
    this->name=name;
    this->age=age;
  }

  void showcase() {
    cout << name << " " << age << " " << salary << endl;
  }

};

int main() {
  Teacher ct2(81000, "Parvej alam", 25);
  ct2.showcase();


  return 0;
}


/*  
Output:-
-----------


*/
 