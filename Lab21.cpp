#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct timeType {
	int hr;
	double min;
	int sec;
};

struct tourType {
	string cityName;
	int distance;
	double distanceKm;
	timeType travelTime;
	string countryName;
};

tourType destination;

int main()
{
	Country();
	destination.cityName = "Nottingham";
	destination.distance = 130;
	destination.travelTime.hr = 3;
	destination.travelTime.min = 15;
	destination.distanceKm = kmConverter(destination.distance);
	cout << destination.countryName << endl;
	cout << destination.cityName << endl;
	cout << destination.distance << " miles" << endl;
	cout << destination.distanceKm << " km" << endl;
	cout << destination.travelTime.hr << " hours and " << destination.travelTime.min << " minutes" << endl;
	return 0;
}

double kmConverter(double distanceM)
{
	distanceM = destination.distance*1.60934;
	return distanceM;
}

void Country() {
	cout << "Enter what country the tour is in: " << endl;
	cin >> destination.countryName;
	return;
}