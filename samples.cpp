#include <iostream>

using namespace std;

int main()
{
     bool arr[100] = {false};
     arr[0]=arr[1]=true;
     int j=0;
     
     for (int i = 2; i< 100; i++) {
     	if(!arr[i]){
     		for (j=i*i; j<100;j++){
			 arr[i]=true;
		}
     		//cout << arr[i]<< endl;	
		}
		 
       if(arr[i]==0){
		
        cout << i << " ";
        }
       //cout << arr[i] << endl;
     }

     return 0;
}
