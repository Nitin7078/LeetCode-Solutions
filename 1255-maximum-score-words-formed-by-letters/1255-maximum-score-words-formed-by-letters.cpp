// class Solution {
// public:
// int fun(vector<string>&words , vector<char>letters , vector<int>&score , vector<char> &ds , int idx,int ans ){
//     int sum = 0;
//     if(idx == words.size()){
//         return ans ;
//     }
//     int take , not_take;
//     //take
//     //checking if all the letter fo word[idx] is present in letters or not ;
//     int flag = 1;
//     int farrofletters [26]={0};
//     for(int i = 0; i < letters.size() ; i++){
//         farrofletters[letters[i]-'a']++;
//     }
//     int farrofword[26]={0};
//     for(int i = 0 ; i < words[idx].length() ; i++){
//         farrofword[words[idx][i]-'a']++;
//     }
//     for(int i = 0; i < 26 ; i++){
//         if(farrofword[i] <= farrofletters[i]){
//         }
//         else{
//             flag = 0;
//             break;
//         }
//     }
//     int temp[26];

//     if(flag == 1 ){
//     //calculating the score
//     sum = 0;
//     for(int i = 0 ; i < words[idx].length() ; i++){
//         sum+=score[words[idx][i]-'a'];
//     }
    
//     for(auto i= 0 ; i<26 ; i++){
//         temp[i]=farrofletters[i];
//     }
//     for(int i = 0; i < 26 ; i++){
//         if(farrofword[i] == farrofletters[i]){
//             farrofletters[i]-=farrofword[i];
//         }
//     }
//     vector<char> newLetters;

//         for(int i = 0; i < 26; i++){
//             for(int j = 0; j < farrofletters[i]; j++){
//                 newLetters.push_back('a' + i);
//             }
//         }
//     ans+=sum;
//     take = fun(words,letters,score,ds,idx+1,ans);
//      for(int i = 0; i < 26; i++){
//             farrofletters[i] = temp[i];
//         }
//     ans-=sum;
//     }
   
//     not_take = fun(words,letters,score,ds,idx+1,ans);
    
//     return max(take,not_take) ;

// }
//     int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        
//         vector<char>ds;

//         return fun(words,letters,score,ds,0,0);
//     }
// };

class Solution {
public:
int fun(vector<string>&words, vector<char>letters,
        vector<int>&score, vector<char>&ds, int idx, int ans){

    int sum = 0;

    if(idx == words.size()){
        return ans;
    }

    int take = 0, not_take = 0; // FIX 1: Initialize both

    int flag = 1;
    int farrofletters[26] = {0};

    for(int i = 0; i < letters.size(); i++){
        farrofletters[letters[i]-'a']++;
    }

    int farrofword[26] = {0};

    for(int i = 0; i < words[idx].length(); i++){
        farrofword[words[idx][i]-'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(farrofword[i] > farrofletters[i]){
            flag = 0;
            break;
        }
    }

    int temp[26];

    if(flag == 1){

        sum = 0;

        for(int i = 0; i < words[idx].length(); i++){
            sum += score[words[idx][i]-'a'];
        }

        for(int i = 0; i < 26; i++){
            temp[i] = farrofletters[i];
        }

        for(int i = 0; i < 26; i++){
            // FIX 2: Remove this condition.
            // Subtract every required character frequency.
            farrofletters[i] -= farrofword[i];
        }

        vector<char> newLetters;

        for(int i = 0; i < 26; i++){
            for(int j = 0; j < farrofletters[i]; j++){
                newLetters.push_back('a' + i);
            }
        }

        ans += sum;

        // FIX 3: Pass newLetters, NOT letters.
        take = fun(words, newLetters, score, ds, idx+1, ans);

        for(int i = 0; i < 26; i++){
            farrofletters[i] = temp[i];
        }

        ans -= sum;
    }

    // NOT TAKE
    not_take = fun(words, letters, score, ds, idx+1, ans);

    return max(take, not_take);
}

int maxScoreWords(vector<string>& words,
                  vector<char>& letters,
                  vector<int>& score){

    vector<char>ds;

    return fun(words, letters, score, ds, 0, 0);
}
};
