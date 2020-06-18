#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string q;
    cin>>a;
    cin>>b;
    getline(cin>>ws, q);
    cout<<a+i<<endl;
    cout<<fixed<<setprecision(1)<<b+d<<endl;
    cout<<s+q;   
    return 0;
    }
