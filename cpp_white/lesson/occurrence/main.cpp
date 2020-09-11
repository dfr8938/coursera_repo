#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;
	cin >> str;
	
	int flag = 0;
	int c = count(begin(str), end(str), 'f');
	int res = 0;
	if (c >= 2) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'f') {
				flag++;
				res = i;
				if (flag == 2)
					break;
			}
		}
		cout << res;
	}

	if (c == 0)
		cout << -2;
	else if (c == 1)
		cout << -1;

	cout << endl;

	return 0;
}
