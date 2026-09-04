class Solution {
public:
    string sortVowels(string s) {
        string vowels;
        string consonants;

        for(int i = 0; i < s.length() ; i++){
            if(s[i] == 'e' || s[i] == 'a' ||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
                vowels.push_back(s[i]);
            }
            else if(s[i] == 'E' || s[i] == 'A' ||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'){
                vowels.push_back(s[i]);
            }
            else{
                consonants.push_back(s[i]);
            }
        }

        sort(vowels.begin() , vowels.end());
        int k = 0; 
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'e' || s[i] == 'a' ||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
                s[i] = vowels[k++];
            }
            else if(s[i] == 'E' || s[i] == 'A' ||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'){
                s[i] = vowels[k++];
            }
            else{
                // consonants.push_back(s[i]);
            }
        }

        return s ;
    }
};