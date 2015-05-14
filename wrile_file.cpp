// WRITE A TEXT FILE
// A TEXT DOCUMENT IS AUTOMATICALLY CREATED BY THIS PROGRAMME IN THE SAME FOLDER
// AND THE TEXT DOC.'S NAME WILL "tomal.txt"

// WRITE FILE WILL BE CREATED AUTOMATICALLY IN THE SAME FOLDER( WITH SOURCECODE ) , AFTER THE EXECUTION OF THE PROGRAMME

// IF WE WANT TO WRITE EXEL FILE EXTENSION WILL .xlsx


#include<iostream>
#include<fstream>      // HEADER FILE FOR READ AND WRITE A FILE
using namespace std;
int main()
{

    ofstream tomal_w;
    tomal_w.open("tomal.txt"); // FOR EXEL FILE , EXTENTION WILL .xlsx
    tomal_w<<"Hi,there !";     // THIS STRING WILL BE WRITED IN tomal.txt FILE
    tomal_w.close();
    return 0;

}
