/*
 * Situation.hpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#ifndef SITUATION_HPP_
#define SITUATION_HPP_
#include "Humanoid.hpp"

class Situation {
public:
	Situation();
	virtual ~Situation();
	void fight(Humanoid *, Humanoid * );
	void setUpFight(Humanoid *, Humanoid *);
};

#endif /* SITUATION_HPP_ */
