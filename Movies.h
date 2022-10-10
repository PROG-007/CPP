#include "Movie.h"
#include <vector>
#include <string>
#pragma once

class Movies
{

private:
std::vector <Movie> Movielst;

public:
    
    Movies(){}// No args
    ~Movies(){} // Destructor

     bool increment_watched(std::string name)
     {
       
    for(Movie movie : Movielst)
        {
            if(movie.getname() == name )
            {
                movie.incrementwatched();
                return true;
            }
            
        }
    return false;
}
  
     
     bool add_movie(std::string name, std::string rating, double watched)
    {
        {
    for(Movie movie : Movielst)
    {
        if (movie.getname() == name)
        {
           return false;
        }
        
    }
    Movie temp{name, rating, watched};
    Movielst.push_back(temp);
    return true;
}
    }
     void display()
     {
         for(Movie movie : Movielst)
        {
            std::cout << movie.getname() << " , " << movie.getrating() << " , "  << movie.getwatched() << std::endl;
        }
     }

};

