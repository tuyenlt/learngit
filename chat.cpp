#include <iostream>
#include <string>

using namespace std;



class Chat
{
    string name;
    string topic;
    string host;
    int member;
public:
    Chat() {
        this->name = "none";
        this->topic = "none";
        this->host = "none";
        this->member = 0;
    }
    Chat(string name, string topic, string host, int member);
    ~Chat();
    string getName();
    string getHost();
    void render();
    void update();
};


int main()
{   cout << "dfdsfd" << endl;
    dasdsafsa
    return 1;
}