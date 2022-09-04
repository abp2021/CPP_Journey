#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speaking(){
        cout<<"i am speaking"<< endl;
    }
};

class dog: public Animal{

};

class daburman: public dog{

};

int main(){

daburman d2;
dog d;
d.speaking();
d2.speaking();

    return 0;
}