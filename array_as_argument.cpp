  #include<iostream>
  using namespace std;
  void showvalues(int[],int);
  
  int main(){
  	int size=4;
  	int number[4]={10,20,30,40};
  	showvalues(number,size);
  	
  	return 0;
  }
   void showvalues(int num[],int siz ){
   	for(int index=0;index<siz;index++){
   		cout<<num[index]<<" ";
	   }
   }