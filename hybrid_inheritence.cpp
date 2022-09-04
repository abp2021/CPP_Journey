// combination of more than one type of inheritence


#include<iostream>
using namespace std;

class Animal{
    public:
    int age = 5;
    int weight;

};

class child1: public Animal{
    public:
    void fun1(){
        cout<<"mai hun child1"<<endl;
    }
};

class child2: public Animal{
    public:
    void fun2(){
        cout<<"mai hun child2"<<endl;
    }

};


int main(){
Animal obj1;
obj1.age;


child1 obj2;
obj2.age;
obj2.fun1();


child2 obj3;
obj3.age;
obj3.fun2();



return 0;
}