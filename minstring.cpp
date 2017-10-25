#include <iostream>
using namespace std;

bool checkRequirement(int requirement[]) {
	for (int i = 0; i < 256; i++) {
		if (requirement[i] > 0) {
			return false;
		}
	}
	return true;
}

void minSubstring(char s[], char t[]) {
	int requirement[256]  = {0};
	int i = 0;
	int numGreaterZero = 0;
	while (t[i] != '\0') {
		if ( requirement[t[i]] == 0) {
			numGreaterZero++;
		}
		requirement[t[i]]++;
		i++;
	}
	int start = 0;
	int next = 0;
	int bestLength = INT_MAX;
	int bestStartIndex = -1;
	while (s[next] != '\0') {
		while (!checkRequirement(requirement)) {
			requirement[s[next]]--;
			next++;
		}

		while (checkRequirement(requirement)) {
			requirement[s[start]]++;
			start++;
		}
		int currentOptionStart = start - 1;
		int currentOptionLength = next - currentOptionStart;
		if (currentOptionLength < bestLength) {
			bestLength = currentOptionLength;
			bestStartIndex = currentOptionStart;
		}
	}
	for (int i = 0; i < bestLength;i++) {
		cout << s[i + bestStartIndex];
	}
	cout << endl;
}

int main() {
	char s[] = "this is a test string";
	char t[] = "tist";
	minSubstring(s, t);
}
