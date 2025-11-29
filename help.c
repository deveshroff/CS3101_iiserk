string convertToCamelCase(string &s) {
    string res = "";

    // Flag to indicate when to capitalize the next letter
    bool capitalizeNext = false;

    for(int i = 0; i < s.length(); i++) {

        // If we encounter a space, set the flag to capitalize
        // the next character
        if (s[i] == ' ') {
            capitalizeNext = true;
        }

        // If the flag is set, capitalize the current character
        else if (capitalizeNext == true) {
            res += toupper(s[i]);

            // Reset the flag after capitalization
            capitalizeNext = false;
        }

        // Otherwise, just add the current character to the result
        else {
            res += s[i];
        }
    }

    return res;
}

static bool checkPangram(string s) {

        for(char ch = 'a'; ch <= 'z'; ch++) {
            bool found = false;
            
            for(int i = 0; i < s.Length; i++) {
                if(ch == Char.ToLower(s[i])) {
                    found = true;
                    break;
                }
            }

            if(found == false)
                return false;
        }
        return true;
    }

int findSubstring(char *txt, char *pat) {
    int n = strlen(txt);
    int m = strlen(pat);

    // Iterate through txt
    for (int i = 0; i <= n - m; i++) {

        // Check for substring match
        int j;
        for (j = 0; j < m; j++) {

            // Mismatch found
            if (txt[i + j] != pat[j]) {
                break;
            }
        }

        // If we completed the inner loop, we found a match
        if (j == m) {

            // Return starting index
            return i;
        }
    }
    
    // No match found
    return -1;
}

// Helper function that checks if s1 is a subsequence of s2
bool isSubSeqRec(char* s1, char* s2, int m, int n){
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    // If last characters of two strings are matching
    if (s1[m - 1] == s2[n - 1])
        return isSubSeqRec(s1, s2, m - 1, n - 1);

    // If last characters are not matching
    return isSubSeqRec(s1, s2, m, n - 1);
}

// Wrapper function
bool isSubSeq(const char* s1, const char* s2){
    int m = strlen(s1);
    int n = strlen(s2);
    if (m > n) return false;
    return isSubSeqRec(s1, s2, m, n);
}

bool areAnagrams(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) return false;

    // for lowercase a-z
    int freq[26] = {0};  

    // Count frequency of each character in s1
    for (int i = 0; s1[i] != '\0'; i++) 
        freq[s1[i] - 'a']++;

    // Subtract frequency using characters from s2
    for (int i = 0; s2[i] != '\0'; i++)
        freq[s2[i] - 'a']--;

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

bool arekAnagrams(char str1[], char str2[], int k)
{
    int n = strlen(str1);
    if (strlen(str2) != n)
        return false;

    int count1[MAX_CHAR];
    int count2[MAX_CHAR];

    for (int i = 0; i < MAX_CHAR; i++) {
        count1[i] = 0;
        count2[i] = 0;
    }

    for (int i = 0; i < n; i++)
        count1[str1[i] - 'a']++;
    for (int i = 0; i < n; i++)
        count2[str2[i] - 'a']++;

    int count = 0;

    // Count the number of characters that are different in
    // both strings
    for (int i = 0; i < MAX_CHAR; i++)
        if (count1[i] < count2[i])
            count = count + abs(count1[i] - count2[i]);

    // Return true if count is less than or equal to k
    return (count <= k);
}