#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        bool found = false;
		if(array.size() > 0 && array[0].size() > 0)
		{
			int rows = array.size(),columns = array[0].size(),row = 0, column = columns - 1 ;
			while(row < rows && column >= 0)
			{
				int tmp = array[row][column];
				if(tmp == target)
				{
					found = true;
					break;
				}
				else if(tmp > target)
					--column;
				else
					++row;	
			}	
		} 
		return found;
    }
    //length为牛客系统规定字符串输出的最大长度，固定为一个常数
	void replaceSpace(char *str,int length) {
		if(str == NULL && length == 0)
			return ;
		int realLength = 0,numberOfBlank = 0;
		int idx = 0 ;
		while(str[idx]!='\0')
		{
			++realLength;
			if(str[idx]==' ')
				++numberOfBlank;
			++idx;
		}
		int newLength = realLength + numberOfBlank * 2;
		if(newLength > length)	return ;
		int indexOfOriginal = realLength;
		int indexOfNew = newLength;
		while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
		{
			if(str[indexOfOriginal] == ' ')
			{
				str[indexOfNew--] = '0';
				str[indexOfNew--] = '2';
				str[indexOfNew--] = '%';
			}
			else
			{
				str[indexOfNew--] = str[indexOfOriginal];
			}
			--indexOfOriginal;
		}
	}
};
int main(void)
{
	Solution solution;
	bool flag=solution.Find({{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,5}},7);
	cout << flag << endl;
	return 0;
}
