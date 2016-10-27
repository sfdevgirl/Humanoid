/*
 * GoodSuper.cpp
 *
 *  Created on: Oct 20, 2016
 *      Author: linuxuser
 */

#include "GoodSuper.hpp"

GoodSuper::GoodSuper() {
	// TODO Auto-generated constructor stub
	rank = 2;
}

GoodSuper::~GoodSuper() {
	// TODO Auto-generated destructor stub
}

void GoodSuper::goodAct(){

}

string GoodSuper::whoami(){


	return "GoodSuper";
}

int GoodSuper::getRank(void){
	return rank;
}
