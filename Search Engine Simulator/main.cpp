//
//  main.cpp
//  SearchEngineProject
//
//  Created by Amna Hossam Elsaqa on 17/04/2022.
//

#include <iostream>
#include<fstream>
#include<sstream>
#include"Webpage.hpp"
#include"Graph.hpp"
#include<string>
#include<algorithm>
using namespace std;

void createCSVFiles(){
    ofstream write("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Web_Graph.csv");
    if(write.is_open()){
        write << "www.test1.com" << "," << "www.test2.com" << "\n";
        write << "www.test2.com" << "," << "www.test3.com" << "\n";
        write << "www.test3.com" << "," << "www.test4.com" << "\n";
        write << "www.test1.com" << "," << "www.test3.com" << "\n";
        write << "www.test1.com" << "," << "www.test23.com" << "\n";
        write << "www.test1.com" << "," << "www.test27.com" << "\n";
        write << "www.test1.com" << "," << "www.test11.com" << "\n";
        write << "www.test2.com" << "," << "www.test13.com" << "\n";
        write << "www.test2.com" << "," << "www.test8.com" << "\n";
        write << "www.test3.com" << "," << "www.test9.com" << "\n";
        write << "www.test3.com" << "," << "www.test13.com" << "\n";
        write << "www.test3.com" << "," << "www.test23.com" << "\n";
        write << "www.test4.com" << "," << "www.test22.com" << "\n";
        write << "www.test4.com" << "," << "www.test17.com" << "\n";
        write << "www.test5.com" << "," << "www.test23.com" << "\n";
        write << "www.test5.com" << "," << "www.test18.com" << "\n";
        write << "www.test6.com" << "," << "www.test18.com" << "\n";
        write << "www.test6.com" << "," << "www.test26.com" << "\n";
        write << "www.test24.com" << "," << "www.test11.com" << "\n";
        write << "www.test24.com" << "," << "www.test10.com" << "\n";
        write << "www.test25.com" << "," << "www.test15.com" << "\n";
        write << "www.test26.com" << "," << "www.test11.com" << "\n";
        write << "www.test27.com" << "," << "www.test20.com" << "\n";
        write << "www.test27.com" << "," << "www.test19.com" << "\n";
        write << "www.test28.com" << "," << "www.test14.com" << "\n";
        write << "www.test28.com" << "," << "www.test22.com" << "\n";
        write << "www.test29.com" << "," << "www.test25.com" << "\n";
        write << "www.test29.com" << "," << "www.test13.com" << "\n";
        write << "www.test30.com" << "," << "www.test18.com" << "\n";
        write << "www.test30.com" << "," << "www.test27.com" << "\n";
        write << "www.test7.com" << "," << "www.test10.com" << "\n";
        write << "www.test8.com" << "," << "www.test27.com" << "\n";
        write << "www.test9.com" << "," << "www.test29.com" << "\n";
        write << "www.test10.com" << "," << "www.test29.com" << "\n";
        write << "www.test11.com" << "," << "www.test23.com" << "\n";
        write << "www.test12.com" << "," << "www.test18.com" << "\n";
        write << "www.test13.com" << "," << "www.test29.com" << "\n";
        write << "www.test14.com" << "," << "www.test12.com" << "\n";
        write << "www.test14.com" << "," << "www.test13.com" << "\n";
        write << "www.test15.com" << "," << "www.test1.com" << "\n";
        write << "www.test16.com" << "," << "www.test2.com" << "\n";
        write << "www.test16.com" << "," << "www.test6.com" << "\n";
        write << "www.test17.com" << "," << "www.test3.com" << "\n";
        write << "www.test17.com" << "," << "www.test5.com" << "\n";
        write << "www.test18.com" << "," << "www.test3.com" << "\n";
        write << "www.test19.com" << "," << "www.test21.com" << "\n";
        write << "www.test20.com" << "," << "www.test21.com" << "\n";
        write << "www.test21.com" << "," << "www.test8.com" << "\n";
        write << "www.test22.com" << "," << "www.test8.com" << "\n";
        write << "www.test23.com" << "," << "www.test3.com" << "\n";
        write << "www.test24.com" << "," << "www.test18.com" << "\n";
        write << "www.test25.com" << "," << "www.test5.com" << "\n";
        write << "www.test26.com" << "," << "www.test7.com" << "\n";
    }
    if(!write.fail()){
        cout << "File 1 created successfully." << endl;
    }
    write.close();
    write.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Keywords.csv");
    if(write.is_open()){
        write << "www.test1.com" << "," << "data" << "," << "structures" << "," << "complexity" << "\n";
        write << "www.test2.com" << "," << "machine" << "," << "learning" << "\n";
        write << "www.test3.com" << "," << "programming" "," << "complexity" << "," << "procedural" << "," << "objects" << "\n";
        write << "www.test4.com" << "," << "programming" << "," << "Java" << "," "Python" << "," << "objects" << "\n";
        write << "www.test5.com" << "," << "vector" << "," << "complexity" << "," << "greedy" << "," << "brute force" << "\n";
        write << "www.test6.com" << "," << "divide" << "," << "conquer" << "," << "java" << "," << "structures" << "\n";
        write << "www.test7.com" << "," << "data" << "," << "structures" << "," << "time" << "," << "complexity" << "," << "space" << "\n";
        write << "www.test8.com" << "," << "computer" << "," << "analysis" << "," << "algorithms" << "," << "design" << "\n";
        write << "www.test9.com" << "," << "lab" << "," << "course" << "," << "analysis&design" << "\n";
        write << "www.test10.com" << "," << "fundamentals" << "," << "computing" << "," << "coding" << "," << "OOP" << "\n";
        write << "www.test11.com" << "," << "programming" << "," << "languages" << "," << "C++" << "\n";
        write << "www.test12.com" << "," << "time" << "," << "complexity" << "," << "space" << "\n";
        write << "www.test13.com" << "," << "exclude" << "," << "mergesort" << "," << "conquer" << "\n";
        write << "www.test14.com" << "," << "divide" << "," << "transform" << "," << "conquer" << "\n";
        write << "www.test15.com" << "," << "major" << "," << "computer" << "," << "science" << "," << "engineering" << "\n";
        write << "www.test16.com" << "," << "," << "algorithms" << "," << "backtracking" << "," << "dynamic" << "," << "greedy" << "," << "BF" << "\n";
        write << "www.test17.com" << "," << "java" << "," << "python" << "," << "classes" << "," << "objects" << "\n";
        write << "www.test18.com" << "," << "graphs" << "," << "Dijkstra" << "," << "Kruskal's" << "\n";
        write << "www.test19.com" << "," << "vectors" << "," << "arrays" << "," << "data" << "," << "structures" << "\n";
        write << "www.test20.com" << "," << "maps" << "," << "unordered" << "," << "functions" << "\n";
        write << "www.test21.com" << "," << "libraries" << "," << "stdlib" << "," << "cmath" << "\n";
        write << "www.test22.com" << "," << "searching" << "," << "sorting" << "," << "graph" << "," << "algorithms" << "\n";
        write << "www.test23.com" << "," << "linear" << "," << "binary" << "," << "search" << "\n";
        write << "www.test24.com" << "," << "mergesort" << "," << "quicksort" << "," << "insertionsort" << "\n";
        write << "www.test25.com" << "," << "heap sort" << "," << "heapify" << "," << "sorting" << "\n";
        write << "www.test26.com" << "," << "BST" << "," << "RBT" << "\n";
        write << "www.test27.com" << "," << "DP" << "," << "optimal" << "," << "substructure" << "," << "overlapping" << "," << "subproblems" << "\n";
        write << "www.test28.com" << "," << "greedy" << "," << "time" << "," << "efficiency" << "," << "space-time" << "\n";
        write << "www.test29.com" << "," << "design" << "," << "approach" << "," << "time" << "\n";
        write << "www.test30.com" << "," << "OOP" << "," << "constructor" << "," << "destructor" << "," << "classes" << "," << "objects" << "\n";
    }
    if(!write.fail()){
        cout << "File 2 created successfully." << endl;
    }
    write.close();
//    write.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Impressions.csv");
//
//    if(write.is_open()){
//        write << "www.test1.com" << "," << "6" << "\n";
//        write << "www.test2.com" << "," <<  "20" << "\n";
//        write << "www.test3.com" << "," <<  "100" << "\n";
//        write << "www.test4.com" << "," <<  "75" << "\n";
//        write << "www.test5.com" << "," << "10" << "\n";
//        write << "www.test6.com" << "," <<  "30" << "\n";
//        write << "www.test7.com" << "," <<  "110" << "\n";
//        write << "www.test8.com" << "," <<  "80" << "\n";
//        write << "www.test9.com" << "," << "5" << "\n";
//        write << "www.test10.com" << "," <<  "25" << "\n";
//        write << "www.test11.com" << "," <<  "13" << "\n";
//        write << "www.test12.com" << "," <<  "19" << "\n";
//        write << "www.test13.com" << "," <<  "45" << "\n";
//        write << "www.test14.com" << "," <<  "90" << "\n";
//        write << "www.test15.com" << "," <<  "24" << "\n";
//        write << "www.test16.com" << "," <<  "17" << "\n";
//        write << "www.test17.com" << "," <<  "200" << "\n";
//        write << "www.test18.com" << "," <<  "49" << "\n";
//        write << "www.test19.com" << "," <<  "50" << "\n";
//        write << "www.test20.com" << "," <<  "120" << "\n";
//        write << "www.test21.com" << "," <<  "35" << "\n";
//        write << "www.test22.com" << "," <<  "47" << "\n";
//        write << "www.test23.com" << "," <<  "260" << "\n";
//        write << "www.test24.com" << "," <<  "30" << "\n";
//        write << "www.test25.com" << "," <<  "36" << "\n";
//        write << "www.test26.com" << "," <<  "100" << "\n";
//        write << "www.test27.com" << "," <<  "75" << "\n";
//        write << "www.test28.com" << "," <<  "96" << "\n";
//        write << "www.test29.com" << "," <<  "65" << "\n";
//        write << "www.test30.com" << "," <<  "85" << "\n";
//    }
//    if(!write.fail()){
//        cout << "File 3 created successfully." << endl;
//    }
//    write.close();
//
//    write.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Clicks.csv");
//    if(write.is_open()){
//        write << "www.test1.com" << "," << "0" << "\n";
//        write << "www.test2.com" << "," <<  "0" << "\n";
//        write << "www.test3.com" << "," <<  "0" << "\n";
//        write << "www.test4.com" << "," <<  "0" << "\n";
//        write << "www.test5.com" << "," << "0" << "\n";
//        write << "www.test6.com" << "," <<  "0" << "\n";
//        write << "www.test7.com" << "," <<  "0" << "\n";
//        write << "www.test8.com" << "," <<  "0" << "\n";
//        write << "www.test9.com" << "," << "0" << "\n";
//        write << "www.test10.com" << "," <<  "0" << "\n";
//        write << "www.test11.com" << "," <<  "0" << "\n";
//        write << "www.test12.com" << "," <<  "0" << "\n";
//        write << "www.test13.com" << "," << "0" << "\n";
//        write << "www.test14.com" << "," <<  "0" << "\n";
//        write << "www.test15.com" << "," <<  "0" << "\n";
//        write << "www.test16.com" << "," <<  "0" << "\n";
//        write << "www.test17.com" << "," << "0" << "\n";
//        write << "www.test18.com" << "," <<  "0" << "\n";
//        write << "www.test19.com" << "," <<  "0" << "\n";
//        write << "www.test20.com" << "," <<  "0" << "\n";
//        write << "www.test21.com" << "," << "0" << "\n";
//        write << "www.test22.com" << "," <<  "0" << "\n";
//        write << "www.test23.com" << "," <<  "0" << "\n";
//        write << "www.test24.com" << "," <<  "0" << "\n";
//        write << "www.test25.com" << "," << "0" << "\n";
//        write << "www.test26.com" << "," <<  "0" << "\n";
//        write << "www.test27.com" << "," <<  "0" << "\n";
//        write << "www.test28.com" << "," <<  "0" << "\n";
//        write << "www.test29.com" << "," << "0" << "\n";
//        write << "www.test30.com" << "," <<  "0" << "\n";
//    }
//    if(!write.fail()){
//        cout << "File 4 created successfully." << endl;
//    }
//    write.close();
//    write.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Scores.csv");
//    if(write.is_open()){
//        write << "www.test1.com" << "," << "0" << "\n";
//        write << "www.test2.com" << "," <<  "0" << "\n";
//        write << "www.test3.com" << "," <<  "0" << "\n";
//        write << "www.test4.com" << "," <<  "0" << "\n";
//        write << "www.test5.com" << "," << "0" << "\n";
//        write << "www.test6.com" << "," <<  "0" << "\n";
//        write << "www.test7.com" << "," <<  "0" << "\n";
//        write << "www.test8.com" << "," <<  "0" << "\n";
//        write << "www.test9.com" << "," << "0" << "\n";
//        write << "www.test10.com" << "," <<  "0" << "\n";
//        write << "www.test11.com" << "," <<  "0" << "\n";
//        write << "www.test12.com" << "," <<  "0" << "\n";
//        write << "www.test13.com" << "," << "0" << "\n";
//        write << "www.test14.com" << "," <<  "0" << "\n";
//        write << "www.test15.com" << "," <<  "0" << "\n";
//        write << "www.test16.com" << "," <<  "0" << "\n";
//        write << "www.test17.com" << "," << "0" << "\n";
//        write << "www.test18.com" << "," <<  "0" << "\n";
//        write << "www.test19.com" << "," <<  "0" << "\n";
//        write << "www.test20.com" << "," <<  "0" << "\n";
//        write << "www.test21.com" << "," << "0" << "\n";
//        write << "www.test22.com" << "," <<  "0" << "\n";
//        write << "www.test23.com" << "," <<  "0" << "\n";
//        write << "www.test24.com" << "," <<  "0" << "\n";
//        write << "www.test25.com" << "," << "0" << "\n";
//        write << "www.test26.com" << "," <<  "0" << "\n";
//        write << "www.test27.com" << "," <<  "0" << "\n";
//        write << "www.test28.com" << "," <<  "0" << "\n";
//        write << "www.test29.com" << "," << "0" << "\n";
//        write << "www.test30.com" << "," <<  "0" << "\n";
//    }
//    if(!write.fail()){
//        cout << "File 5 created successfully." << endl;
//    }
//    write.close();
}

