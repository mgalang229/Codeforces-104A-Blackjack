#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// there are three main conditions:
	if ((n - 10 >= 1 && n - 10 <= 9) || (n - 10 == 11)) {
		// first, check if the card needed is between 1 and 9 
		// and also 11, since Ace handles 1 and 11
		// print 4 for every suit
		cout << 4;
	} else if (n - 10 == 10) {
		// second, if the needed card value is 10, then 
		// the possible options are: ten, jack, queen, king
		// it should be 16 since there are 4 suits for every card,
		// but since the current card is the queen of spades,
		// subtract 1 to make it 15
		cout << 15;
	} else {
		// third, no card can add up to the 'n'
		cout << 0;
	}
	cout << '\n';
	return 0; 
}
