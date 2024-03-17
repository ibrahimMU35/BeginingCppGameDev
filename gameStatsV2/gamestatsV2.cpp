#include <iostream>
//game stat_version_2.0
//demonstrate arithmetic operrations with varriables
using namespace std;
int main()
{
	unsigned int score = 5000;
	std::cout << "score: " << score << std::endl;

	//altering value of variable

	score = score + 100;
	std::cout << "score: " <<score<<std::endl;


	//combining assignment operator

	score += 100;
	std::cout << "score: " << score << std::endl;


	//increment operators
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;


	lives = 3;
	int bonus = ++lives * 10 ;
	cout << "lives , bonus =" << lives << "," << bonus << endl;
	
	//integer wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;
	return 0;

}