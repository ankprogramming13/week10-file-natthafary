#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
        /* code */
        string line;
        ofstream myfile ("example.txt");
        if (myfile.is_open())
        {
            myfile ( getline(myfile,line) )
            {
                cout << line << '\n';
            }
            myfile.close();
        }
        else cout << "Unable to open file";
        return 0;
}
