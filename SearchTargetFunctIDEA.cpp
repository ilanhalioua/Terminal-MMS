#include<iostream>;
#include<vector>;


using namespace std;
int where(int target, vector <int>vect);

int main(){
	
	vector <int> vect = {1,3,4,5,6,7,2};
	cout << "ENTER A NUMBER TO FIND : " << endl;
	int num;
	cin >> num;
	if(where(num,vect) >=0){
		cout << "the number exists in the vector " << endl;
		cout << "It is at index >> " << where(num,vect);
	}else{
		cout << "The number doesnt exist" << endl;
	}
}
int where(int target,vector<int> vect){
	int Bfound = 0;
	int i = 0;
	int pos = -1;
	while((Bfound == 0) && (i<vect.size())){
		if(vect[i] == target){
			Bfound = 1;
			pos = i;
		}else{
			i++;
		}
	}
	return pos;
}
