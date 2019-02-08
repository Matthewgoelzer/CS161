#pragma once
#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team
{
private:
	Player pointGuard;
	Player shootingGuard;
	Player smallForward;
	Player powerForward;
	Player center;

public:
	Team(Player p1, Player p2, Player p3, Player p4, Player p5);
	void setPointGuard(Player);
	Player getPointGuard();
	void setShootingGuard(Player);
	Player getShootingGuard();
	void setSmallForward(Player);
	Player getSmallForward();
	void setPowerForward(Player);
	Player getPowerForward();
	void setCenter(Player);
	Player getCenter();
	int totalPoints(Player p1, Player p2, Player p3, Player p4, Player p5);

};
#endif // !TEAM_HPP
