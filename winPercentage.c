/**
* Author: Andrew Anderson
* Date: 9/11/2019
* This program estimates a baseball team's win/loss ratio for an entire season
* based on the runs scored and runs allowed
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
  double runsScored, runsAllowed, gamesPlayed, gamesWon, p, winPercentage, predictedWins, predictedLosses, error;

  printf("Enter the amount of runs scored: ");
  scanf("%lf", &runsScored);
  printf("Enter the amount of runs allowed: ");
  scanf("%lf", &runsAllowed);
  printf("Enter the amount of games played: ");
  scanf("%lf", &gamesPlayed);
  printf("Enter the amount of games your team won: ");
  scanf("%lf", &gamesWon);

  printf("p value  Win Percentage Predicted Wins  Predicted Loss  Error\n");
  p = 2.00;
  winPercentage = (pow(runsScored, p)/(pow(runsScored, p)+pow(runsAllowed, p)));
  predictedWins = winPercentage*gamesPlayed;
  predictedLosses = (1-winPercentage)*gamesPlayed;
  error = predictedWins-gamesWon;
  printf("2.00     %.2lf          %.0lf             %.0lf              %.0lf\n", winPercentage*100, predictedWins, predictedLosses, error);
  p = 1.83;
  winPercentage = (pow(runsScored, p)/(pow(runsScored, p)+pow(runsAllowed, p)));
  predictedWins = winPercentage*gamesPlayed;
  predictedLosses = (1-winPercentage)*gamesPlayed;
  error = predictedWins-gamesWon;
  printf("1.83     %.2lf          %.0lf             %.0lf              %.0lf\n", winPercentage*100, predictedWins, predictedLosses, error);
  p = 1.5*(log((runsScored+runsAllowed)/gamesPlayed))/log(10)+0.45; //exponent in the win percentage formula
  winPercentage = (pow(runsScored, p)/(pow(runsScored, p)+pow(runsAllowed, p)));
  predictedWins = winPercentage*gamesPlayed;
  predictedLosses = (1-winPercentage)*gamesPlayed;
  error = predictedWins-gamesWon;
  printf("%.2lf     %.2lf          %.0lf             %.0lf              %.0lf\n", p, winPercentage*100, predictedWins, predictedLosses, error);
  p = pow(((runsScored+runsAllowed)/gamesPlayed), 0.287); //using a different formula to calculate
  winPercentage = (pow(runsScored, p)/(pow(runsScored, p)+pow(runsAllowed, p)));
  predictedWins = winPercentage*gamesPlayed;
  predictedLosses = (1-winPercentage)*gamesPlayed;
  error = predictedWins-gamesWon;
  printf("%.2lf     %.2lf          %.0lf             %.0lf              %.0lf\n", p, winPercentage*100, predictedWins, predictedLosses, error);
  return 0;
}
