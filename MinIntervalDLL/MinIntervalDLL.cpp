// MinIntervalDLL.cpp : Определяет экспортированные функции для приложения DLL.
//
#include "stdafx.h"
#include <utility>
#include "MinIntervalDLL.h"
#include <vector>
#include <cmath>


double distance(point a, point b) {
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

double MinInterval(std::vector<point> vect) {
	
	double minInterval = distance(vect[0], vect[1]);

	for (int i = 0; i < vect.size(); i++) 
		for (int j = i + 1; j < vect.size(); j++) {
			double temp = distance(vect[i], vect[j]);
			if (temp < minInterval)
				minInterval = temp;
		}

	return minInterval;
}
