/*
An Application written in C++ to solve the league
management problem
By: GOGO, Tamunoomie/Thompson Onokpegu
Date: 20/01/2016
School: RIVERS STATE POLYTECHNIC, BORI
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
bool quit=false;
class LeagueEquation {
private:
    /*keeps count of loses, draws and wins
    Their values can be set with either
    setMatchResults()
    or setResults() functions*/
    int numberOfTeams;
//Takes the number of teams that will participate in the league
    int points;
//Explains or takes the points as decided by the management team
    int drawPoint;//represents the number of points awarded in a draw
public:
    int wins,draws,loses;
//START
    LeagueEquation() { //default constructor
        numberOfTeams = 0;
        points = 0; //points is initialize to the contemporary point system
        drawPoint = 0;//drawPoint is initialize to the contemporary point system
        loses = 0;
        draws = 0;
        wins = 0;
    }
    void setPoints(int point) {
        points=point;
    }
    void setdrawPoint(int dp) {
        drawPoint=dp;
    }

    void setMatchResults() {
        cout<<"Enter Number of Wins: ";
        cin>>wins;
        cout<<"Enter Number of Draws: ";
        cin>>draws;
        cout<<"Enter Number of Loses: ";
        cin>>loses;
    }

    void setResults() {
        bool quit = false;
        int counter = 1;
        char result;
        cout<<"ENTER MATCH RESULTS: Win (W)|Draw (D)| Lose (L)";
        do {
            cout<<"\nMatch "<<
                counter <<" Result (W,D,L): ";
            cin>>result;
            if (result =='W'|| result
                    == 'w') {
                wins = wins + 1;
            } else if (result =='D'|| result ==
                       'd') {
                draws = draws +
                        1;
            } else if (result =='L'|| result == 'l') {
                loses = loses + 1;
            } else if (result == '0'|| result ==
                       'o'||result == 'O') {
                quit = true;
            }
            while(counter <=
                    getIdividualMatches());

        }

        int teamPoint() {
            int wpoints,dpoints;
            wpoints = wins * points;
//calculate points obtained from all wins
            dpoints = draws * drawPoint;
//calculate points obtained from all draws
            return (wpoints + dpoints);
//return the sum of all points obtained from wins
            and draws
        }

        int gamesPlayed() { //Calculates number of
            games played
            int numberOfGames;
            numberOfGames = wins + draws
                            + loses;
            return numberOfGames;
        }

//END

        void setNumberOfMatches(int n) {
            numberOfTeams=n;
        }
        int getNumberOfMatches() {
            double
            x=2*((numberOfTeams*numberOfTeams)-
                 numberOfTeams);
            x = x/2;
            return x;
        }
        void setPoints(int p, int t) {
            numberOfTeams=t;
            points=p;
        }
        double getPoints() {
            double
            x=2*((numberOfTeams*numberOfTeams)-
                 numberOfTeams);
            double v=x/numberOfTeams;
            return v*points;
        }
        double getIdividualMatches() {
            return 2*((numberOfTeams-1));
        }
        string toString() {
            cout<<this-
                >numberOfTeams<<this->points<<endl;
        }
    };
