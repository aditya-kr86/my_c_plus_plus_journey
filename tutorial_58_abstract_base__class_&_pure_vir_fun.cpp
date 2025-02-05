/*
# Pure Virtual Function:
- A function with no implementation.
- Syntax: virtual void functionName() = 0;.
- Used to define abstract classes.
- Must be overridden in derived classes.

# Abstract Base Class:
- A class with at least one pure virtual function.
- Derived classes must provide an implementation for all pure virtual functions.
- Cannot create objects of an abstract class.

# Example:
- Base Class (CWH):
- Contains a pure virtual function display().
- Derived Classes (CWHVideo, CWHText):
- Override display() and provide specific functionality.

* Key Concept:
- Abstract class = Class with at least one pure virtual function.
- Derived classes must override the pure virtual function to be instantiated.
*/
#include <iostream>
#include <cstring>
using namespace std;

class CodeWithHarry
{
protected:
    char title[30];
    float rating;

public:
    CodeWithHarry(const char *s, float r)
    {
        strcpy(title, s);
        rating = r;
    }
    virtual void display() = 0;
};

class CWHVideo : public CodeWithHarry
{
    float videoLength;

public:
    CWHVideo(const char *s, float r, float vl) : CodeWithHarry(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing Video with title : " << title << endl;
        cout << "Rating: " << rating << " out of 5 Stars" << endl;
        cout << "Length of this video is : " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CodeWithHarry
{
    int words;

public:
    CWHText(const char *s, float r, int wc) : CodeWithHarry(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "\nThis is an amazing text Tutorial with title : " << title << endl;
        cout << "Rating of this text Tutorial : " << rating << " out of 5 Stars" << endl;
        cout << "No. of words in this text tutorial is : " << words << " words" << endl;
    }
};

int main()
{
    const char *title;
    float rating, vlen;
    int words;

    // for Code with Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo DjangoVideo(title, rating, vlen);
    // DjangoVideo.display();

    //  for code with harry Text
    title = "Django tutorial";
    words = 433;
    rating = 4.09;
    CWHText DjangoText(title, rating, words);
    // DjangoText.display();

    CodeWithHarry *tuts[2];
    tuts[0] = &DjangoVideo;
    tuts[1] = &DjangoText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
