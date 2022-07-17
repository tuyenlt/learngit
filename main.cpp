#include <iostream>
#include <string>
using namespace std;

class people
{
protected:
    string name;
    int age;
    int iq;
public:
    people() : name("none"), age(0), iq(0) {};
    people(string name, int age, int iq) : name(name), age(age), iq(iq) {};
    void get_info()
    {
        cout << "-------------------" << endl;
        cout << this -> name << endl;
        cout << this -> age << endl;
        cout << this -> iq << endl;
        cout << "-------------------" << endl;
    }
};

class girl : public people
{
    int hot_level;
    int boobs;
public:
    girl(string name,int age,int iq,int hot_level, int boobs) : people(name,age,iq) , hot_level(hot_level), boobs(boobs) {};
    void get_info()
    {
        people::get_info();
        cout << this-> hot_level << endl;
        cout << this-> boobs << endl;
        cout << "---------------------" << endl;
    }
};



int main()
{
    girl hot_chick("linh",18,90,100,2);
    hot_chick.get_info();
    return 1;
}