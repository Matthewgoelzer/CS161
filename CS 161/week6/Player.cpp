/***************************************************
** Author: Matthew Goelzer
** Date: 2/7/2019
** Description: Stores stats for a given basketball player 
***************************************************/

#include <iostream>
#include <string>
#include "Player.hpp"

//Default contructor for Player
Player::Player()
{
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

//contructor for Player 
Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn)
{
	name = nameIn;
	points = pointsIn;
	rebounds = reboundsIn;
	assists = assistsIn;
}

//gets player name 
std::string Player::getName()
{
	return name;
}

//sets player points scored
void Player::setPoints(int pointsIn)
{
	points = pointsIn;
}

//gets player points
int Player::getPoints()
{
	return points;
}

//sets player rebounds
void Player::setRebounds(int reboundsIn)
{
	rebounds = reboundsIn;
}

//gets player rebounds
int Player::getRebounds()
{
	return rebounds;
}

//sets player assists
void Player::setAssists(int assistsIn)
{
	assists = assistsIn;
}

//gets player assists

int Player::getAssists()
{
	return assists;
}

//determines of one players total points is equal to another using boolean
bool Player::hasMorePointsThan(Player otherPlayer)
{
	int currentPlayerPoints = getPoints() + getRebounds() + getAssists();
	int otherPlayerPoints = otherPlayer.getPoints() + otherPlayer.getRebounds() + otherPlayer.getAssists();

	return currentPlayerPoints == otherPlayerPoints;
}


