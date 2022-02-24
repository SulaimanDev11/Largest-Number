#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	system("color 0F");
	const int s=5;
	int arr[s][s],sum=0;
	
	for(int i=0;i<s;i++){
		
		for(int j=0;j<s;j++){
			cout<<"Enter limit ["<<i+1<<"]["<<j+1<<"] :";
			cin>>arr[i][j];
			if(arr[i][j]>sum){
				sum=arr[i][j];
			}
		}
	}
	cout<<"\n\n";
	for(int i=0;i<s;i++){
		
		for(int j=0;j<s;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	cout<<"\n\nThe Largest Number is: "<<sum<<endl;
	
	return 0;
}
