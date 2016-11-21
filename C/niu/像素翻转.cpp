#include <iostream> 
#include <vector>
using namespace std; 
class Transform {
public:
  
    vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
		if(n == 0 || n == 1) return mat;
		
		for(int i=0;i<n;i++){
			for(int j = 0;j<i;j++){
				swap(mat[i][j],mat[j][i]);//¶Ô½ÇÏß»¥»» 
			}
		}
		//¾ØÕó·­×ª
		for(int i=0;i<n/2;i++){
			for(int j=0;j<n;j++){
				swap(mat[j][i],mat[j][n-i-1]);
			}
		} 
		
		return mat;
    }
};
int main()
{
	Transform Tra;
	vector<vector<int> > vec_ii=Tra.transformImage({{1,2,3},{4,5,6},{7,8,9}},3);
	for(auto it=vec_ii.begin();it!=vec_ii.end();it++){
		for(auto it2 = it->begin();it2!=it->end();it2++){
			cout << *it2 <<" ";
		}
		cout << endl;
	}
	
	return 0;
}
