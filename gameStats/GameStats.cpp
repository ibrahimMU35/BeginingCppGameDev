#include <iostream>

//game stats


using namespace std;

int main() {

	int score;

	double distance;

	char playAgain;

	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;

	distance = 1200.76;

	playAgain = 'y';

	shieldsUp = true;

	lives = 3;

	aliensKilled = 10;

	double engineTemp = 6572.89;


	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain:" << playAgain << endl;

	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "\nhHow much fuel?" << endl;
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	return 0;





}