vector<string> split(string str, char c)
{
    vector<string> words;
    string word = "";
    for (auto x : str)
    {
        if (x == c)
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word.push_back(x);
        }
    }
    words.push_back(word);
    return words;
}

//void MergeSortedIntervals(vector<Webpage>& v, int s, int m, int e) {
//    vector<Webpage> temp;
//
//    int i, j;
//    i = s;
//    j = m + 1;
//
//    while (i <= m && j <= e) {
//
//        if (v[i].score >= v[j].score) {
//            temp.push_back(v[i]);
//            ++i;
//        }
//        else {
//            temp.push_back(v[j]);
//            ++j;
//        }
//
//    }
//
//    while (i <= m) {
//        temp.push_back(v[i]);
//        ++i;
//    }
//
//    while (j <= e) {
//        temp.push_back(v[j]);
//        ++j;
//    }
//
//    for (int i = s; i <= e; ++i)
//        v[i] = temp[i - s];
//
//}
//
//void MergeSort(vector<Webpage>& v, int s, int e) {
//    if (s < e) {
//        int m = (s + e) / 2;
//        MergeSort(v, s, m);
//        MergeSort(v, m + 1, e);
//        MergeSortedIntervals(v, s, m, e);
//    }
//}

void calc_pagerank(vector<Webpage> &websites)
{
    vector<double> previous_pagerank;
    previous_pagerank.resize(websites.size());
    vector<double> current_pagerank;
    //int previous_index;
    double size = websites.size();
    for (int i = 0; i < websites.size(); i++)
    {
        websites[i].set_page_rank(1/size);
    }
    current_pagerank.resize(websites.size(),1/size);
    previous_pagerank = current_pagerank;
    
    for(int i = 0; i < websites.size()-1; i++){
        for (int j = 0; j < websites.size(); j++)
        {
            double pr = 0.0;
            for (int k = 0; k < websites[j].pointedAtBy.size(); k++)
            {
                pr += previous_pagerank[websites[j].pointedAtByIndex[k]] / websites[websites[j].pointedAtByIndex[k]].pointingAt.size();
            }
            websites[j].set_page_rank(pr);
            current_pagerank[j] = pr;
        }
        previous_pagerank = current_pagerank;
    }
    
//    for(int i = 0; i < websites.size(); i++){
//        cout << websites[i].geturl() << " " << websites[i].score << endl;
//    }

}

