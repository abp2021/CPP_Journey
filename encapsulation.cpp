// wrapping up data members and functions.
// fully encapsulated class :--all members private.
// advantage of encapsulation:--
// 1)information hiding/data hiding.
// 2) if we want we can mark read only by get method
// 3) we can change as well by making set method.
// 4) code reusability
// 5) unit testing


#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return age;
    }
};






int main(){

student first;
cout<<"theek se chal rha hun"<< endl;


    return 0;
}
