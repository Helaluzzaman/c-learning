#include<stdio.h>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
       
    int x;
    cin >> x;
    int salary;
    // salary = (x != 40)? ((x< 40)? (4*x + 100) : (4.5*x + 150)): 300;
    salary = (x< 40)? (4*x + 100): ((x == 40) ? 300: (4.5*x + 150));
    cout << salary;
    
    return 0;
}
