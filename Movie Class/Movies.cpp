/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"
#include "Movie.h"

 /*************************************************************************
    Movies no-args constructor
**************************************************************************/
Movies::Movies() {
}

/*************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies() {
    delete this;
}

  /*************************************************************************
    add_movie expects the name of the move, rating and watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    Movie temporaryMovie{name,rating,watched};
    for(int i = 0; i < this->movies.size(); i++){
        if(temporaryMovie.get_name() == movies.at(i).get_name()){
            return false;
        }
    }
      movies.push_back(temporaryMovie);
      temporaryMovie.~Movie();
      return true;
    // you implement this method
}

 /*************************************************************************
    increment_watched expects the name of the move to increment the
    watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
bool Movies::increment_watched(std::string name) {
    int index = -1;
     for(int i = 0; i < movies.size(); i++){
         if(name == movies.at(i).get_name()){
             index = i;
             break;
         }
     }
     if(index == -1){
         return false;
     } else{
         movies[index].increment_watched();
         return true;
     }
}

/*************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
void Movies::display() const {
    if(movies.empty()){
        std::cout << "Your movies collection is empty";
    }else{
        std::cout << "Your movie list is: ";
        for(int i = 0; i < movies.size(); i++){
            movies.at(i).display();
        }
    }

}