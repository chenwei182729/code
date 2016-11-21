#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//能通过，但是占用内存太大了 
void reOrderArray(vector<int> &array) {
    auto sz = array.size();
    vector<int> vec1,vec2;
    for(decltype(sz) i = 0 ; i < sz ; ++i){
        if(array[i] % 2 == 0){
            vec2.push_back(array[i]);
        }else{
            vec1.push_back(array[i]);
        }
    }
    for(decltype(sz) i = 0 ; i < vec1.size(); ++i){
        array[i] = vec1[i];
    }
    for(decltype(sz) i = 0 ; i < vec2.size();  ++i){
        array[vec1.size()+i] = vec2[i];
    }
    vec1.clear();
    vec2.clear();
}
int main(void)
{
	vector<int> array;
	for(int i=0;i<10;i++)
		array.push_back(i);
	auto sz = array.size();
	for(int i = 0 ;i < array.size();++i)
	{
		cout<<array[i] << " "; 
	} 
	cout << endl;
 	
  	reOrderArray(array); 
	for(int i = 0 ;i < array.size();++i)
	{
		cout<<array[i] << " "; 
	} 
	cout << endl;
	return 0;	
} 
