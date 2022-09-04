#include<iostream>
using namespace std;


// most of time we can use overloading to make others Chutiya.
// compile time --  static
// runtime -- dynamic polymorphism --> method overriding.


class A {

    public:
    void sayHello() {
        cout << "Hello Love Babbar" << endl;
    }

    int sayHello(char name) {
        cout << "Hello Love Babbar" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

class B {
    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
       int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

class Animal {
    public:
    void speak() {
        cout << " i speak nonsense "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << " mai to bhow-bhow Barking " << endl;
    }


};



int main() {

    Dog obj;
    obj.speak();





    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    obj1();








/*
    A obj;
    obj.sayHello();
    */


    return 0;
}