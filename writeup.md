# PID Controller

## Discuss the effects of P, I, and D coefficients.
The effects of P, I, D control response rate, steady state error, and stability respectively. P controls response rate and overall tracking. Derivative control depends on the update rate, and helps stabilize the tracking. If P is too high and D is too low, the steering angle can oscillate and if it's unstable, it can grow to wider and wider oscillations. Integral control helps to suppress steady state tracking error and drift but there does not seem to be much of that behavior in this simulator.

## tuning:
I manually tuned Kp, Ki, and Kd starting from Kp.
I started at Kp=1 to see what would happen. If it didn't track, I would increase Kp. If it is unstable, I would increase Kd to increase damping. I would monitor the CTE display and if it has trouble converging in steady state, I would increase Ki by small increments until the behavior is acceptible. When tweaking parameters, I like to change values by orders of magnitude, say, going from 1, to 10, or 0.1 to bracket stable and acceptible performing behavior. Then I can do a binary search, splitting each range by 2 in order to fine tune. I ended up with Kp = .5; Ki = 0.001; Kd = 10.; which tracks the reference path keeping the car on the road.