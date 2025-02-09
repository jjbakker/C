#include <stdio.h>

int main(int argc, char *argv[]) {

	int distance = 100;
	float power =2.345f;
	double super_power = 5678.1234;
	char initial = 'A';
	char firts_name[] = "Jaap Jan";
	char last_name[] = "Bakker";

	printf("You are %d miles away\n", distance);
	printf("You have %f levels of power\n", power);
	printf("U have awesome %f superpower\n", super_power);
	printf("My name is %s %s\n", firts_name, last_name);

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at imaginary %f bugrate\n", bugs, bug_rate);

	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The universe has %ld bugs\n", universe_of_defects);

	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;

	printf("I care %d%%", care_percentage);

	return 0;

}



