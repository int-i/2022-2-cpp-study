#include <iostream>
using namespace std;

class Game {
public:
	Game(int player_num) {
		setPlayer_num(player_num);
	}

	virtual void genre() {
		cout << getPlayer_num() << " 인용 게임입니다.\n";
	}

	virtual int getPlayer_num() {
		return player_num;
	}

	virtual void setPlayer_num(int num) {
		this->player_num = num;
	}

private:
	int player_num;
};


class League_of_Legends : public Game {
public:
	League_of_Legends(int player_num) 
		: Game{ 2 } {
		setPlayer_num(player_num);
	}

	void genre() override {
		cout << getPlayer_num() << " 인용 RPG 게임입니다.\n";
	}

};

class Sudden_Attack : public Game {
public:
	Sudden_Attack(int player_num)
		: Game{ 2 } {
		setPlayer_num(player_num);
	}

	void genre() override {
		cout << getPlayer_num() << " 인용 FPS 게임입니다.\n";
	}

};

int main()
{
	Game player1(1);
	League_of_Legends player2(5);
	Sudden_Attack player3(8);

	player1.genre();
	player2.genre();
	player3.genre();

	return 0;
}