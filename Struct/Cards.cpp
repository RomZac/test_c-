// представление игральных карт при помощи структуры
#include <iostream>
using namespace std;
//								// масти
//const int clubs = 0;			// треф
//const int diamonds = 1;		// буби
//const int hearts = 2;			// черви
//const int spades = 3;			// пики
//								 
enum Suit { clubs, diamonds, hearts, spades };
								//достоинства карт
const int jack = 11;			// валет
const int queen = 12;			// дама
const int king = 13;			// король
const int ace = 14;				// туз

struct  card{
	int number;
	Suit suit;
};

int main() {
	card temp, chosen, prize;
	int position;
	card card1 = { 7,clubs }; cout << "First card: 7 clubs" << endl;
	card card2 = { king, spades }; cout << "Second card: King spades" << endl;
	card card3 = { 2,diamonds }; cout << "Third card: 2 diamonds" << endl;

	prize = card1;

	temp = card1; card1 = card2; card2 = temp;
	cout << "Changed 1 and 2 cards" << endl;
	temp = card3; card3 = card2; card2 = temp;
	cout << "Changed 3 and 2 cards" << endl;
	temp = card1; card1 = card3; card3 = temp;
	cout << "Changed 1 and 3 cards" << endl;

	cout << "Where is first card? (1,2 or 3) :";
	cin >> position;
	switch (position)
	{
	case 1: chosen = card1; break;
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;
	default:
		break;
	}
	if (chosen.number == prize.number && chosen.suit == chosen.suit)
		cout << "Good work! You win!" << endl;
	else
		cout << "Sorry. You lose" << endl;

	system("PAUSE");
	return 0;
}