void set_and_update_scores(vector <Webpage> &websites){
    for(int i = 0; i < websites.size(); i++){
        websites[i].setscore(websites[i].get_page_rank());
    }
}
void sort_based_on_scores(vector<Webpage> &websites){
//    MergeSort(websites, 0, (int)websites.size());
    sort(websites.begin(), websites.end(), [](Webpage a, Webpage b){
        return a.score > b.score;
    });
    ofstream outscores;
    outscores.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Scores.csv");
    for (int i=0;i<websites.size();i++)
    outscores<<websites[i].geturl()<<","<<websites[i].getscore()<<endl;
    outscores.close();
}

vector<Webpage> findpage(vector<Webpage> webpage_v, vector<string> wanted_words,char search_option){
    vector<Webpage> found;
    
    vector<vector<string>> words;
    
    for(int i = 0; i < webpage_v.size(); i++)
    {
        words.push_back(webpage_v[i].getkeyword());
        //sort(words[i].begin(),words[i].end());
    }
    
    for(int i = 0; i < webpage_v.size(); i++)
    {
        sort(words[i].begin(),words[i].end());
    }
    
    for(int i = 0; i<webpage_v.size();i++)
    {
        if(search_option == 'o')
        {
            if(wanted_words.size() == 1){
            if(binary_search(words[i].begin(), words[i].end(), wanted_words[0]))
            {
                found.push_back(webpage_v[i]);
            }
            }
            if(wanted_words.size() == 2){
                if(binary_search(words[i].begin(), words[i].end(), wanted_words[0]) || binary_search(words[i].begin(), words[i].end(), wanted_words[1]))
                {
                    found.push_back(webpage_v[i]);
                }
            }
        }
        else if(search_option == 'q')
        {
            if(binary_search(words[i].begin(), words[i].end(), wanted_words[0]))
                found.push_back(webpage_v[i]);
        }
        else
            if(binary_search(words[i].begin(), words[i].end(), wanted_words[0]) && binary_search(words[i].begin(), words[i].end(), wanted_words[1]))
            {
                found.push_back(webpage_v[i]);
            }
    }
    return found;
}

