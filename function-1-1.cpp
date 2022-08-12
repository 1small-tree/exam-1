#include <iostream>
using namespace std;
void printer(int array[10][10])
{
	//printing the array
  for(int i=0;i<10;i++)
  {
  	for(int j=0;j<10;j++)
  	{
       cout<<array[i][j]<<" ";
  	}
  	
  	cout<<endl;
  }

}
int main()
{
  int array[10][10];
  for(int i=0;i<10;i++)
  {
  	for(int j=0;j<10;j++)
  	{
  		cin>>array[i][j];
  	}
  }
  printer(array);
}
