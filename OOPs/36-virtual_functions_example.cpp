#include<iostream>
#include<string>
using namespace std;

// if we haven't define virtual to display of content/base class 
// the pointer will not display their respective display , instade of this it shows display of base class.

class content
{
    protected:
        string title;
        float rating;
    public:
        content(string s , float r)
        {
            title = s;
            rating = r;
        }
        virtual void display() = 0; // after this type of declaration this virtual function is called pure virtual function,
        // because here we have defined this is do nothing function and you must make display function in the derived classes otherwise error.
        // and the class which includes atleast one virtual function is called ABSTRACT BASE CLASS.
};

class video : public content
{
    float videolen;
    public:
        video(string s , float r , float vl):content(s , r){
            videolen = vl;
        }
        void display(){
            cout<<"Title of video is : "<<title<<endl;
            cout<<"Rating of video is : "<<rating<<endl;
            cout<<"Video length is : "<<videolen<<"minutes"<<endl;
        }
};

class text : public content
{
    float words;
    public:
        text(string s , float r , float wrd):content(s , r){
            words = wrd;
        }
        void display(){
            cout<<"Title of text is : "<<title<<endl;
            cout<<"Rating of text is : "<<rating<<endl;
            cout<<"Total words are : "<<words<<endl;
        }
};

int main()
{
    string title;
    float rating , videolength;
    int words;    

    title = "cpp tutorial video";
    rating = 4.5;
    videolength = 34.45;
    video v1(title , rating , videolength);

    title = "cpp tutorial text";
    rating = 4.3;
    words = 105;
    text t1(title , rating , words);

    content* ptr[2];
    ptr[0] = &v1;
    ptr[1] = &t1;

    ptr[0]->display();
    ptr[1]->display();
    return 0;
}
