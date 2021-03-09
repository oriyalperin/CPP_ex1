#include "snowman.hpp"
#include <string>
#include <array>
using namespace std;
using namespace ariel;

string hat(int h);      // returns the hat string according to input
string nose(int n);     // returns the nose string according to input
string leye(int l);     // returns the left eye string according to input
string reye(int r);     // returns the right eye string according to input
string larm(int x);     // returns the left arm string according to input
string rarm(int y);     // returns the right arm string according to input
string torso(int t);    // returns the torso string according to input
string base(int b);     // returns the base string according to input


string ariel::snowman(int body)
{
    const int min= 11111111;    // minimun input
    const int max= 44444444;   // maxsimum input
    const int inputSize= 8;     // number of digits in input
    const int H= 0;             // first digit in input
    const int N= 1;             // second digit in ipnut
    const int L= 2;             // third digit in input
    const int R= 3;             // fourth digit in input
    const int X= 4;             // Fifth digit in input
    const int Y= 5;             // Sixth count in input
    const int T= 6;             // Seventh digit in the input
    const int B= 7;             // Eighth digit in input
    const int upHand= 2;        //the fourth/Fifth digit in input is 2 = hand up
    const int ones= 10;         //for extract each digit from input

    if(body< min) // if the input: includes 0 or miss digits or is negative
    {
        throw invalid_argument("0 isn't a legal digit / missing digits / negative number");
    }

    if(body> max) // if the input: includes illegal digit or include too much digits
    {
        throw invalid_argument("illegal digit / too much digits"); 
    }  
    
    array<int,inputSize> sm = {0}; //sm= SnowMan body, represented by array
    int temp=body;
    
    for(int i=inputSize-1;i>=0;i--) //pass each digit in input
    {
        sm.at(i)=temp%ones; // insert the current digit to the sm array 
        temp/=ones;
    }

    if(sm[X]==upHand && sm[Y]!=upHand) //if left hand up and right hand not
    {
        //draw the snowman
        return
        hat(sm[H])+"\n"+
        larm(sm[X])+
        leye(sm[L])+
        nose(sm[N])+
        reye(sm[R])+"\n "+
        torso(sm[T])+
        rarm(sm[Y])+"\n "+
        base(sm[B]);
    }

    if (sm[X]!=upHand && sm[Y]==upHand) //if right hand up and left hand not
    {
        //draw the snowman
        return
        hat(sm[H])+"\n "+
        leye(sm[L])+
        nose(sm[N])+
        reye(sm[R])+
        rarm(sm[Y])+"\n"+
        larm(sm[X])+
        torso(sm[T])+"\n "+
        base(sm[B]);
    }

    if (sm[X]==upHand && sm[Y]==upHand) //both hands up
    {
        //draw the snowman
        return
        hat(sm[H])+"\n"+
        larm(sm[X])+
        leye(sm[L])+
        nose(sm[N])+
        reye(sm[R])+
        rarm(sm[Y])+"\n "+
        torso(sm[T])+"\n "+
        base(sm[B]);
    }
    
    //if none of the hands are up
    return
    hat(sm[H])+"\n "+
    leye(sm[L])+
    nose(sm[N])+
    reye(sm[R])+"\n"+
    larm(sm[X])+
    torso(sm[T])+
    rarm(sm[Y])+"\n "+
    base(sm[B]);

}
        
string hat(int h) 
{
    switch (h)
    {
    case 1:
        return hat1;
        break;
    case 2:
        return hat2;
        break;
    case 3:
        return hat3;
        break;
    case 4:
        return hat4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }
}

string nose(int n) 
{
    switch (n)
    {
    case 1:
        return nose1;
        break;
    case 2:
        return nose2;
        break;
    case 3:
        return nose3;
        break;
    case 4:
        return nose4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }
}
string leye(int l) 
{
    switch (l)
    {
    case 1:
        return leye1;
        break;
    case 2:
        return leye2;
        break;
    case 3:
        return leye3;
        break;
    case 4:
        return leye4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }

}
string reye(int r) 
{
    switch (r)
    {
    case 1:
        return reye1;
        break;
    case 2:
        return reye2;
        break;
    case 3:
        return reye3;
        break;
    case 4:
        return reye4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }
}

string larm(int x) 
{
    switch (x)
    {
    case 1:
        return larm1;
        break;
    case 2:
        return larm2;
        break;
    case 3:
        return larm3;
        break;
    case 4:
        return larm4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }
}
string rarm(int y) 
{
    switch (y)
    {
    case 1:
        return rarm1;
        break;
    case 2:
        return rarm2;
        break;
    case 3:
        return rarm3;
        break;
    case 4:
        return rarm4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }
}
string torso(int t) 
{
    switch (t)
    {
    case 1:
        return torso1;
        break;
    case 2:
        return torso2;
        break;
    case 3:
        return torso3;
        break;
    case 4:
        return torso4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }
}
string base(int b) 
{
    switch (b)
    {
    case 1:
        return base1;
        break;
    case 2:
        return base2;
        break;
    case 3:
        return base3;
        break;
    case 4:
        return base4;
        break;
    
    default:
        throw invalid_argument("illegal digit");
    }
}


