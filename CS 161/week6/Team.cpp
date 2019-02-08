/******************************************************
** Author: Matthew Goelzer
** Date: 2/7/2019
** Description: makes a team and provides stats for each team member and sums players total points 
******************************************************/

#include <iostream>
#include <string>
#include "Team.hpp"

//constructor setting each player to a postion in order given
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
	pointGuard = p1;
	shootingGuard = p2;
	smallForward = p3;
	powerForward = p4;
	center = p5;
}

//sets point guard position
void Team::setPointGuard(Player p1)
{
	pointGuard = p1;
}

//gets point guard positon 
Player Team::getPointGuard()
{
	return pointGuard;
}

//sets shooting guard postion 
void Team::setShootingGuard(Player p2)
{
	shootingGuard = p2;
}

//gets shotting guard
Player Team::getShootingGuard()
{
	return shootingGuard;
}

//sets small forward postion
void Team::setSmallForward(Player p3)
{
	smallForward = p3;
}

//gets small forward
Player Team::getSmallForward()
{
	return smallForward;
}

//sets power forward postion
void Team::setPowerForward(Player p4)
{
	powerForward = p4;
}

//gets power forward
Player Team::getPowerForward()
{
	return powerForward;
}

//sets cetner position
void Team::setCenter(Player p5)
{
	center = p5;
}

//gets center
Player Team::getCenter()
{
	return center;
}

//sums all of points from players in the team 
int Team::totalPoints(Player p1, Player p2, Player p3, Player p4, Player p5)
{
	int p1Points = p1.getPoints() + p1.getRebounds() + p1.getAssists();
	int p2Points = p2.getPoints() + p2.getRebounds() + p2.getAssists();
	int p3Points = p3.getPoints() + p3.getRebounds() + p3.getAssists();
	int p4Points = p4.getPoints() + p4.getRebounds() + p4.getAssists();
	int p5Points = p5.getPoints() + p5.getRebounds() + p5.getAssists();

	int teamTotalPoints = p1Points + p2Points + p3Points + p4Points + p5Points;

	return teamTotalPoints;
}

