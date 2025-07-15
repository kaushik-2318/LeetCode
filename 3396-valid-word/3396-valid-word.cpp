class Solution {
public:
bool isValid (string word) {
    if (word.length() < 3)
        return false;

    bool hasVowel = false;
    bool hasConsonant = false;

    for (char ch : word) {
        if (!isalnum(ch)) // not a digit or letter
            return false;

        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                hasVowel = true;
            else
                hasConsonant = true;
        }
    }

    return hasVowel && hasConsonant;
}
};