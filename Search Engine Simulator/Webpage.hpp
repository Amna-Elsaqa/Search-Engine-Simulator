//
//  Webpage.hpp
//  SearchEngineProject
//
//  Created by Amna Hossam Elsaqa on 18/04/2022.
//

#ifndef Webpage_hpp
#define Webpage_hpp
#include <stdio.h>
#include<string>
#include<vector>
using namespace std;
class Webpage{
private:
string url;
vector<string> keywords;
double numofimpressions;
double numberofclicks;
double CTR;
int index;
double page_rank;
public:
Webpage();
Webpage(string, vector<string>, int,int);
void setindex(int );
void seturl(string);
void setkeywords(vector<string>);
void setimpressions(int);
void setclicks(int);
void setCTR(double);
void setscore(double rank);
void set_page_rank(double);
double getscore();
int getindex();
double get_page_rank();
void incrementimpression();
void incrementclick();
string geturl();
vector<string> getkeyword();
double getimpressions();
vector<Webpage> pointedAtBy;
vector<Webpage> pointingAt;
vector<int> pointedAtByIndex;
vector<int> pointingAtIndex;
double score;
int size;
double getclicks();
double getCTR();
void printwebpage();
};
#endif /* Webpage_hpp */
