//
//  Webpage.cpp
//  SearchEngineProject
//
//  Created by Amna Hossam Elsaqa on 18/04/2022.
//

#include "Webpage.hpp"
#include <string>
#include<vector>
#include<iostream>
using namespace std;

Webpage::Webpage(){

url=" ";
numberofclicks=0;
numofimpressions=1;
CTR=(numberofclicks/numofimpressions)*100;
keywords.resize(10);
score=0;
page_rank=0;

}

Webpage::Webpage(string a, vector<string> b, int impression, int pindex){
url=a;
numberofclicks=0;
numofimpressions=impression;
CTR=(numberofclicks/numofimpressions)*100;
keywords=b;
score=0; //page rank is zero at the moment;
index=pindex;
}

void Webpage::setindex(int a){
index=a;
}

void Webpage::seturl(string a){
url=a;
}

void Webpage::setkeywords(vector<string> b){
keywords=b;
}

void Webpage::setimpressions(int impression){
numofimpressions=impression;
if (impression !=0)
CTR=(numberofclicks/numofimpressions)*100;
}

void Webpage::setclicks(int a) {
numberofclicks= a;
CTR=(numberofclicks/numofimpressions)*100;

}

void Webpage::setCTR(double c){

CTR=c;

}

void Webpage:: set_page_rank(double rank){
    page_rank=rank;
}



void Webpage:: setscore(double rank){

score= 0.4*rank+((1-(0.1*numofimpressions)/(1+0.1*numofimpressions))*rank+((0.1*numofimpressions)/(1+0.1*numofimpressions))*CTR)*0.6;
}

double Webpage:: getscore(){
    return score;
}

void Webpage::incrementimpression(){

numofimpressions++;
CTR=(numberofclicks/numofimpressions)*100;

}


void Webpage::incrementclick(){

numberofclicks++;
CTR=(numberofclicks/numofimpressions)*100;



}


string Webpage::geturl(){

return url;

}

vector<string> Webpage::getkeyword(){
return keywords;


}

double Webpage:: get_page_rank(){
    return page_rank;
}

double Webpage::getimpressions(){

return numofimpressions;

}

double Webpage::getclicks(){

return numberofclicks;


}

double Webpage::getCTR(){
return CTR;
}

int Webpage::getindex(){
return index;
}
void Webpage:: printwebpage(){

cout<<"New Webpage "<<endl;
cout<<"-----------\nURL: "<<url<<endl;
cout<<"Numofclicks: "<<numberofclicks<<endl;
cout<<"NumofImpressions: "<<numofimpressions<<endl;
cout<<"CRT:    "<<CTR<<endl;
cout<<"keywords: ";
for (int i=0;i<keywords.size();i++)
    cout<<keywords[i]<<", ";
cout<<endl;
cout<<"Score: "<<score<<endl;
cout<<"Index: "<<index<<endl;
cout<<"Rank: "<<page_rank<<endl;
}

