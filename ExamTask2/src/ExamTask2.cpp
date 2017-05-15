//============================================================================
// Name        : ExamTask2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Director.h"
#include "Movie.h"
#include "VideoLibrary.h"

int main() {

Director director1("Ivan", "Mihaylov", "small");
Director director2("Asen", "Karaivanov", "much");
Director director3("Anna", "Ferucci", "not");

Movie movie1("Assault", "Action", director1, "12+", 112);
Movie movie2("Times", "Action", director2, "16+",113);
Movie movie3("Assaut", "Action", director3, "18+",114);
Movie movie4("Mouses", "Documentary",director1, "all ages",115);
Movie movie5("Love with bennefits","Drama",director3, "all ages",116);
Movie movie6("Killer","Thriller",director1,"18+",117);
Movie movie7("Blood","Thriller",director2,"18+",117);

VideoLibrary vLibrary;

vLibrary.addMovie(movie1);
vLibrary.addMovie(movie2);
vLibrary.addMovie(movie3);
vLibrary.addMovie(movie4);
vLibrary.addMovie(movie5);
vLibrary.addMovie(movie6);
vLibrary.addMovie(movie7);

vLibrary.numberFilmsByGenre();
cout << "/////////////" << endl;
vLibrary.searchByName("Times");
cout << "/////////////" << endl;
vLibrary.printInfo();
cout <<endl;







	return 0;
}
