/*
 * Player.h
 *
 *  Created on: 31 мар. 2021 г.
 *      Author: TEN
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <memory>
#include <cmath>
#include "Map.h"

static constexpr double Pi = acos(-1.);

class Player
{
public:
	static constexpr double DEFAULT_STEP = 0.04;
	static constexpr double DEFAULT_TURN = Pi / 70;
	static constexpr double DEFAULT_FOV = Pi / 2.6;
protected:
	std::shared_ptr<Map> _map;
	double _x, _y, _dir;
public:
	Player(std::shared_ptr<Map> & map);

	void reset(); // Старт

	double dir() const { return _dir; }
	double x() const { return _x; }
	double y() const { return _y; }

	void walk_forward(double dist = DEFAULT_STEP);
	void walk_backward(double dist = DEFAULT_STEP);
	void shift_right(double dist = DEFAULT_STEP);
	void shift_left(double dist = DEFAULT_STEP);
	void turn_right(double angle = DEFAULT_TURN);
	void turn_left(double angle = DEFAULT_TURN);
};

#endif /* PLAYER_H_ */
