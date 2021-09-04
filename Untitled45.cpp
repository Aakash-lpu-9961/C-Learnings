#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;
    ifstream infile("file1.txt");
    ofstream outfile("file2.txt");

    if(infile && outfile)
    {

        while(getdata(inifile,data))
	   {
            outfile<< data << "\n";
        }

    } else 
    {
        printf(" File reading error");
    }

    infile.close();
    outfile.close();

    return 0;
}
