/*
Title: Organism Population
File Name: orgPopulation.cpp
Programmer: Kason Steiner
Date: 11/2024
Write a program that will predict the size of a population of organisms.
The program should ask the user for the starting number of organisms,
their average daily population increase (as a percentage),
and the number of days they will multiply. A loop should display the size of the population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population.
Do not accept a negative number for average daily population increase.
Do not accept a number less than 1 for the number of days they will multiply.
*/  
#include <iostream>

using namespace std;
int main() {
  
  //whole numbers to be used for organism population
  double percentage = 0.0;
  int days = 0;
  int population = 0;
  int num = 2;
  int newPopulation = 0;
  
  do{
    cout << "Enter the starting number of organisms: ";
    cin >> population;
  } while(population < 2);
    
  do{
    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> percentage;
  } while(percentage < 0);

  do{
    cout << "Enter the number of days they will multiply: ";
    cin >> days;
  } while(days < 1);

  cout << "The size of the population for day 1 is " << population << endl;
 
  while (num <= days)
    {
     newPopulation = (population * (percentage/100 + 1));
      population = newPopulation;
    cout << "The size of the population for day " << num << " is " << newPopulation << endl;
      num++;
    }
return 0; 
}