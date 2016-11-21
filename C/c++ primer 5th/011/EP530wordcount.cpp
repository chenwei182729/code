#include <iostream>
#include <map>
#include <set>
#include <string> 
using namespace std;
int main()
{
	set<string> exclude={"The","But","And","Or","An","A",
						"The","but","and","or","an","a" 
						};
	map<string,size_t> word_count;
	string word;
	while (cin >> word)
		if( exclude.find(word)==exclude.end() )
			++word_count[word];
	for(const auto &w:word_count)
		cout << w.first << " occurs " << w.second
		     << ((w.second > 1)? " times ":" time") << endl;
	return 0;
}

