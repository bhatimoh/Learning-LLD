#include<bits/stdc++.h>
using namespace std;
//Getter and Setter way of dealing with private members of class
class Person{
  public:
    string getName(){
      return name_;
    }
    void setName(string name){
      name_=name;
    }
    int getAge(){
      return age_;
    }
    void setAge(int age){
      age_=age;
    }
  private:
    int age_;
    string name_;
};
int main(){
  Person p1;
  p1.setAge(22);
  p1.setName("Mohnish");
  cout<<p1.getName()<<" ";
  cout<<p1.getAge()<<" "<<'\n';
  return  0;
}