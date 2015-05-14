// THIS PROGRAMME READ STRING FROM A FILE AND WRITE THAT STRING
// INTO ANOTHER FILE.
// EXTENTION OF BOTH FILES IS SAME/DIFFERENT.


// READ FILE "tomal_read.txt" IS PRE CREATED BEFORE EXECUTION OF PROGRAMME;
// THAT TXT FILE MUST BE KEPT IN SAME FOLDER( WITH SOUECECODE ).
// BUT WRITE FILE -->> "tomal_final_output_file.txt" WILL BE CREATED
// INTO THE SAME FOLDER,
// AFTER THE EXEXCUTION OF THE PROGRAMME.

// EXAMPLE IS TEXT FILE.
// DIFFERENT FILE TYPE( SUPPOSE : EXCEL FILE ) CAN BE USED FOR READ AND WRITE.





#include<iostream>
#include<fstream>  // HEADER FILE FOR READ AND WRITE A FILE
using namespace std;
int main()
{
    ifstream tomal_r;
    tomal_r.open("tomal_read.txt"); // READ INTO TEXT FILE
    char output[100];
    if(tomal_r.is_open())
    {
        while(!tomal_r.eof())
        {
            tomal_r>>output;
        }
    }
    tomal_r.close();


    ofstream tomal_w;
    tomal_w.open("tomal_final_output_file.txt");
    tomal_w<<output;                              // WRITE INTO TEXT FILE
    tomal_w.close();
    return 0;
}

