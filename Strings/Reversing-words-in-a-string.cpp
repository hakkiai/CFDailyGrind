#include <iostream>
#include <cstring>

using namespace std;

void ReversingString(char text[], int start, int end) {
    while (start < end) {
        char temp = text[start];
        text[start] = text[end];
        text[end] = temp;
        start++;
        end--;
    }
}

void ReverseWordsInSentences(char *text) {
    int wordStart, wordEnd, length;
    length = strlen(text);

    ReversingString(text, 0, length - 1);

    wordStart = wordEnd = 0;
    while (wordEnd < length) {
        if (text[wordEnd] != ' ') {
            wordStart = wordEnd;
            while (wordEnd < length && text[wordEnd] != ' ')
                wordEnd++;
            ReversingString(text, wordStart, wordEnd - 1);
        }
        wordEnd++;
    }
}

int main() {
    char text[] = "Hello World This is C++";
    
    cout << "Original: " << text << endl;
    ReverseWordsInSentences(text);
    cout << "Reversed: " << text << endl;
    
    return 0;
}