vector<string> determineSearch(string input, char& option){
    vector<string> result;
    result=split(input,' ');
    option = 'o';
    
    if (input[0]== '*')
    {
        result.clear();
        input.erase(remove(input.begin(), input.end(), '*'), input.end());
        result.push_back(input);
//        for(int i = 0; i < result.size(); i++){
//            cout << result[i] << " ";
//            cout << endl;
//        }
        option='q'; //quotation
        return result;
    }
    
    else
    {
        for (int i=0;i<result.size();i++)
        {
            if (result[i]=="AND")
            {
                option='a'; //AND
                result.erase(remove(result.begin(), result.end(), "AND"), result.end());
            }
            if (result[i]=="OR"){
                option='o'; //Or
                result.erase(remove(result.begin(), result.end(), "OR"), result.end());
            }
            
        }
        return result;
    }
}

void performSearch(vector<Webpage>& webpages_v){
    
    set_and_update_scores(webpages_v);
    sort_based_on_scores(webpages_v);
    
    string searchword;
    cout<<"New Search Window" << endl;
    cout << "Type in your search: " << endl;
    cin.ignore();
    getline(cin,searchword);
    char option;
    int choice;
    int choice2;
    vector <string> search_v;

    search_v=determineSearch(searchword,option);
    vector<Webpage> filteredwebpages;
    filteredwebpages=findpage(webpages_v,search_v,option);
    
    for (int i=0;i<filteredwebpages.size(); i++)
    {
        int index=filteredwebpages[i].getindex();
        for (int j=0;j<webpages_v.size();j++)
        {
            if(index==webpages_v[j].getindex())
                webpages_v[j].incrementimpression();
        }
    }
    
    ofstream outimpression;
    outimpression.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Impressions.csv");
    for (int i=0;i<webpages_v.size();i++)
    outimpression<<webpages_v[i].geturl()<<","<<webpages_v[i].getimpressions()<<endl;
    outimpression.close();
    
    if (filteredwebpages.size()==0){
        cout<<"Oops!! We did not find any webpage that match the key words you entered\n\n";
        while(true)
        {
            cout<<"What would you like to do now?" << endl;
            cout << "1.New Search";
            cout<< "2.Exit";
            cout << "Type in your choice: ";
            cin>>choice;
            if (choice==1)
            {
                performSearch(webpages_v);
                break;
            }
            else if (choice==2){
                cout<<"Your choice is to Exit\nThank you for using our Search Engine\n";
                exit(0);
            }
            else
                cout<<"Please Enter a valid choice\n";
        }
    }
    
    else {
        while(true)
        {
            cout<<"Here are the webpages we found:\n";
            for (int i=0;i<filteredwebpages.size();i++)
                cout<<i+1<<". "<<filteredwebpages[i].geturl()<<endl;
            cout<<" would you like to: \n1.choose webpage to open\n2.New Search\n3.Exit\n\n\nType in your choice: ";
            cin>>choice;
            if (choice==1)
            {
                cout<<"Type in your url number: ";
                int website_choice;
                cin>>website_choice;
                while(website_choice<1 || website_choice>filteredwebpages.size()){
                    cout << "This website option does not exist. please re-enter" << endl;
                    cin >> website_choice;
                }
                    cout<<"This is the content of the url: ";
                    cout<<filteredwebpages[website_choice-1].geturl()<<endl;
                    int index2=filteredwebpages[website_choice-1].getindex();
                    for (int j=0;j<webpages_v.size();j++)
                    {
                        if(index2==webpages_v[j].getindex())
                            webpages_v[j].incrementclick();
                    }
//                calc_pagerank(webpages_v);
//                sort_based_on_scores(webpages_v);
                
                    ofstream outclick;
                    outclick.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Clicks.csv");
                    for (int i=0;i<webpages_v.size();i++)
                        outclick<<webpages_v[i].geturl()<<","<<webpages_v[i].getclicks()<<endl;
                    outclick.close();
            
                    cout<<"What would you like to do next: \n1.back  to the result window\n2.New Search\n3.Exit\n\n\nType in your choice: ";
                    cin>>choice2;
                    if (choice2<1 || choice2>3)
                    {
                        cout<<"Invalid choice, Redirecting to the search window...........\n";
                        performSearch(webpages_v);
                    }
                    else if(choice2 == 1)
                        continue;
                    else if(choice2 == 2)
                        performSearch(webpages_v);
                    else if(choice2 == 3){
                        cout<<"Your choice is to Exit\nThank you for using our SearchQuery\n";
                        set_and_update_scores(webpages_v);
                        sort_based_on_scores(webpages_v);
                        exit(0);
                    }
            }
            else if (choice==2)
            {
            performSearch(webpages_v);
            break;
            }
            else if (choice==3)
            {
                cout<<"Your choice is to Exit\nThank you for using our SearchQuery\n";
                set_and_update_scores(webpages_v);
                sort_based_on_scores(webpages_v);

                exit(0);
            }
            else
                cout<<"Please Enter a valid choice\n";
        }
    }
}

