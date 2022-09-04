// a class inheriting from multiple,
//classes as son inheriting from mom and dad as well.

#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void barking(){
        cout<<"i am bhow-bhow"<< endl;
    }
};

class human {
    public:
    string color;

    public:

    void speak(){
        cout<<"i bark more than animals"<<endl;
    }
};

class hybrid: public Animal, public human {

};


int main(){

hybrid object1;

object1.speak;
object1.barking;

    return 0;
}