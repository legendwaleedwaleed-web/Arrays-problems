  #include<iostream>
  using namespace std ;
  void matrix(int arry[][3],int row_size){
  	for(int i=0;i<row_size;i++){
  		for(int j=0;j<3;j++){
  			cout<<"\n Enter the elements or number for the array "<<i<<":"<<j<<":";
			  cin>>arry[i][j];
			   }
	  }
	  int sum=0;
	  for(int i=0;i<row_size;i++){
	  	for(int j=0;j<3;j++){
	  	sum=sum+arry[i][j];
		  	
		  }
	  }
	  cout<<"\n These is the all sum of the rows and columns"<<sum;
  }
  
  int main(){
  	int size;
  	cout<<"\n Enter the size for row of an array :";
  	cin>>size;
  	int array[size][3];
  	matrix(array,size);
  	
  	return 0;
  }