#include<iostream>
#include<unistd.h>
#include<string>


using namespace std;

int main(){

    string question = "what's the capital of France?";
    string correct_answer = "Paris";
    string player_answer;
    string start_game = "Y";
    string response;
    string name;


            cout<<"Welcome to my quiz game!"<<endl;
                sleep(4);
            cout<<"Can you please tell me your name?"<<endl;
                sleep(2);
    
        cin>> name;
        
            cout<<"Hello "<<name<<", what a nice name u have ;D"<<endl;
                sleep(2);
            cout<<"In this quiz, you can test your habilites at many concepts"<<endl;
                sleep(2);
            cout<<"So, lets do it, are you ready?"<<endl<<"Y or N"<<endl;

        cin>>response;

    if(response == start_game){
 
            cout<<"Great! So let's start"<<endl;
                sleep(5);
            cout<<question<<endl;
                sleep(2);
        cin>>player_answer;
    
    if (player_answer == correct_answer){

                cout<<"that's the right answer! I knew you was a genius"<<endl<<"good bye! ;D";
                    sleep(5);
    return 0; 
        } else{
                cout<<"i'm sorry, but your answer was wrong, but I bet you can do it :D";
                    sleep(5);
    return 0;
            }
            

    }     else{
            cout<<"Bruh";
            sleep(2);
    return 0;
    }

}