#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
//////////////////////////////////////////////////////////////////////
enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
//////////////////////////////////////////////////////////////////////
class Card {
private:
	int number;
	Suit suit;
	static int serial_num;
public:
	Card() :number(2), suit(clubs) {
		serial_num++;
	}
	Card(int n, Suit s) : number(n), suit(s) {
		serial_num++;
	}
	void set(int n, Suit s) {
		number = n;
		suit = s;
	}
	void display() const;
	bool isEqual(Card);
};

int Card::serial_num = 0;

void Card::display() const {
	if (number >= 2 && number <= 10)
		cout << number;
	else
		switch (number)
		{
		case jack:  cout << "J "; break;
		case queen:  cout << "Q "; break;
		case king:  cout << "K "; break;
		case ace:  cout << "A "; break;
		default:
			break;
		}
	switch (suit)
	{
	case clubs:    cout << static_cast<char>(42);		break;
	case diamonds: cout << static_cast<char>(43);		break;
	case hearts:   cout << static_cast<char>(45);		break;
	case spades:   cout << static_cast<char>(47);		break;
	default:
		break;
	}
}

bool Card::isEqual(Card c2) {
	return  (suit == c2.suit && number == c2.number) ? true : false;
}

//////////////////////////////////////////////////////////////////////
int main() {
	setlocale(0, "");
	const int SIZE = 52;
	Card deck[SIZE];
	cout << endl;
	for (int j = 0; j < SIZE; j++) {
		int num = (j % 13) + 2;
		Suit su = Suit(j / 13);
		deck[j].set(num, su);
	}
	cout << "Deck : " << endl;
	for (int i = 0; i < SIZE; i++) {
		deck[i].display();
		cout << " ";
		if (!((i + 1) % 13))
			cout << endl;
	}

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		int k = rand() % 52;
		Card temp = deck[i];
		deck[i] = deck[k];
		deck[k] = temp;
	}

	cout << "Rand Deck : " << endl;
	for (int i = 0; i < SIZE; i++) {
		deck[i].display();
		cout << " ";
		if (!((i + 1) % 13))
			cout << endl;
	}

	/*Card temp, chosen, prize;
	chosen.display();
	int positon;
	Card card1;
	card1.display();
	Card card2(jack, hearts), card3(ace, spades);
	card2.display();
	card3.display();
	prize = card3;

	temp = card3; card3 = card2; card2 = temp;
	temp = card1; card1 = card2; card2 = temp;
	temp = card3; card3 = card1; card1 = temp;

	prize.display();
	card1.display();
	card2.display();
	card3.display();*/

	system("PAUSE");
	return 0;
}
