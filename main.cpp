#include <iostream>
#include <fstream> // ifstream
#include <string>

using namespace std;

int main()
{
    ifstream input_file;
    string years;

    cout << "\nPRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n\n";

    input_file.open("People.txt");

    while (getline(input_file, years))
        cout << years << endl;

    input_file.close();

    return 0;
}