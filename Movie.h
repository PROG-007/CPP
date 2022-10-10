#include <string>
#include <iostream>
#pragma once

class Movie
{
private:
	std::string name{ "None" };
	std::string rating{ "None" };
	double watched{ 0 };	

public:
															//3 args contructor
	Movie(std::string moviename, std::string movierating, double timeswatched)
		:name{ moviename }, rating{ movierating }, watched{ timeswatched }{}

	Movie(std::string moviename, std::string movierating)//2 args contructor
		:Movie(moviename, movierating, 0){}
	
	Movie(std::string moviename)//1 args contructor
		:Movie{moviename, "None", 0}{}

	Movie(){}// No args

	Movie(const Movie& source)//Copy contructor
		:name{ source.name }, rating{ source.rating }, watched{ source.watched }{}

	~Movie(){} // Destructor

	//getters
	std::string getname()
	{
		return name;
	}
	std::string getrating()
	{
		  return rating;
	}
	double getwatched()
	{
		 return watched;
	}

	//setters
	void incrementwatched()
	{
		watched += 1;
	}
};

