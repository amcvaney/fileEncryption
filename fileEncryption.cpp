// Author: Abigayle McVaney
//
// Description: This program takes the information from the file,
//              then another array encryts it to output.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //Sets the character count for each line
    int counter = 0;
    
    //The information held in the file
    char letter;
    
    //Array for the Upper case letters in the file
    char plainTxt[] = {'A','B','C','D','E','F','G','H','I','J','K','L',
                'M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    //Array for the encrypted Upper case letters in the file
    char ciphTxt[] = {'E','M','N','V','D','L','W','A','U','C','P','O',
                'K','X','Q','B','I','Z','J','R','Y','T','G','S','H','F'};
    
    //Array for the Lower case letters in the file
    char plainTxt2[] = {'a','b','c','d','e','f','g','h','i','j','k','l',
                'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    //Array for the encrypted Lower case letters in the file
    char ciphTxt2[] = {'e','m','n','v','d','l','w','a','u','c','p',
            'o','k','x','q','b','i','z','j','r','y','t','g','s','h','f'};
    
    //Array for the numbers from the file
    char nums[] = {'0','1','2','3','4','5','6','7','8','9'};
    
    //Array for the encrypted numbers from the file
    char ciphNums[] = {'9','8','7','6','5','4','3','2','1','0'};
    
    //Array for the symbols from file
    char sym[] = {'!','$','%','&','\'','(',')','*','+',',','-','.',
                '/',';','<','=','>','?','@','[',']','}','{'};
    
    //Array for the encrypted symbols from the file
    char specialSym[] = {'{','}',']','[','@','?','>','=','<',';','/',
                '.','-',',','+','*',')','(','\'','&','%','$','!'};
    
    //Counter for position in array for spacing
    int spaceCount = 0;
    
    //Array of replacements for every space
    char spaceReplace[] = {'^','~','#','`',':'};
    
    
    
    
    
    //Opens letter
    ifstream fin;
    fin.open("eFile.txt");
    
    //Gets letter information
    while (fin.get(letter))
    {
        
        
        //Checks then replaces the letters (Upper case)
        for(int position = 0; position < sizeof(letter); position++)
        {
            for (int ciph = 0; ciph < sizeof(ciphTxt);  ciph ++)
            {
                if (letter == plainTxt[ciph])
                {
                    cout<<ciphTxt[ciph];
                    counter++;
                }
                
            }
            
            
        }
        
        //Checks then replaces letters (Lower case)
        for(int position = 0; position < sizeof(letter); position++)
        {
            
            for (int ciph = 0; ciph < sizeof(ciphTxt2);  ciph ++)
            {
                if (letter == plainTxt2[ciph])
                {
                    cout<<ciphTxt[ciph];
                    counter++;
                }
                
            }
            
            
        }
        
        //Checks then replaces the numbers
        for(int position = 0; position < sizeof(letter); position++)
        {
            for (int ciph = 0; ciph < sizeof(nums);  ciph ++)
            {
                if (letter == nums[ciph])
                {
                    cout<<ciphNums[ciph];
                    counter++;
                }
                
            }
            
            
        }
        
        //Checks then replaces the symbols
        for(int position = 0; position < sizeof(letter); position++)
        {
            for (int ciph = 0; ciph < sizeof(sym);  ciph ++)
            {
                if (letter == sym[ciph])
                {
                    cout<<specialSym[ciph];
                    counter++;
                }
                
            }
        }
        
        
        //Checks then replaces the spaces
        if(letter == ' ')
        {
            if(spaceCount == 0)
            {
                cout << spaceReplace[0];
                counter++;
            }
            else if(spaceCount == 1)
            {
                cout << spaceReplace[1];
                counter++;
            }
            else if(spaceCount == 2)
            {
                cout << spaceReplace[2];
                counter++;
            }
            else if(spaceCount == 3)
            {
                cout << spaceReplace[3];
                counter++;
            }
            else if(spaceCount == 4)
            {
                cout << spaceReplace[4];
                spaceCount = 0;
                counter++;
            }
            spaceCount++;
            
        }
        
        //Starts new line every 50 characters
        if(counter==50)
        {
            cout << endl;
            counter = 0;
        }
    }
    
    return 0;
}
