// Tao tap tin
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream file("D:\\INPUT.txt");
    ofstream output;
    ofstream outputFile("D:\\OUTPUT.txt");
    int n;
    int sum = 0;
    int tongchan = 1;
    int tongle = 1;
    
    while (file >> n ) 
	{
        sum += n;
        if (n % 2 == 0)
		{
            tongchan *= n;
        } 
		else 
		{
            tongle *= n;
        }
    }
    
    file.close();
    
    outputFile << "Tong cac so trong tap tin: " << sum << endl;
    outputFile << "Tich cac so chan: " << tongchan << endl;
    outputFile << "Tich cac so le: " << tongle << endl;
    
    return 0;
}
