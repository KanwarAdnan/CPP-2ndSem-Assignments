// It will just print : OOP
#include <iostream>
using namespace std;

class Message{
protected:
    string msg;
public:
    string getMsg(){
        return msg;
    }

    void setMsg(string msg){
        this-> msg = msg;
    }
    
};

class SMS : public Message{
    string msg;
public:
    string getMsg(){
        return Message::msg;
    }
    void setMsg(string msg){
        Message::msg = this-> msg;
    }
};

int main(){
    Message *p_msg = new Message();
    p_msg -> setMsg("OOP");

    SMS *p_sms = new SMS();
    p_sms -> setMsg("Final Exam");

    cout << p_msg->getMsg();
    cout << endl << p_sms->getMsg();

    delete p_msg , p_sms;
}