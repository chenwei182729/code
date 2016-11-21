#include<iostream>
#include<vector>
#include<cstring>
using namespace std; 

class Clearer {
public:
    vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
        // write code here
        if(n == 0) return mat;
        bool rows[n],cols[n];
        int i,j;
        memset(rows,n,0);
        memset(cols,n,0);
        
        for(i = 0;i < n;++ i){
        	for(j = 0;j < n;++ j){
        		if(mat[i][j] == 0){
        			rows[i] = true;
        			cols[j] = true;
				}
			}
		}
		for(i=0;i<n;i++){
			if(rows[i]){
				//
				for(int k=0;k<n;k++){
					mat[i][k]=0; 
				} 
			}
		}
		for(j=0;j<n;j++){
			if(cols[j]){
				//
				for(int k=0;k<n;k++){
					mat[k][j]=0; 
				} 
			}
		}
		return mat;
    }
};
int main(void)
{
	Clearer Cle;
	vector<vector<int> > vec_ii=Cle.clearZero({{1,2,3},{0,1,2},{0,0,1}},3);
	
	for(auto it = vec_ii.begin();it!=vec_ii.end();++it){
		for(auto it1=it->begin();it1!=it->end();it1++){
			cout << *it1 << endl;
		}
	}
	return 0; 
} 
