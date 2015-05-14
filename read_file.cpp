// READ A TEXT FILE.
// THIS PROGRAMME READS A STRING FROM A TEXT FILE NAMED "tomal_read.txt",
// WHICH IS IN THE SAME FOLDER( IN WHICH SOURCE CODE IS ) .
// SO PRE CREATION OF "tomal_read.txt" IS REQUIRED.

// READ FILE IS PRE CREATED BEFORE EXECUTION OF THE PROGRAMME,AND MUST BE KEPT IN THE SAME FOLDER( WITH SOURCECODE).

// FOR READING EXEL FILE A .xlsx IS REQUIRED.
// FILE NAME IS USER DEFINED.


#include<iostream>
#include<fstream>        // HEADER FILE FOR READ AND WRITE A FILE
using namespace std;
int main()
{
    ifstream tomal_r;
    tomal_r.open("tomal_read.txt");  /* "tomal_read.txt"
                                        THE TEXT FILE
                                    */
    char output[100];
    if(tomal_r.is_open())
    {
        while(!tomal_r.eof())
        {
            tomal_r>>output;
            cout<<output;
        }
    }
    tomal_r.close();
    return 0;
}

