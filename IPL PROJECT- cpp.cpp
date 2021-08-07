#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;
class schedule
{
	public:
		void one()
		{
			char line[100];
			fstream opt;
			opt.open("Schedule.txt", ios::in);
			if(opt.eof()!=0)
			cout<<"File Can't be Opened.";
			while(opt)
			{
				opt.getline(line,100);
				cout<<line<<endl;
			}
		}
		void two()
		{
			int m=0,x=0;
            char line[200];
	        fstream opt;
        	opt.open("Schedule.txt");
	        cout<<"Enter which match schedule you want? "<<endl;
            cin>>m;
	        x=(m-1)*4;
            for(int i=0;i<500;i++)
            {
    	        opt.getline(line,200);
    	        if(i>x && i<(x+4))
		        cout<<line<<endl;
	        }
		}
};
class Teams
{
	public:
		void show()
		{
			fstream opt;
			opt.open("Teams.txt",ios::in);
			char line[100];
			while(opt)
			{
				opt.getline(line,100);
				cout<<line<<endl;
			}
		}
};
class Team_details
{
	public:
		void one()
		{
			int sq=0;
			cout<<"Choose among the following:- "<<endl;
			cout<<"Enter 1 to see for RCB."<<endl;
			cout<<"Enter 2 to see for RPS."<<endl;
			cout<<"Enter 3 to see for GL."<<endl;
			cout<<"Enter 4 to see for DD."<<endl;			
			cout<<"Enter 5 to see for MI."<<endl;
			cout<<"Enter 6 to see for KKR."<<endl;
			cout<<"Enter 7 to see for KXIP."<<endl;
			cout<<"Enter 8 to see for SRH."<<endl;
			cin>>sq;
			int x=(sq-1)*31;
			fstream opt;
			opt.open("Team_Squad.txt", ios::in);
			char line[100];
			for(int i=0;i<256;i++)
			{
				opt.getline(line,100);
				if(i>x && i<(x+32))
				cout<<line<<endl;
			}
		}
		void two()
		{
				int team;
			cout<<"Choose among the following:- "<<endl;
			cout<<"Enter 1 to see for RCB."<<endl;
			cout<<"Enter 2 to see for MI."<<endl;
			cout<<"Enter 3 to see for RPS."<<endl;
			cout<<"Enter 4 to see for GL."<<endl;			
			cout<<"Enter 5 to see for SRH."<<endl;
			cout<<"Enter 6 to see for KXIP."<<endl;
			cout<<"Enter 7 to see for DC."<<endl;
			cout<<"Enter 8 to see for KKR."<<endl;
			cin>>team;
			fstream opt;
			opt.open("Team_Schedule.txt",ios::in);
			char line[100];
			int x;
			x=(team-1)*60;
			for(int i=0;i<500;i++)
			{
				opt.getline(line,100);
				if(i>x && i<(x+60))
				cout<<line<<endl;
			}
		}
};
class Points_table
{
	public:
		void show()
		{
			fstream opt;
			opt.open("Points_Table.txt", ios::in);
			char line[100];
			while(opt)
			{
				opt.getline(line,100);
				cout<<line<<endl;
			}
		}
};
class Tournament_statistics
{
	public:
		void one()
		{
			fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>0 && i<17)
				cout<<line<<endl;
			}
		}
		void two()
		{
			fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>41 && i<57)
				cout<<line<<endl;
			}
		}
		void three()
		{
			fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>56 && i<72)
				cout<<line<<endl;
			}
		}
		void four()
		{
			fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>111&& i<128)
				cout<<line<<endl;
			}
		}
		void five()
		{
				fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>86 && i<102)
				cout<<line<<endl;
			}
		}
		void six()
		{
				fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>101 && i<112)
				cout<<line<<endl;
			}
		}
		void seven()
		{
				fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>16 && i<27)
				cout<<line<<endl;
			}
		}
		void eight()
		{
				fstream opt;
			opt.open("Batting_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>26 && i<42)
				cout<<line<<endl;
			}
		}
		void nine()
		{
			fstream opt;
			opt.open("Bowling_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>0 && i<17)
				cout<<line<<endl;
			}
		}
		void ten()
		{
			fstream opt;
			opt.open("Bowling_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>16 && i<33)
				cout<<line<<endl;
			}
		}
		void eleven()
		{
			fstream opt;
			opt.open("Bowling_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>32 && i<49)
				cout<<line<<endl;
			}
		}
		void twelve()
		{
			fstream opt;
			opt.open("Bowling_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>79 && i<93)
				cout<<line<<endl;
			}
		}
		void thirteen()
		{
			fstream opt;
			opt.open("Bowling_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>48 && i<65)
				cout<<line<<endl;
			}
		}
		void fourteen()
		{
			fstream opt;
			opt.open("Bowling_stats.txt", ios::in);
			char line[100];
			for(int i=0;i<250;i++)
			{
				opt.getline(line,100);
				if(i>64 && i<80)
				cout<<line<<endl;
			}
		}
};
class Scorecard
{
	public:
		void one()
		{
			fstream opt;
			opt.open("Scorecards.txt", ios::in);
			char line[100];
			for(int i=0;i<350;i++)
			{
				opt.getline(line,100);
				if(i>0 && i<88)
				cout<<line<<endl;
			}
		}
		void two()
		{
			fstream opt;
			opt.open("Scorecards.txt", ios::in);
			char line[100];
			for(int i=0;i<350;i++)
			{
				opt.getline(line,100);
				if(i>88 && i<180)
				cout<<line<<endl;
			}
		}
		void three()
		{
			fstream opt;
			opt.open("Scorecards.txt", ios::in);
			char line[100];
			for(int i=0;i<350;i++)
			{
				opt.getline(line,100);
				if(i>180 && i<262)
				cout<<line<<endl;
			}
		}
		void four()
		{
			fstream opt;
			opt.open("Scorecards.txt", ios::in);
			char line[100];
			for(int i=0;i<350;i++)
			{
				opt.getline(line,100);
				if(i>262 && i<350)
				cout<<line<<endl;
			}
		}
};
class Number_games
{
	public:
		void show()
		{
			fstream opt;
			opt.open("Number_Games.txt", ios::in);
			char line[100];
			while(opt)
			{
				opt.getline(line,100);
				cout<<line<<endl;
			}
		}
};
void umpire()
{
	ifstream f("Umpires.txt");
	char chars[2000];
	while(!f.eof())
	{
		f.getline(chars,sizeof(chars));
		cout<<chars<<endl;
	}
}
void prev()
{
	ifstream f("Previous.txt");
	char chars[2000];
	while(!f.eof())
	{
		f.getline(chars,sizeof(chars));
		cout<<chars<<endl;
	}
	
}
void player()
{
	string team,name,spec,jersy,per;
	fstream f("players.txt",ios::out|ios::app);
	cout<<"\nEnter Team of the player RCB/RPS/GL/DD/MI/KKR/KIVP/SRH : ";
	cin.sync();getline(cin,team);
	cout<<"\nEnter Name of the player  : ";
	cin.sync();getline(cin,name);
	cout<<"\nEnter Specialization : ";
	cin.sync();getline(cin,spec);
	cout<<"\nJersy No : ";
	cin.sync();getline(cin,jersy);
	cout<<"\nOverall Performance : ";
	cin.sync();getline(cin,per);
	f<<team<<"\t"<<name<<"\t\t\t"<<spec<<"\t\t\t"<<jersy<<"\t\t"<<per<<endl;
	f.close();
	
}
int main()
{
    schedule s;
	Teams t;
    Team_details td;
    Points_table pt;
	Tournament_statistics ts;
	Scorecard sd;
	Number_games ng;
	int IPL;
	char et;
	cout<<"												REGI.NO - 11813969"<<endl;
	cout<<"												ROLL NO - B49"<<endl;
	cout<<"												MULKA SAMHITA"<<endl;
do
{
	cout<<"Choose the better option:-"<<endl;
	cout<<"\n";
	cout<<"Enter 1, Schedule"<<endl;
	cout<<"Enter 2, Teams"<<endl;
	cout<<"Enter 3, Team details."<<endl;
	cout<<"Enter 4, Points Table"<<endl;
	cout<<"Enter 5, Tournament statstics."<<endl;
	cout<<"Enter 6, Scorecards of PlayOffs"<<endl;
	cout<<"Enter 7, Number Games of IPL-2016."<<endl;
	cout<<"Enter 8, For Umpire info"<<endl;
	cout<<"Enter 9, For IPL HISTORY (2008-2018)"<<endl;
	cout<<"Enter 10, To add new player"<<endl;
	cout<<"\n";
	cin>>IPL;
	
	
	if(IPL==1)
	{
		int sched;
		cout<<"Choose the following:- "<<endl;
		cout<<"Enter 1, full schedule."<<endl;
		cout<<"Enter 2, match to match Schedule."<<endl;
		cin>>sched;
		if(sched==1)
		s.one();
		else if(sched==2)
		s.two();		
	}
	else if(IPL==2)
		t.show();
	else if(IPL==3)
	{
		int team;
		cout<<"Choose the following:- "<<endl;
		cout<<"Enter 1, Team Squad."<<endl;
		cout<<"Enter 2, Team Schedule."<<endl;
		cin>>team;
		if(team==1)
			td.one();
		else if(team==2)
		    td.two();
	}
	else if(IPL==4)
	pt.show();
	else if(IPL==5)
	{
		int stats;
		cout<<"Choose the following:- "<<endl;
		cout<<"Enter 1, Batsman Statistics."<<endl;
		cout<<"Enter 2, Bowling Statistics."<<endl;
		cin>>stats;
		if(stats==1)
		{
			int bat;
			cout<<"Choose among the following:- "<<endl;
			cout<<"1 Most Runs."<<endl;
			cout<<"2 Most 6's."<<endl;
			cout<<"3 Most 4's."<<endl;
			cout<<"4 Best Average."<<endl;
			cout<<"5 Best Strike Rate."<<endl;
			cout<<"6 Most Ducks."<<endl;
			cout<<"7 100's."<<endl;
			cout<<"8 Most 50's."<<endl;
			cin>>bat;
			if(bat==1)
			ts.one();
			else if(bat==2)
			ts.two();
			else if(bat==3)
			ts.three();
			else if(bat==4)
			ts.four();
			else if(bat==5)
			ts.five();
			else if(bat==6)
			ts.six();
			else if(bat==7)
			ts.seven();
			else if(bat==8)
			ts.eight();
		}
		else if(stats==2)
		{
			int bowl;
			cout<<"Choose among the following:- "<<endl;
			cout<<"Enter 1, Wickets."<<endl;
			cout<<"Enter 2, Most Maidens."<<endl;
			cout<<"Enter 3, Best Economy."<<endl;
			cout<<"Enter 4, Most 4+'s."<<endl;
			cout<<"Enter 5, Best Bowling figure."<<endl;
			cout<<"Enter 6, Fastest Balls."<<endl;
			cin>>bowl;
			if(bowl==1)
			ts.nine();
			else if(bowl==2)
			ts.ten();
			else if(bowl==3)
			ts.eleven();
			else if(bowl==4)
			ts.twelve();
			else if(bowl==5)
			ts.thirteen();
			else if(bowl==6)
			ts.fourteen();
		}
	}
	else if(IPL==6)
	{
		int score;
		cout<<"Choose among the following:- "<<endl;
		cout<<"Enter 1, QUALIFIER-01."<<endl;
		cout<<"Enter 2, ELIMINATOR."<<endl;
		cout<<"Enter 3, QUALIFIER-02."<<endl;
		cout<<"Enter 4, FINAL of IPL-2016."<<endl;
		cin>>score;
		if(score==1)
		sd.one();
		else if(score==2)
		sd.two();
		else if(score==3)
		sd.three();
		else if(score==4)
		sd.four();
	}
	else if(IPL==7)
	ng.show();
	else if(IPL==8)
	umpire();
	else if(IPL==9)
	prev();
	else if(IPL==10)
	player();
cout<<"Want to continue (Y/N) :- ";
cin>>et;
}
while(et=='Y' || et=='y');
return 0;
}
