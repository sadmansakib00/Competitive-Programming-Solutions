#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool booksFlag[1000001];
double libWeights[1000001];

struct aComparator {
    bool operator()(const pair<int,int> &left, const pair<int,int> &right) const
     {
      	return libWeights[left.first]>libWeights[right.first];
     }
};

int main() {
    freopen("c_incunabula.txt","r",stdin);
    freopen("outputC.txt","w",stdout);
  int books,libs,days,libSignUp,libTotalBooks,libBooksPerDay,tempLibBook,totalScoreForALib,timeTillNow=0;
  int ansLibs=0;
  vector<int> ansLibIndex;
  cin >> books >> libs >> days;
  int scores[books];
  for(int i=0; i<books; i++) {
    cin >> scores[i];
  }
  multimap<pair<int,int>,pair<int,int>,aComparator> libDetails; //firstPair - libNo,signupDays    secondPair - booksPerDay,remainingDays
  multimap<pair<int,int>,pair<int,int>>::iterator it;
  map<int,vector<int>> libBooks; //keeping the books of a library
  map<int,vector<int>>::iterator libBookIt;
  for(int i=0; i<libs; i++) {
    cin >> libTotalBooks >> libSignUp >> libBooksPerDay;
    totalScoreForALib = 0;
    vector<int> tempBookVec;
    for(int j=0; j<libTotalBooks; j++) {
      cin >> tempLibBook;
      tempBookVec.push_back(tempLibBook);
    	totalScoreForALib += scores[tempLibBook];
    }
    libWeights[i] = (double)totalScoreForALib/libTotalBooks;
    libDetails.insert(make_pair(pair<int,int>(i,libSignUp),pair<int,int>(libBooksPerDay,0)));
    libBooks.insert(pair<int,vector<int>>(i,tempBookVec));
  }
  for(it=libDetails.begin(); it!=libDetails.end(); it++) {
    //cout << (it->first).first << "  " << (it->first).second << "  " << (it->second).first << "\n";
    int tempTime = days-((it->first).second+timeTillNow);
    timeTillNow = (it->first).second+timeTillNow;
    if(tempTime >= 0) {
        ansLibs++;
        ansLibIndex.push_back((it->first).first);
        vector<int> aTempVec;
        for(int i=0; i<((it->second).first)*timeTillNow; i++) {
            vector<int> &av = libBooks[(it->first).first];
            int tempPos = -1, maxxScore = -1;
            bool tempFlag = false;
            for(int j=0; j<av.size(); j++) {
                if(!booksFlag[av[j]]) {
                    if(scores[av[j]]>maxxScore) {
                        maxxScore = scores[av[j]];
                        tempPos = av[j];
                        tempFlag = true;
                    }
                }
            }
            if(tempFlag) {
                aTempVec.push_back(tempPos);
                booksFlag[tempPos] = true;
            } else {
                break;
            }
        }
        libBooks[(it->first).first] = aTempVec;
    }
  }
  cout << ansLibs << "\n";
  for(int i=0; i<ansLibs; i++) {
    vector<int> &av = libBooks[ansLibIndex[i]];
    cout << ansLibIndex[i] << " " << av.size() << "\n";
    if(av.size() == 0) {
        continue;
    }
    for(int i=0; i<av.size(); i++) {
        cout << av[i] << " ";
    }
    cout << "\n";
  }
}
