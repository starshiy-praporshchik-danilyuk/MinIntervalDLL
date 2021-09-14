#pragma once
#include <vector>
#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

struct MATHLIBRARY_API point {
	int x;
	int y;
};

extern "C" MATHLIBRARY_API double MinInterval(std::vector<point> vect);