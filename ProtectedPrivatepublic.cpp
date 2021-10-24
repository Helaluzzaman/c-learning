#include<iostream>
using namespace std;
class base{
    private: 
        int privatev;
    public :
        int publicv;
    protected:
        int protectedv;
    public : 
        
    base(int a,  int b, int c){
        privatev = a;
        publicv = b;
        protectedv = c;
    }
    void setPrivatev(int a){
        privatev = protectedv;
    }
    int getPrivetev(){
        return privatev;
    }
    int getProtectedv(){
        return protectedv;
    }

};

int main(int argc, char const *argv[])
{
    base myval(1, 2 , 3) ;
    myval.setPrivatev(5);
    cout << myval.getPrivetev() << "\t"<< myval.publicv << "\t" << myval.getProtectedv() ;

    return 0;
}
