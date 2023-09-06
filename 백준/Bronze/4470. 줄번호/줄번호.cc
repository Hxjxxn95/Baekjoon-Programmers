#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
	int n;
	cin >> n;
	// cin을 사용하면 입력버퍼에 '\n'이 남아있다.
	// getline을 사용할 때 한칸 띄어지는 오류가 발생하기 때문에 
	// cin.ignore()로 입력 버퍼를 비운다.
	cin.ignore();

	int i = 1;
	while (n--)
	{
		string s;
		getline(cin, s);

		cout << i << ". " << s << "\n";
		i++;
	}

	return 0;
}


