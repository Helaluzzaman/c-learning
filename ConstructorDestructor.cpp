#include<iostream>
using namespace std;

class base{
    public:
        base(){
            cout << "constructing base\n";
        }
        ~base(){
            cout <<"distracting base\n";
        }
};
class derived:base{
    public: 
        derived(){
            cout << "constructing derived\n";
        }
        ~derived(){
            cout << "destruction derived\n";
        }
};

int main(int argc, char const *argv[])
{
    derived myClass;
    
    return 0;
}
