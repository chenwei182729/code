/*
*��ϰ8.1-8.2
*���ڣ�2015/7/21
*������������ϰ8.1����д����������һ��istream&����������ֵ����Ҳ��istream&���˺�����Ӹ������ж�ȡ���ݣ�ֱ�������ļ�������־ʱֹͣ��������ȡ�����ݴ�ӡ�ڱ�׼����ϡ������Щ�������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬��
*          ��ϰ8.2�����Ժ��������ò���Ϊcin��
*����;������������ 
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

istream& is_input(istream& in)
{
    auto old_state = in.rdstate(); //��ס���ĵ�ǰ״̬ 
    string s;
    while (in >> s)               //�����ļ�������־��ʱֹͣ 
       cout << s << " ";          //��׼��� 
    in.setstate(old_state);       //�ָ���Ϊԭ��״̬ 
    return in;
 } 

 int main()
 {
    is_input(cin);
    int x;
	cin>>x;
	cout<<"x:"<<x<<endl; 
    return 0;
 }
