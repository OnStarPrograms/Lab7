//Written By Aiden Thomas and Jennifer

#include <iostream>
#include "HeiferGenerator.h"
#include <vector>
#include <string>

using namespace std;

// Prototypes for functions so there isnt any disgusting 4x for loops
void ListCows(vector<Cow *>& Heifers);
void ChooseCow(vector<Cow *>& Heifers, int i, char* argv[], int argi);

// Pulls the Argi, and the Argv[]
int main(int argi, char* argv[])
{
    //initialize HeiferGenerator
    HeiferGenerator HeiferCows;
    //Getcows
    vector<Cow *>& Heifers = HeiferCows.getCows();
    //Flag for if there are cmd args
    int flag = 0;
    //used to change a char into a string
    string choice;
    //this here for if there is a segmentation fault
    if (argi > 1)
    {
        //alter char into string... idk why but Its needed
        choice = argv[1];
        if (choice == "-l")
        {
            //called to list the available cows
            ListCows(Heifers);
            flag++;
        }
        if (choice == "-n")
        {
            // cmd to use a specific cow
            ChooseCow(Heifers, 2, argv, argi);
            flag++;
        }
        // used to print the default cow
        if (!flag)
        {
            cout << endl;
            for (int i = 1; i < argi-1; i++)
            {
                cout << argv[i] << " ";
            }
            cout << argv[argi-1] << endl;

            cout << Heifers[0] -> getImage() << endl;
        }
    }
    return 0;
}

void ListCows(vector<Cow *>& Heifers)
{
    //lists the cows by calling the cow lister
    cout << "Cows available:";
    for (int i = 0; i < 4; i++)
    {
        cout << " " << Heifers[i] -> getName();
    }
    cout << endl << endl;
}

void ChooseCow(vector<Cow *>& Heifers, int i, char* argv[], int argi)
{
    //same as default cow, but checks for a new cow, and if there is a dragon, DRAGON
    string choice;
    // another flag
    bool flag = true;
    for (int j = 0; j < 4; j++)
    {
        // loops through the available cows
        choice = argv[i];
        // if its the right cow continue
        if (choice == (Heifers[j] ->getName()))
        {
            cout << endl;
            // print what to say
            for (int k = i+1; k < argi-1; k++)
            {
                cout << argv[k] << " ";
            }
            // stupid formating
            cout << argv[argi-1];
            cout << endl << Heifers[j] -> getImage() << endl;
            // checks if its a DRAGON
            if (nullptr != HeiferGenerator::getDragonPointer(Heifers[j]))
            {
                // tries to find if the DRAGON is fire or ice
                if (HeiferGenerator::getDragonPointer(Heifers[j]) -> canBreatheFire())
                {
                    cout << "This dragon can breathe fire." << endl << endl;
                }
                else
                {
                    cout << "This dragon cannot breathe fire." << endl << endl;
                }
            }
            // flip the flag
            flag = false;
            break;
        }
    }
    // this is for if there wasnt a hit with the DRAGONs
    if (flag)
    {
        cout << "Could not find " << choice << " cow!" << endl << endl;
    }

}