//custom design data type: team
    struct teamRecord {
        string name;
        int matches;
        int wins;
        int draws;
        int loses;
        int points;
    };
    void manageLeague() {
        char response;
        int points,drawPoint,teams;

        cout<<"\n================================"<<endl;
        cout<<"TO QUIT, ENTER 0 PLEASE"<<endl;

        cout<<"================================"<<endl
            ;
        cout<<"\n";
        cout<<"ENTER THE NUMBER OF TEAMS: ";
        cin>>teams;
        if(teams==0 || teams==1) {
            cout <<"TEAMS CANNOT BE ONE(1) OR DO YOU WANT TO QUIT(Y/N)";
            cin>>response;
            if(response=='Y'||response=='y') {
                quit=true;
                cout<<"THANK YOU FOR USING THE SYSTEM.BYE!";
                exit(0);
            } else {
                quit=false;
                cout<<"ENTER THE NUMBER OF TEAMS: ";
                cin>>teams;
            }

        }
        cout<<"ENTER THE POINT SYSTEM: ";
        cin>>points;
        cout<<"ENTER THE DRAW POINT: ";
        cin>>drawPoint;

//START NEW
        /*Creates an Array of
        LeagueEquation Object (leq[teams])-
         the number of teams represents
        the size of the array*/
        LeagueEquation leq[teams];
        /*Creates an Array of the
        structure teamRecord -
        number of teams represents the
        size of the array*/
        teamRecord newTeam[teams];

        for(int i=0; i<teams; i++) {

            leq[i].setPoints(points,teams);
            cout<<"ENTER NAME OF TEAM: ";
            cin>>newTeam[i].name;
//if(newTeam[i].name)
            leq[i].setResults();
            newTeam[i].matches =
                leq[i].gamesPlayed();
            newTeam[i].wins =
                leq[i].wins;
            newTeam[i].draws =
                leq[i].draws;
            newTeam[i].loses =
                leq[i].loses;
            newTeam[i].points =
                leq[i].teamPoint();

        }


        cout<<"================================\nLEAGUE TABLE\n================================"<<endl;

        cout<<"Team"<<setw(8)<<"M"<<setw(5)<<"W"<<setw(5)<<"D"<<setw(5)<<"L"<<setw(5)<<"P"<<endl;
        cout<<"--------------------------------\n";
        for(int j=0; j<teams; j++) {

            cout<<newTeam[j].name<<setw(8)<<newTeam[j].matches <<setw(5)<<newTeam[j].wins;

            cout<<setw(5)<<newTeam[j].draws<<setw(5)<<new Team[j].loses<<setw(5)<<newTeam[j].points<<endl;
        }
    }
    void analyseLeague() { //to decide and understand the
        implication of adding or removing a team to or from
        existing league.
        int points, teams;
        char response;
        cout<<"ENTER THE NUMBER OF TEAMS"<<endl;
        cin>>teams;
        if(teams==0 || teams==1) {
            cout<<"TEAMS CANNOT BE 0 OR 1. PLEASE ENTER A VALID NUMBER OF TEAMS FROM 2"<<endl;

        } else {
            quit=false;
            cout<<"ENTER THE POINT SYSTEM "<<endl;
            cin>>points;

            LeagueEquation leq;

            leq.setNumberOfMatches(teams);
            int numberofmat=leq.getNumberOfMatches();
            leq.setPoints(points, teams);
            double ind=leq.getIdividualMatches();
            double numberofpoints=leq.getPoints();


            cout<<"================================"<<endl;
            cout<<"MATCHES PER SEASON/-"<<numberofmat<<"-/"<<endl;

            cout<<"================================"<<endl;
            cout<<""<<endl;

            cout<<"================================"<<endl;
            cout<<"MATCHES BY INDIVIDUAL TEAM /-"<<ind<<"-/"<<endl;

            cout<<"================================"<<endl;
            cout<<""<<endl;

            cout<<"================================"<<endl;
            cout<<"MAXIMUM POINTS OBTAINABLE/-"<<numberofpoints<<"-/"<<endl;

            cout<<"================================"<<endl ;
            cout<<"\n";
        }
    }
//menu function which is a void function
    void menu(void) {
        cout<<"|-----------------*MENU*---------------|\n";
        cout<<"======================================\n";
        cout<<"|ENTER(1) TO DECIDE MATCHES AND POINTS.|\n";
        cout<<"|ENTER(2) TO RECORD MATCH OUTCOMES |\n";
        cout<<"|ENTER(0) TO EXIT|\n";
        cout<<" ======================================\n";
    }
    int main() {
        do {
            menu();
            char choice;
            char response;
            cout<<"ENTER ANY OF THE NUMBERS TO START"<<endl;
            cin>>choice;

            switch(choice) {
            case '1' :
                analyseLeague();
                cout << "DO YOU WANT TO QUIT(Y/N)" << endl;
                cin>>response;

                if(response=='Y'||response=='y') {

                    quit=true;
                    cout<<"THANK YOU FOR USING THE SYSTEM.BYE!";
                    exit(0);
                } else {
                    quit=false;
//DoAnother();
                }
                break;
            case '2' :
                manageLeague();
                cout << "DO YOU WANT TO QUIT(Y/N)" << endl;
                cin>>response;
                if(response=='Y'||response=='y') {
                    quit=true;
                    cout<<"THANK YOU FOR USING THE SYSTEM.BYE!"
                        exit(0);
                } else {
                    quit=false;
//doSomething();
                }
                break;

            case '3':
                cout << "DO YOU WANT TO QUIT(Y/N)" << endl;
                cin>>response;

                if(response=='Y'||response=='y') {
                    quit=true;
                    cout<<"THANK YOU FOR USING THE SYSTEM.BYE!";
                    exit(0);
                }

                else {
                    quit=false;
                }
                break;
            case '0' :
                cout << "DO YOU WANT TO QUIT(Y/N)" << endl;
                cin>>response;

                if(response=='Y'||response=='y')
                    quit=true;
                else
                    quit=false;

                break;

            default :
                cout << "ENTER A VALID CHOICE" << endl;

                break;
            }

        } while(!quit);

//END NEW
        return 0;
    }
}
