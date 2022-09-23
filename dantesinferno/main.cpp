//
//  main.cpp
//  dantesinferno
//
//  Created by Mithatcan Bursalı on 28.01.2022.
//

#include <iostream>
#include <string>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main(){
    
    int dantes_selection;
    int dantes_second_selection;
    int dantes_third_selection;
    string dantes_final_answer;
    int dantes_second_after_selection = 0;
    int dantes_third_after_selection = 0;
    string play_again = "y";
    transform(play_again.begin(), play_again.end(), play_again.begin(), ::toupper);

    cout << "DANTE'S ADVENTURES" << endl << endl;
    sleep(5);
    
    do{
    cout << "One exhausted day, Dante fell sleep, and finds himself in a very strange place." << endl << endl;
    sleep(4);
    cout << "When Dante couldn't know what should to do, wise old man Virgil appears and said:" << endl << endl;
    sleep(4);
    cout << "VIRGIL: My name is Virgil, just calm down and follow me; everything will be good." << endl << endl;
    sleep(4);
    cout << "WHAT YOU WANT TO DO?" << endl << endl;
    cout << "1. Follow Virgil" << endl;
    cout << "2. Escape from him" << endl << endl;
    cout << "DANTE'S SELECTION:";
    cin >> dantes_selection;
    
        if (dantes_selection != 1 && dantes_selection != 2){
        do {
            cout << " " << endl;
            cin >> dantes_selection;
        } while (dantes_selection != 1 && dantes_selection != 2);}
        sleep(1);
    cout << endl;
    
    if (dantes_selection == 1) {
        cout << "*Dante starts to follow Virgil*" << endl << endl;
        sleep(4);
        cout << "DANTE: Where i am, who are you?" << endl;
        sleep(4);
        cout << "VIRGIL: It doesn't matter who i am or where are we, just know that Beatrice sent me from far away, she is waiting you; be calm and follow my lead." << endl <<endl;
        sleep(5);
        cout  << "*Dante suprised by name of Beatrice, he doesn't say anything and started to follow Virgil*" << endl;
        sleep(4);
    }
    
    
    else if (dantes_selection == 2) {
        cout << "*Dante starts to run away from Virgil, and he tumbles on rock and fall.*" << endl << endl;
        sleep(4);
        cout << "*Virgil goes near of Dante*" << endl << endl;
        sleep(4);
        cout << "VIRGIL: Be calm my son, Beatrice sent me from far away, just follow my lead. She is waiting you." << endl;
        sleep(5);
        cout  << "*Dante suprised by name of Beatrice, he doesn't say anything and started to follow Virgil*" << endl;
        sleep(4);
    }
    
    
    cout << endl << "AFTER 30 MINUTES LONG WALK" <<endl << endl;
    sleep(5);
    cout << "Dante and Virgil comes to a near of river covered with stinky human bodies." << endl;
    sleep(4);
    cout << "Dante is scared and couldn't understand what is going on in here, he just wonders what is going on." << endl << endl;
    sleep(4);
    cout << "DANTE: Where are we my master, please enlight me." << endl;
    sleep(4);
    cout << "VIRGIL: This place is the place where everything starts." << endl;
    sleep(4);
    cout << "VIRGIL: I need to go now my son, just wait for me; you will be safe." << endl << endl;
    sleep(4);
    cout << "*Dante starts to think what he should now*" << endl << endl;
    cout << "1. Wait Virgil" << endl;
    cout << "2. Explore around" << endl << endl;
    cout << "DANTE'S SELECTION:";
    cin >> dantes_second_selection;
        if (dantes_second_selection != 1 && dantes_second_selection != 2){
        do {
            cout << " " << endl;
            cin >> dantes_second_selection;
        } while (dantes_second_selection != 1 && dantes_second_selection != 2);}
    sleep(1);
    cout << endl;
    
    
    
    
        
    
    
    if (dantes_second_selection == 2){
        cout << "*Curious Dante tries to explore around and an ugly man holds his arms*" << endl << endl;
        sleep(4);
        cout << "UGLY MAN: I know you and you are in danger!" << endl;
        sleep(4);
        cout << "UGLY MAN: You should follow me, now!" << endl << endl;
        sleep(4);
        cout << "1. Follow him" << endl;
        cout << "2. Go back to place which Virgil said wait for him" << endl;
        cout << "DANTE'S SELECTION:";
        cin >> dantes_second_after_selection;
        if (dantes_second_after_selection != 1 && dantes_second_after_selection != 2){
        do {
            cout << " " << endl;
            cin >> dantes_second_after_selection;
        } while (dantes_second_after_selection != 1 && dantes_second_after_selection != 2);}
        sleep(1);
        
        if (dantes_second_after_selection == 1){
            cout << "*Dante starts to follow him*" << endl;
            sleep(4);
            cout << "*Dante and ugly man, approaches a giant door and group of curious, haggard people*" << endl << endl;
            sleep(4);
            cout << "UGLY MAN: If you want to be safe, go to your home; you must pass this door, i can't come with you; you should do it alone!" << endl << endl;
            sleep(4);
            cout << "1. Pass through the door" << endl;
            cout << "2. Start to run to place which Virgil said wait for him" << endl;
            cout << "DANTE'S SELECTION:";
            cin >> dantes_second_after_selection;
            if (dantes_second_after_selection != 1 && dantes_second_after_selection != 2){
            do {
                cout << " " << endl;
                cin >> dantes_second_after_selection;
            } while (dantes_second_after_selection != 1 && dantes_second_after_selection != 2);}
            sleep(1);
            if (dantes_second_after_selection == 1){
                cout << "Unfortunately our boy Dante fell for this trap, and he trapped for this trap and he forced to be prisoned in the hell." <<endl << endl;
                 dantes_second_selection = 0;
                 dantes_second_after_selection = 0;
                sleep(3);
                cout << "DO YOU WANT TO PLAY AGAIN? (y for yes, n for no)" << endl;
                cin >> play_again;
                transform(play_again.begin(), play_again.end(), play_again.begin(), ::toupper);
                cout << endl << endl;
            }
            
        }
        
    }
    
    
    if (dantes_second_selection == 1 || dantes_second_after_selection == 2){
            
        cout << "VIRGIL COMES BACK WITH A BOATMAN" << endl << endl;
        sleep(4);
        cout << "DANTE: My master, i thought you will never comeback!" << endl;
        sleep(4);
        cout << "VIRGIL: We don't have much time, we need to pass this river." << endl << endl;
        sleep(5);
        cout << "AFTER FIFTEEN MINUTES, THEY PASSES THE RIVER" << endl << endl;
        
        cout << "VIRGIL: Be patient my son, you will see your Beatrice in very soon."<< endl << endl;
        sleep(4);
        cout << "*Dante starts to feel dizzy after he heard Beatrice's name again." << endl << endl;
        sleep(4);
        cout << "DANTE: Forgive me master, where are we now?" << endl;
        sleep(4);
        cout << "VIRGIL: You will learn." << endl << endl;
        sleep(4);
        cout << "*Dante and Virgil approaches to giant door." << endl << endl;
        sleep(4);
        cout << "VIRGIL: Dante; i need to go now, you need to be alone for this meeting." << endl;
        sleep(4);
        cout <<"Don't be feel scared, everything will be good." << endl;
        sleep(4);
        cout << "*Virgil starts to go to another way." << endl << endl;
        sleep(4);
        
        cout << "1. Go through to door" << endl;
        cout << "2. Go after Virgil" << endl << endl;
        cout << "DANTE'S SELECTION:";
        cin >> dantes_third_selection;
        if (dantes_third_selection != 1 && dantes_third_selection != 2){
        do {
            cout << " " << endl;
            cin >> dantes_third_selection;
        } while (dantes_third_selection != 1 && dantes_third_selection != 2);}
        sleep(1);
        
        if (dantes_third_selection == 2){
            cout << "When Dante tries to follow Virgil, Virgil disappears." << endl;
            sleep(4);
            cout << "Dante starts to panic and he understands that he is lost." << endl;
            sleep(4);
            cout << "After he starts to go back to the door, he comes across a path, which up to left and right." << endl << endl;
            sleep(4);
            
            cout << "1. Go Left" << endl;
            cout << "2. Go Right" << endl;
            cout << "DANTE'S SELECTION:";
            cin >> dantes_third_after_selection;
            if (dantes_third_after_selection != 1 && dantes_third_after_selection != 2){
            do {
                cout << " " << endl;
                cin >> dantes_third_after_selection;
            } while (dantes_third_after_selection != 1 && dantes_third_after_selection != 2);}
            sleep(1);
            
            if (dantes_third_after_selection == 1){
                cout << "After a long walk, Dante sees a door which he thought the same door." << endl;
                sleep(4);
                cout << "Dante goes through to door, after a two steps he sees hungry, bloodthirst eyes looking to him." << endl;
                sleep(4);
                cout << "He tries to go back, but the door is doesn't open anymore." << endl;
                sleep(4);
                cout << "He starts to live in this place, in hell eternally." << endl << endl;
                dantes_third_selection = 0;
                dantes_third_after_selection = 0;
                sleep(2);
                cout << "DO YOU WANT TO PLAY AGAIN? (y for yes, n for no)" << endl;
                cin >> play_again;
                transform(play_again.begin(), play_again.end(), play_again.begin(), ::toupper);
                cout << endl << endl;
            }
            
            
        }
        
        
        
        if (dantes_third_after_selection == 1){
            cout << "After a long walk, Dante sees a door which he thought the same door." << endl;
            sleep(4);

        }
        
        
        
        
        
        if (dantes_third_selection == 1 || dantes_third_after_selection == 1){
            cout << "Dante goes through door, he sees a corpse mountain and a light." << endl;
            sleep(4);
            cout << "He stars to walk to the light, when he comes he sees a door and a silhouette." << endl << endl;
            sleep(4);
            cout << "SILHOUETTE: Who starts everything?" << endl;
            cout << "DANTE'S ANSWER:" << endl;
            cin >> dantes_final_answer;
            transform(dantes_final_answer.begin(), dantes_final_answer.end(), dantes_final_answer.begin(), ::toupper);
            sleep(1);
            
            if (dantes_final_answer == "BEATRICE"){
                cout << endl << "Silhouette disappears and the door opens." << endl;
                sleep(4);
                cout << "When he pass through the door, he sees most lighest room he's ever see..." << endl << endl;
                sleep(4);
                cout << "Then, he sees his Beatrice." << endl;
                sleep(4);
                cout << "When he prepares himself to ask lots of question Beatrice silences him and grabs his hand." << endl;
                sleep(4);
                cout << "Dante feels himself confortable, probably most confortoble he ever feels and they starts to walk." << endl << endl;
                sleep(3);
                cout << "DO YOU WANT TO PLAY AGAIN? (y for yes, n for no)" << endl;
                cin >> play_again;
                transform(play_again.begin(), play_again.end(), play_again.begin(), ::toupper);
                cout << endl << endl;
             }
                
            if (dantes_final_answer != "BEATRICE"){
                cout << "Silhouette closes Dante's eyes and Dante falls asleep." << endl;
                sleep(4);
                cout << "When he wakes up, he is in real world, his home and tries to understand what is happened." << endl << endl;
                sleep(3);
                cout << "DO YOU WANT TO PLAY AGAIN? (y for yes, n for no)" << endl;
                cin >> play_again;
                cout << endl << endl;
                transform(play_again.begin(), play_again.end(), play_again.begin(), ::toupper);
                cout << endl << endl;
            }
                
                
        }
        
        
        

            
        }

        
        
        
        
    }while(play_again == "Y");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
