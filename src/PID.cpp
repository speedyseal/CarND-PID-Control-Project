#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID():p_error(0.), i_error(0.), d_error(0.), Kp(0.), Ki(0.), Kd(0.) {}

PID::~PID() {}

void PID::Init(double inKp, double inKi, double inKd) {
	Kp = inKp;
	Ki = inKi;
	Kd = inKd;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;
}

double PID::TotalError() {
	return -(Kp * p_error + Kd * d_error + Ki * i_error);
}

