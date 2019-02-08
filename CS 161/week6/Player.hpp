#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>

class Player
{
private:
	std::string name;
	int points;
	int rebounds;
	int assists;

public:
	Player();
	Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn);
	std::string getName();
	void setPoints(int);
	int getPoints();
	void setRebounds(int);
	int getRebounds();
	void setAssists(int);
	int getAssists();
	bool hasMorePointsThan(Player);

};
#endif 
