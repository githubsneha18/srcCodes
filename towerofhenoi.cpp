#include<iostream>

using namespace std;

void towerOfHenoi(int n, const char* first, const char* mid, const char* last)
{
	if (n==1) {
		cout<<"Move "<<n<<" from "<<first<<" to "<< last<<endl;
		return; 
	}
	towerOfHenoi(n-1, first, last, mid);
	cout<<"Move "<<n<<" from "<<first<<" to "<< last<<endl;
	towerOfHenoi(n-1, mid, first, last);
}

int main()
{
	int N;
	cout<<"Enter the level of tower:\t";
	cin>>N;
	towerOfHenoi(N, "first", "medium", "last");
	return 0;
}
