
#include <iostream>
void counter(int binario[5])
{
    for (int i=0; i<=4; i++)
    {
    	int m=0;
        if(binario[i]=0)
        {
		binario[i]=1;
	  }
        else if (binario[i]=1)
        {
		binario[i]=0;
		m=i+1;
		if (i<4)
           {
           	 counter(binario[m]);
		   }
        }
    }

using namespace std;
int main() {

}