int main() {
    createCSVFiles();
    
    vector<Webpage> webpages; //vector of webpages.

    //Take input from csv files.
    
    ifstream keywordFile;
    keywordFile.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Keywords.csv");
    string line,url;
    vector<string>pageinfo;
    
    while (!keywordFile.eof()){
        
    getline(keywordFile,line);
        
    if (keywordFile.fail()){
    break;
    }
    else{

    pageinfo = split(line,',');
    url=pageinfo[0];
    pageinfo.erase(pageinfo.begin());
    Webpage temp;
    temp.seturl(url);
    temp.setkeywords(pageinfo);
    webpages.push_back(temp);
    }
    }
    keywordFile.close();

    ifstream impressionFile;
    impressionFile.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Impressions.csv");
    vector <string> storeImpression;
    while (!impressionFile.eof()){
    getline(impressionFile,line);
    if (impressionFile.fail()){
        break;
    }
        storeImpression = split(line,',');
        url=storeImpression[0];
        for (int i=0;i<webpages.size();i++){
            if (webpages[i].geturl()==url){
                webpages[i].setimpressions(stoi(storeImpression[1]));
            }
        }
    }
    
    impressionFile.close();
    
    ifstream clicksFile;
    clicksFile.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Clicks.csv");
    vector <string> storeClicks;
    while (!clicksFile.eof()){
    getline(clicksFile,line);
    if (clicksFile.fail()){
        break;
    }
        storeClicks = split(line,',');
        url=storeClicks[0];
        for (int i=0;i<webpages.size();i++){
            if (webpages[i].geturl()==url){
                webpages[i].setclicks(stoi(storeClicks[1]));
            }
        }
    }
    clicksFile.close();
    
    ifstream scoresFile;
    scoresFile.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Scores.csv");
    vector <string> storeScore;
    while (!scoresFile.eof()){
    getline(scoresFile,line);
    if (scoresFile.fail()){
        break;
    }
        storeScore = split(line,',');
        url=storeScore[0];
        for (int i=0;i<webpages.size();i++){
            if (webpages[i].geturl()==url){
                webpages[i].setscore(stod(storeScore[1]));
            }
        }
    }
    scoresFile.close();
    
    for (int i=0;i<webpages.size();i++) //setting index for each webpage.
        webpages[i].setindex(i);
    
    Graph Webgraph((int)webpages.size());
    ifstream graphFile;
    graphFile.open("/Users/amna_elsaqa/Desktop/Analysis_Lab_Project/Analysis_Lab_Project/Web_Graph.csv");
    vector<string> graph_connections;
    string graphUrl1,graphUrl2;
    while(!(graphFile>>ws).eof()){
    getline(graphFile,line);
    if (graphFile.fail())
        break;
    graph_connections=split(line,',');
    graphUrl1=graph_connections[0];
    graphUrl2=graph_connections[1];
        int graphIdx1 = 0;
        int graphIdx2 = 0;

    for (int i=0;i<webpages.size();i++){
        if (webpages[i].geturl()==graphUrl1)
            graphIdx1=webpages[i].getindex();

        if (webpages[i].geturl()==graphUrl2)
            graphIdx2=webpages[i].getindex();
        
        for(int j = 0; j < webpages.size(); j++){
            if(webpages[i].geturl() == graph_connections[0] && webpages[j].geturl() == graph_connections[1]){
                webpages[j].pointedAtBy.push_back(webpages[i]);
                webpages[j].pointedAtByIndex.push_back(i);
                webpages[i].pointingAt.push_back(webpages[j]);
                webpages[i].pointingAtIndex.push_back(j);
            }
        }
        Webgraph.createEdge(graphIdx1,graphIdx2);
    }
}
    graphFile.close();
    
//    for(int i = 0; i < webpages.size(); i++){
//        cout << webpages[i].geturl() << " " << webpages[i].getscore() << endl;
//    }
    
    calc_pagerank(webpages);
    set_and_update_scores(webpages);
    sort_based_on_scores(webpages);
    
    char choice;
    while(true){
        cout<<"Welcome! What would you like to do?" << endl;
        cout << "1.New Search" << endl;
        cout << "2.Exit" << endl;
        cout << "Type in your choice: ";
        
        cin>>choice;
        if (choice=='1'){
            performSearch(webpages);
            break;
            }
        else if (choice=='2'){
            cout<<"Your choice is to Exit\nThank you for using our SearchQuery\n";
            break;
            }
        else{
            cout<<"Please Enter a valid choice\n";
            }
        }
    set_and_update_scores(webpages);
    sort_based_on_scores(webpages);
    return 0;
}

