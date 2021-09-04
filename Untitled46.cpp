#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;
    ifstream ini_file (" file1.pdf");
    ofstream out_file ("file2.pdf");

    if(ini_file && out_file)
    {

        while(getline(ini_file,data))
	   {
            out_file << data << "\n";
        }

    } else 
    {
        printf("Cannot read File");
    }

    ini_file.close();
    out_file.close();

    return 0;
}
