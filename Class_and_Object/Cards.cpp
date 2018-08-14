#include <iostream>
using namespace std;
enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

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
	void display() const;
	bool isEqual(Card);
};

int Card::serial_num = 0;

void Card::display() const {
	
	cout << " serial_number -> " << serial_num << endl;
/*
	if (number >= 2 && number <= 10)
		cout << number;
	else
		switch (number)
		{
		case jack:  cout << "Jack "; break;
		case queen:  cout << "Queen "; break;
		case king:  cout << "King "; break;
		case ace:  cout << "Ace "; break;
		default:
			break;
		}
	switch (suit)
	{
	case clubs: cout << "Clubs " << endl;
		break;
	case diamonds: cout << "diamonds " << endl;
		break;
	case hearts: cout << "hearts " << endl;
		break;
	case spades: cout << "spades " << endl;
		break;
	default:
		break;
	}*/
}

bool Card::isEqual(Card c2) {
	return  (suit == c2.suit && number == c2.number) ? true : false;
}

int main() {
	Card temp, chosen, prize;
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
	card3.display();

	system("PAUSE");
	return 0;
}
