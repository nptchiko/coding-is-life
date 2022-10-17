#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <unistd.h>
#include <fcntl.h>

///Mãi yêu ITMC :33

using namespace std;
  
int ran(int i)

{
	  return rand() % i;
}

void Game()
 
{	    
    srand(time(NULL));
    
    int player;
    
    vector<int> v1; vector<string> v2;
     
    
    cout << "Choose one of these: \n\n" ;
    
    cout << "1.Paper    2.Scissors    3.Rock\n\n"; 
    
    cout << "Your answer(only number): ";
    
    while ((cin >> player) &&  player != 1 && player != 2 &&  player != 3)
    {
        
        cout << "errol!\n";
        
    }
	    
    for (int i = 1; i < 4; i++)
    {
	 	      v1.push_back(i);
	    
        v2.push_back("Paper");
    
        v2.push_back("Scissors");
     
        v2.push_back("Rock");
 
    }
    random_shuffle(v1.begin(), v1.end());
    
    random_shuffle(v1.begin(), v1.end(), ran);
    
    
    int com = v1[0]; 
    
    string k = v2[com - 1]; string x = v2[player - 1];
    
    cout << "\nYou chose: " << x << endl;
    
    cout << "\nWait for sec...\n";
    
    sleep(2);
    
    cout << "\nSystem has chosen: " << k << endl;
    
   
    switch (com)
    {
        case 1:
            
            if( player == 2 ) cout << "\nYou Won!\n";
            
            if( player == 3 ) cout << "\nGame Won!\n";
            
            break;
        
        case 2:
            
            if( player == 1 ) cout << "\nGame Won!\n";
            
            if( player == 3 ) cout << "\nYou Won!\n";
            
            break;
        
        case 3:
            
            if( player == 1 ) cout << "\nYou Won!\n";
            
            if( player == 2 ) cout << "\nGame Won!\n";
            
            break;
       
    }
    
    if (player == com) cout << "\nDraw\n";
   
}
int main()
  
{
    cout << "Mini game: Rock-Scissor-Paper\n\n";
    
    cout << "Composed by Nguyen Phuoc Tien from IT-01\n\n";
    
    cout << "Press any key to play...\n";
    
    cin.get();   system("clear"); Game();  
    
    while(1)
    
    {
        sleep(2);
        
        cout << "\t\tContinue?\n";
            
        cout << "1.Continue\t\t\t2.Quit\n";
        
        cin.ignore();
        
        int c;
        
        while((cin >> c) && c != 1 && c!= 2)
        {
            cout << "errol!\n";
        }
        
        if (c == 1)
           
           {
               system("clear"); 
               
               Game();   
           }
        if (c == 2)
        
            {
                cout << "Thanks for playing :33";
                
                break;
            }
    }	   
    
    return 0;

}