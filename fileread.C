//=======================================================
// Program Name: fileread.C
// By:		LT
// Purpose:	A C++ program that reads the contents 
// 		of a file
//=======================================================
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
	ifstream file("testfile");
	char record_in[256];
	if (file.fail())
		cout << "Error opening file.\n";
	else
	{
		while (!file.eof())
		{
		  file.getline(record_in, sizeof(record_in));
		  if (file.good())
			cout << record_in << endl;
		}
	}
}
