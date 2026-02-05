  #include<iostream>
  using namespace std;
  int main(){
  	int n=10,i;
  	int number;
  	int arry[n]={1,5,6,7,8,9,2,3,4,8};
  	for(i=0;i<1;i++){
  		cout<<"\n Enter the numbers from 0 to 30 :";
  		cin>>number;
	  }
  	bool target=true;
  	bool wrong=false;
  	if(arry[n]==number){
  		cout<<"\n Target has been find :"<<target;
	  }
  	else if(arry[n]!=number) {
  			cout<<"\n Target has been wrong try again bro  :"<<wrong;
	  }
  	
  	
  	
  	
  	
  	
  	return 0;
  }