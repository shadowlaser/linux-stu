#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
	
	const int elem_size=10;
	vector<int> ivec(elem_size);
	int ia[elem_size];
	for (int i = 0; i < elem_size; ++i)
	{ 
		/* code */
		ia[i]=ivec[i];
	}
	return 0;
}

void vector1(){
  const vector<int> *pvec;
  vector<int>::const_iterator c_iter=pvec->begin();
}