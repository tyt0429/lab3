#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
	int num,w,sum=0;
	vector <int> weight;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "failed opening!" << endl;
		exit(1);
	}
	inFile >> num ;
	for( int i=0; i<num ;++i)
        {	
		inFile >> w;
		weight.push_back(w);
        }
	sort(weight.begin(),weight.end());
	
	for( int i=num-1; i>2; --i)
	{
		sum+=weight.at(i);
	}
	ofstream outFile("stdout",ios::out);
	outFile << sum ;
	return 0;	
}
