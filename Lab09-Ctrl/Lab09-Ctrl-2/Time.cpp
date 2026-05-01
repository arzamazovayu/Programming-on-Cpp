#include <string>
#include "Time.h"
#include <fmt/core.h>
#include <iostream>

Time::ExTime::ExTime(std::string fn, std::string v) {
	Time::ExTime::funcName = fn;
	Time::ExTime::value = v;
}

Time::ExTime::ExTime(std::string fn, int v) {
	Time::ExTime::funcName = fn;
	Time::ExTime::value = v;
}

Time::Time() {
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Time::Time(int h, int m, int s) {
	if (s >= 60) {
		m += s / 60;
		s = s % 60;
	}

	if (m >= 60) {
		h += m / 60;
		m = m % 60;
	}

	if (h < 0) {
		throw Time::ExTime("hours in constructor Time ", h);
	}
	else {
		set_hours(h);
	}

	if (m < 0) {
		throw Time::ExTime("minutes in constructor Time ", m);
	}
	else {
		set_minutes(m);
	}
	
	if (s < 0) {
		throw Time::ExTime("seconds in constructor Time", s);
	}
	else {
		set_seconds(s);
	}
}

void Time::set_hours(int h) {
	Time::hours = h;
}

void Time::set_minutes(int m) {
	Time::minutes = m;
}

void Time::set_seconds(int s) {
	Time::seconds = s;
}

void Time::get_time() {
	fmt::print("{}:{}:{}\n", Time::hours, Time::minutes, Time::seconds);
}

Time Time::sum_time(Time time1, Time time2) {
	Time timeSum;
	timeSum.hours = time1.hours + time2.hours;
	timeSum.minutes = time1.minutes + time2.minutes;
	timeSum.seconds = time1.seconds + time2.seconds;

	if (timeSum.seconds >= 60) {
		timeSum.minutes += timeSum.seconds / 60;
		timeSum.seconds = timeSum.seconds % 60;
	}

	if (timeSum.minutes >= 60) {
		timeSum.hours += timeSum.minutes / 60;
		timeSum.minutes = timeSum.minutes % 60;
	}
	return timeSum;
}

