// A class having property of another class
// human(parent)---> a) male(subclass/child); b) female(child)



#include<iostream>
using namespace std;

class parent_class{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return age;
    }

    int setWeight(int w){
        cout<<"mai set kar dunga"<<endl;
    }

};


// inheritence in public mode

class child_class: public parent_class{
    public:
    string color;
    void sleep(){
        cout<<"i am sleeping"<< endl;
    }
};






int main(){

    child_class object1;
    cout<< object1.age <<endl;
    cout<< object1.weight <<endl;
    cout<< object1.height <<endl;
    cout<< object1.color <<endl;


    return 0;
}


//mode of inheritence

// private mode of data can not be accessed


// parent class     child class         output


// pub               pub                pub
// pub               priv               priv
// pub               protected          protected

// protected         pub                protected
// protected         priv               private
// protected         protected          protected

// private           pub              cant access
// private           priv             cant access
// private           protected        cant access

// types of inheritence
// single


// multilevel


//



//