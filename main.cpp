#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
  int periods;
  int teams;
  vector <vector<int> > table;

  cout<<"How many competitors? ";
  cin>>teams;
  cout<<"How many scoring periods? ";
  cin>>periods;

  if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
      teams > MAX_TEAMS || periods > MAX_PERIODS )
  {
    cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
    cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
    return 0;
  }
  else
  {
   //make scoreboard and fill it with zeros
   cout<<"SCOREBOARD"<<endl;
  table.resize(teams);
  for (int r=0; r<table.size();r++)
  {
    table[r].resize(periods);
  }

  for (int r=0; r<table.size();r++)
  {
   cout<<"Player "<<r+1<<": ";
    for (int c=0; c<table[r].size();c++)
    {
    table[r][c]=0;
    cout<<table[r][c]<<"|";
    }
  cout<<endl;
  }

  }
   //once created, display the scoreboard
  
  return 0;
}
