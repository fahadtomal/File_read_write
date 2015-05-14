// ADVANCE :
// USER INPUT(AS STRING) FROM THE KEYBOARD,
// FOR WRITE A FILE .


// KEYBOARD INPUT , FOR WRITE A FILE.


#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string a;
    cin>>a;   // USER INPUT


    ofstream tomal_w;
    tomal_w.open("tomal.txt");
    tomal_w<<a;
    tomal_w.close();
    return 0;

}
