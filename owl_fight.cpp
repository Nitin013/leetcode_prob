#include <iostream>
#include<vector>
using namespace std;


int find(int val,vector<int> &vec){ // function that tell about the leader of the independent disjoint set
      while(vec[val]!=val){
	      val=vec[val];
      }
      return val;
}


int main() {
	int num,m;
	cin >> num>>m;    //Reading input from STDIN
	vector<int> vec(num+1);
	for(int j=0;j<=num;j++){
        vec[j]=j;
	}
	for(int i=0;i<m;i++){
		int val1,val2;
		cin>>val1>>val2;
        val1=find(val1,vec);
		val2=find(val2,vec);
        if(val1>val2){
			vec[val2]=val1;
		}
		else{
			vec[val1]=val2;
		}
	}
	int query;
	cin>>query;
	while(query){
		int val1,val2;
		cin>>val1>>val2;
		int temp1=val1,temp2=val2;
		val1=find(val1,vec); 
		val2=find(val2,vec);
		if(val1==val2){
			cout<<"TIE"<<endl;
		}
		else if(val1>val2){
			cout<<temp1<<endl;
		}
		else{
			cout<<temp2<<endl;
		}
		query--;
	}
}
