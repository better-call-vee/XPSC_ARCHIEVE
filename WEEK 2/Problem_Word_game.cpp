#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int numWords;
        cin >> numWords;

        unordered_map<string, vector<pair<int, int>>> wordCount;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < numWords; j++)
            {
                string word;
                cin >> word;
                wordCount[word].push_back(make_pair(i, j));
            }
        }

        int points[3] = {0};
        for (const auto &pair : wordCount)
        {
            if (pair.second.size() == 1)
            {
                int person = pair.second[0].first;
                points[person] += 3;
            }
            else if (pair.second.size() == 2)
            {
                int person1 = pair.second[0].first;
                int person2 = pair.second[1].first;
                points[person1] += 1;
                points[person2] += 1;
            }
        }

        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }

    return 0;
}

/*
There are 3 people. They are playing a word game. You will be given a test case at first.
Then you will be given the number of words each person can take.
If a same word is taken by 3 of them , they will get 0 point for taking the word. If a word is 
taken by two of them, those two will get 1 point for that word. And if the word is taken by only
one person, he will get full 3 points. Let me give you an example.
test case = 3
1
abc
def
abc
3
orz for qaq
qaq orz for
cod for ces
5
iat roc hem ica lly
bac ter iol ogi sts
bac roc lly iol iat

here, the output will be:
1 3 1 
2 2 6 
9 11 5 

so, for the first case: 
abc is taken by two persons, so the first and the last person will get 1 point. Second person
took a distinct string which is def. so he will get 3 points. So, output for the first case is 1 3 1. 
Like this
*/