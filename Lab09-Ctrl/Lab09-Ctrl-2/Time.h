#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>

class Time {
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time();

	Time(int, int, int);

	void set_hours(int);

	void set_minutes(int);

	void set_seconds(int);

	void get_time();

	Time sum_time(Time, Time);

	class ExTime {
	public:
		std::string funcName;
		std::string value;
		ExTime(std::string, std::string);
		ExTime(std::string, int);
	};

};