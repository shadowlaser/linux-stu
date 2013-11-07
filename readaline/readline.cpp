#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string replace();
int main()
{
	cout<<"input file name"<<endl;
	string filename;
	cin>>filename;
	ifstream infile(filename.c_str());
	string temp;
	while(getline(infile,temp))
	{
		signed int pos = (signed int)temp.find("include");
		if(pos>0)
		{
			cout<<pos<<endl;
			temp.replace(pos,7,"hello");
		}
		cout<<temp<<endl;
	}

	cout<<"end;"<<endl;
	return 0;
}
