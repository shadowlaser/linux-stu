

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc,char* argv[]){
	vector<string> svec;
	svec.reserve(1024);
	string text_word="ko";
	int i=1;
	ostringstream oss;
	//oss<<100;
	//cout<<oss.str()<<endl;
	while(i<100)
	{
	  //string temp;
	  //itoa(i,temp,10);
	  oss.str("");
	  oss<<text_word;
	  oss<<i;
	  cout<<"oss = " <<oss.str()<<endl;
	  //text_word.format();
	  svec.push_back(oss.str());
	  i++;
	  //oss=0;
	  //oss.close();
	}
	vector<string>::iterator it=svec.begin();
	for(;it!=svec.end();++it)
	  cout<<*it<<endl;
	//svec.resize(svec.size()+svec.size()/2);
	return 0;
}