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

int main(){

dog d;
d.speaking();

    return 0;
}