

class Member
{
    string name;
    string ip;
public:
    Member();
    Member(string, string);
    string get_ip(){
        return this->ip;
    }
};