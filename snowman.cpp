#include "snowman.hpp"
#include <string>
#include <array>
using namespace std;
using namespace ariel;

const int options =4;
array<string,options> hat={hat1,hat2,hat3,hat4};                // returns the hat array<string,options> according to input
array<string,options> nose={nose1,nose2,nose3,nose4};           // returns the nose array<string,options> according to input
array<string,options> leye={leye1,leye2,leye3,leye4};           // returns the left eye array<string,options> according to input
array<string,options> reye={reye1,reye2,reye3,reye4};          // returns the right eye array<string,options> according to input
array<string,options> larm={larm1,larm2,larm3,larm4};          // returns the left arm array<string,options> according to input
array<string,options> rarm={rarm1,rarm2,rarm3,rarm4};           // returns the right arm array<string,options> according to input
array<string,options> torso= {torso1,torso2,torso3,torso4};    // returns the torso array<string,options> according to input
array<string,options> base= {base1,base2,base3,base4};   // returns the base string according to input

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
    const int upHand= 1;        //the fourth/Fifth digit in input is 2 = hand up
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
        int digit=temp%ones;
        if(digit <1 || digit >4)
        {
            throw invalid_argument("illegal digit");
        }
        sm.at(i)=digit-1; // insert the current digit to the sm array 
        temp/=ones;
    }

    if(sm[X]==upHand && sm[Y]!=upHand) //if left hand up and right hand not
    {
        //draw the snowman
        return
        hat.at(sm[H])+"\n"+
        larm.at(sm[X])+
        leye.at(sm[L])+
        nose.at(sm[N])+
        reye.at(sm[R])+"\n "+
        torso.at(sm[T])+
        rarm.at(sm[Y])+"\n "+
        base.at(sm[B]);
    }

    if (sm[X]!=upHand && sm[Y]==upHand) //if right hand up and left hand not
    {
        //draw the snowman
        return
        hat.at(sm[H])+"\n "+
        leye.at(sm[L])+
        nose.at(sm[N])+
        reye.at(sm[R])+
        rarm.at(sm[Y])+"\n"+
        larm.at(sm[X])+
        torso.at(sm[T])+"\n "+
        base.at(sm[B]);
    }

    if (sm[X]==upHand && sm[Y]==upHand) //both hands up
    {
        //draw the snowman
        return
        hat.at(sm[H])+"\n"+
        larm.at(sm[X])+
        leye.at(sm[L])+
        nose.at(sm[N])+
        reye.at(sm[R])+
        rarm.at(sm[Y])+"\n "+
        torso.at(sm[T])+"\n "+
        base.at(sm[B]);
    }
    
    //if none of the hands are up
    return
    hat.at(sm[H])+"\n "+
    leye.at(sm[L])+
    nose.at(sm[N])+
    reye.at(sm[R])+"\n"+
    larm.at(sm[X])+
    torso.at(sm[T])+
    rarm.at(sm[Y])+"\n "+
    base.at(sm[B]);

}

