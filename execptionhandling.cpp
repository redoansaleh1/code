#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

vector<double> determineNetRunRate(int team1Run, double team1OverPlayed, int team2Run, double team2OverPlayed)
{
    vector<double> netRunRateOftwoTeams;
    double runRateOfTeam1;
    double runRateOfTeam2;
    runRateOfTeam1 = team1Run / team1OverPlayed;
    runRateOfTeam2 = team2Run / team2OverPlayed;
    netRunRateOftwoTeams.push_back(runRateOfTeam1 - runRateOfTeam2);
    netRunRateOftwoTeams.push_back(runRateOfTeam2 - runRateOfTeam1);
    return netRunRateOftwoTeams;
}

int main()
{

    string nameOfTeam1;
    cout << "Name of first Team: ";
    cin >> nameOfTeam1;
    int runScoredByTeam1;
    cout << "Run scored by first team: ";
    cin >> runScoredByTeam1;
    double overPlayedByTeam1 = 20;
    cout << "Over played by first team: ";
    cin >> overPlayedByTeam1;
    cout << endl;

    string nameOfTeam2;
    cout << "Name of second Team: ";
    cin >> nameOfTeam2;
    int runScoredByTeam2;
    cout << "Run scored by second team: ";
    cin >> runScoredByTeam2;
    double overPlayedByTeam2 = 20;
    cout << "Over played by second team: ";
    cin >> overPlayedByTeam2;
    cout << endl;

    vector<double> netRunRateOftwoTeams = determineNetRunRate(runScoredByTeam1, overPlayedByTeam1, runScoredByTeam2, overPlayedByTeam2);
    cout << "Net run rate of " << nameOfTeam1 << " " << netRunRateOftwoTeams[0] << endl;
    cout << "Net run rate of " << nameOfTeam2 << " " << netRunRateOftwoTeams[1] << endl;

    return 0;
}