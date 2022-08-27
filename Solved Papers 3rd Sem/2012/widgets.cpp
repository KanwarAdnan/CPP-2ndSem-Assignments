//        The copy constructor will be called 5 times.

#include <iostream>
using namespace std;

class Widget{
    public:
        Widget(){}
        Widget (const Widget& obj){
            cout << "copy" << endl;
        }
};

Widget f(Widget u){
    Widget v(u);
    Widget w = v;

    return w;
}


int main(){
    Widget x;
    Widget y = f(f(x));
    return 0;
}
