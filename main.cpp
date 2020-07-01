#include <iostream>
using namespace std;

int totalfinder(int totalr1, int totalr2, int totalr3) {
int total = totalr1 + totalr2 + totalr3;
  return total;
}

int main() {
int triesr1 = 5;
int triesr2 = 5;
int triesr3 = 5;
int triesr4 = 5;
    
int moneyr1 = 0;
int moneyr2 = 0;
int moneyr3 = 0;
int moneyr4 = 0;
    
int random;
int guess;
int round = 1;
    
int num = 0;




int totalr1;
int totalr2 = 0;
int totalr3 = 0;
int totalr4 = 0;
srand(unsigned(time(0)));
random = rand()%20+1;
string y;
string next;
string nextrd;
string last; 


cout << "(Kaan Kayis has no affilation with Press Your Luck of any of it's properties)" << endl;
cout << "Welcome to Kaan's version of the hit TV Show; Press Your Luck. So the objective is to get as much money as possible each round. Sounds simple right? Well... no. You could get this thing called a Whammy, which could set you back to 0 dollars each round. There will be a total of 3 rounds, with 5 chances to win each time. Your score will be saved each after each round, and cannot be changed thereafter! Remember, no wammies!!!" << endl;

cout << "In Round One, you can win up to $25,000! That's alot! Please enter, next, to go on to the next round/stage! " << endl;
getline(cin, next);
while (triesr1 > 0) {

  if (triesr1 > 0 and num == 0 and next == "next" ) {
            switch(random) {
              case 1:
              moneyr1 = moneyr1 + 10;
              cout << "You gained $10! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr1 = moneyr1 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr1 = moneyr1 + 100;
               cout << "You gained $100! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr1 = moneyr1 + 200;
                    cout << "You gained $200! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr1 = moneyr1*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr1 = moneyr1 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr1 = moneyr1 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr1 = moneyr1 + 10;
                cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr1 = moneyr1 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr1 = moneyr1 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr1 = moneyr1 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << "  total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr1 = moneyr1 + 20;
                cout << "You have gained $20! " << endl;
                 totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr1 = moneyr1 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr1 = moneyr1 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr1 = moneyr1 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr1 = moneyr1 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr1 = moneyr1 + 200;
                    cout << "You won $200! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr1 = moneyr1 + 300;
                           cout << "You won $300! " << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr1 = moneyr1 + 25000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr1 = moneyr1 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }
    srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);

   if (triesr1 > 0 and num == 1 and next=="next") {
            switch(random) {
              case 1:
              moneyr1 = moneyr1 + 10;
              cout << "You gained $10! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr1 = moneyr1 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr1 = moneyr1 + 100;
               cout << "You gained $100! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr1 = moneyr1 + 200;
                    cout << "You gained $200! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr1 = moneyr1*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr1 = moneyr1 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr1 = moneyr1 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr1 = moneyr1 + 10;
                cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr1 = moneyr1 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr1 = moneyr1 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr1 = moneyr1 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << "  total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr1 = moneyr1 + 20;
                cout << "You have gained $20! " << endl;
                 totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr1 = moneyr1 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr1 = moneyr1 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr1 = moneyr1 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr1 = moneyr1 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr1 = moneyr1 + 200;
                    cout << "You won $200! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr1 = moneyr1 + 300;
                           cout << "You won $300! " << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr1 = moneyr1 + 25000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr1 = moneyr1 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }

  srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
          
if (triesr1 > 0 and num == 2 and next == "next") {
            switch(random) {
              case 1:
              moneyr1 = moneyr1 + 10;
              cout << "You gained $10! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr1 = moneyr1 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr1 = moneyr1 + 100;
               cout << "You gained $100! " << endl;
                 totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr1 = moneyr1 + 200;
                    cout << "You gained $200! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr1 = moneyr1*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr1 = moneyr1 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr1 = moneyr1 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr1 = moneyr1 + 10;
                cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr1 = moneyr1 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr1 = moneyr1 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr1 = moneyr1 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << "  total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr1 = moneyr1 + 20;
                cout << "You have gained $20! " << endl;
                 totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr1 = moneyr1 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr1 = moneyr1 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr1 = moneyr1 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr1 = moneyr1 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr1 = moneyr1 + 200;
                    cout << "You won $200! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr1 = moneyr1 + 300;
                           cout << "You won $300! " << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr1 = moneyr1 + 25000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr1 = moneyr1 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    srand(unsigned(time(0)));

            }

random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);

if (triesr1 > 0 and num == 3 and next == "next" ) {
            switch(random) {
              case 1:
              moneyr1 = moneyr1 + 10;
              cout << "You gained $10! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr1 = moneyr1 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr1 = moneyr1 + 100;
               cout << "You gained $100! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr1 = moneyr1 + 200;
                    cout << "You gained $200! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr1 = moneyr1*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr1 = moneyr1 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr1 = moneyr1 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr1 = moneyr1 + 10;
                cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr1 = moneyr1 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr1 = moneyr1 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr1 = moneyr1 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << "  total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr1 = moneyr1 + 20;
                cout << "You have gained $20! " << endl;
                 totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr1 = moneyr1 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr1 = moneyr1 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr1 = moneyr1 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr1 = moneyr1 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr1 = moneyr1 + 200;
                    cout << "You won $200! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr1 = moneyr1 + 300;
                           cout << "You won $300! " << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr1 = moneyr1 + 25000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr1 = moneyr1 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }
    srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
  }
if (triesr1 > 0 and num == 4 and next == "next" ) {
            switch(random) {
              case 1:
              moneyr1 = moneyr1 + 10;
              cout << "You gained $10! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr1 = moneyr1 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr1 = moneyr1 + 100;
               cout << "You gained $100! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr1 = moneyr1 + 200;
                    cout << "You gained $200! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr1 = moneyr1*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr1 = moneyr1 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr1 = moneyr1 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr1 = moneyr1 + 10;
                cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr1 = moneyr1 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr1 = moneyr1 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr1 = moneyr1 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << "  total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr1 = moneyr1 + 20;
                cout << "You have gained $20! " << endl;
                 totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr1 = moneyr1 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr1 = moneyr1 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr1 = moneyr1 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr1 = moneyr1 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr1 = moneyr1 + 200;
                    cout << "You won $200! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr1 = moneyr1 + 300;
                           cout << "You won $300! " << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr1 = moneyr1 + 25000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr1 = moneyr1 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }
    srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
}

if (triesr1 > 0 and num == 5 and next == "next" ) {
            switch(random) {
              case 1:
              moneyr1 = moneyr1 + 10;
              cout << "You gained $10! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr1 = moneyr1 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr1 = moneyr1 + 100;
               cout << "You gained $100! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr1 = moneyr1 + 200;
                    cout << "You gained $200! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr1 = moneyr1*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr1 = moneyr1 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total" << endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr1 = moneyr1 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr1 = moneyr1 + 10;
                cout << "You have gained $10! " << endl;
                     totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr1 = moneyr1 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr1 = moneyr1 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr1 = moneyr1 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << "  total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr1 = moneyr1 + 20;
                cout << "You have gained $20! " << endl;
                 totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr1 = moneyr1 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr1 = moneyr1 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr1 = moneyr1 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr1 = moneyr1 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr1 = moneyr1 + 200;
                    cout << "You won $200! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr1 = moneyr1 + 300;
                           cout << "You won $300! " << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr1 = moneyr1 + 25000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr1 = moneyr1 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr1 = moneyr1;
                    cout << "You now have $" << totalr1 << " total"<< endl;
                    triesr1--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }
    cout << "Congrats! You have $" << totalr1 << "this round! Please type ,next round, for the next round!" << endl;








            }
      
   cout << "Congrats! You have $" << totalr1 << " this round! Please type ,next, for the next round: " << endl;
    getline(cin,nextrd);
num = 0;
  next = "kaan";
}
   }
  }
}
cout << "Welcome to round 2! The top prize this round is $50,000! Please type next to continue: " << endl;
getline(cin,nextrd);

num=0;
nextrd="next";
srand(unsigned(time(0)));
random = rand()%20+1;

while (triesr2 > 0) {
if (nextrd=="next") {
  if (triesr2 > 0 and num == 0) {
            switch(random) {
              case 1:
              moneyr2 = moneyr2 + 10;
              cout << "You gained $10! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr2 = moneyr2 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr2 = moneyr2 + 100;
               cout << "You gained $100! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr2 = moneyr2 + 200;
                    cout << "You gained $200! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr2 = moneyr2*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr2 = moneyr2 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr2 = moneyr2 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr2 = moneyr2 + 10;
                cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr2 = moneyr2 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr2 = moneyr2 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr2 = moneyr2 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << "  total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr2 = moneyr2 + 20;
                cout << "You have gained $20! " << endl;
                 totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr2 = moneyr2 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr2 = moneyr2 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr2 = moneyr2 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr2 = moneyr2 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr2 = moneyr2 + 200;
                    cout << "You won $200! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr2 = moneyr2 + 300;
                           cout << "You won $300! " << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr2 = moneyr2 + 50000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr2 = moneyr2 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }
    srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);

   if (triesr2 > 0 and num == 1 and next=="next") {
            switch(random) {
              case 1:
              moneyr2 = moneyr2 + 10;
              cout << "You gained $10! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr2 = moneyr2 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr2 = moneyr2 + 100;
               cout << "You gained $100! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr2 = moneyr2 + 200;
                    cout << "You gained $200! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr2 = moneyr2*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr2 = moneyr2 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr2 = moneyr2 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr2 = moneyr2 + 10;
                cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr2 = moneyr2 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr2 = moneyr2 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr2 = moneyr2 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << "  total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr2 = moneyr2 + 20;
                cout << "You have gained $20! " << endl;
                 totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr2 = moneyr2 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr2 = moneyr2 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr2 = moneyr2 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr2 = moneyr2 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr2 = moneyr2 + 200;
                    cout << "You won $200! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr2 = moneyr2 + 300;
                           cout << "You won $300! " << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr2 = moneyr2 + 25000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr2 = moneyr2 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }

  srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
          
if (triesr2 > 0 and num == 2 and next == "next") {
            switch(random) {
              case 1:
              moneyr2 = moneyr2 + 10;
              cout << "You gained $10! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr2 = moneyr2 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr2 = moneyr2 + 100;
               cout << "You gained $100! " << endl;
                 totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr2 = moneyr2 + 200;
                    cout << "You gained $200! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr2 = moneyr2*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr2 = moneyr2 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr2 = moneyr2 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr2 = moneyr2 + 10;
                cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr2 = moneyr2 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr2 = moneyr2 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr2  = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr2 = moneyr2 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << "  total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr2 = moneyr2 + 20;
                cout << "You have gained $20! " << endl;
                 totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr2 = moneyr2 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr2 = moneyr2 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr2 = moneyr2 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr2 = moneyr2 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr2 = moneyr2 + 200;
                    cout << "You won $200! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr2 = moneyr2 + 300;
                           cout << "You won $300! " << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr2 = moneyr2 + 50000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr2 = moneyr2 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    srand(unsigned(time(0)));

            }

random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);

if (triesr2 > 0 and num == 3 and next == "next" ) {
            switch(random) {
              case 1:
              moneyr2 = moneyr2 + 10;
              cout << "You gained $10! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr2 = moneyr2 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr2 = moneyr2 + 100;
               cout << "You gained $100! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr2 = moneyr2 + 200;
                    cout << "You gained $200! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr2 = moneyr2*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr2 = moneyr2 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr2 = moneyr2 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr2 = moneyr2 + 10;
                cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr2 = moneyr2 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr2 = moneyr2 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr2 = moneyr2 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << "  total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr2 = moneyr2 + 20;
                cout << "You have gained $20! " << endl;
                 totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr2 = moneyr2 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr2 = moneyr2 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr2 = moneyr2 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr2 = moneyr2 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr2 = moneyr2 + 200;
                    cout << "You won $200! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr2 = moneyr2 + 300;
                           cout << "You won $300! " << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr2 = moneyr2 + 50000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr2 = moneyr2 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }
    srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
  }
if (triesr2 > 0 and num == 4 and next == "next" ) {
            switch(random) {
              case 1:
              moneyr2 = moneyr2 + 10;
              cout << "You gained $10! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr2 = moneyr2 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr2 = moneyr2 + 100;
               cout << "You gained $100! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr2 = moneyr2 + 200;
                    cout << "You gained $200! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr2 = moneyr2*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr2 = moneyr2 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr2 = moneyr2 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr2 = moneyr2 + 10;
                cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                     cout<< "You have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr2 = moneyr2 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr2 = moneyr2 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr2 = moneyr2 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << "  total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr2 = moneyr2 + 20;
                cout << "You have gained $20! " << endl;
                 totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr2 = moneyr2 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr2 = moneyr2 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr2 = moneyr2 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr2 = moneyr2 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr2 = moneyr2 + 200;
                    cout << "You won $200! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr2 = moneyr2 + 300;
                           cout << "You won $300! " << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr2 = moneyr2 + 50000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr2 = moneyr2 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }
    srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
}

if (triesr2 > 0 and num == 5 and next == "next" ) {
            switch(random) {
              case 1:
              moneyr2 = moneyr2 + 10;
              cout << "You gained $10! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
              srand(unsigned(time(0)));
random = rand()%20+1;

              break;
              case 2:
              moneyr2 = moneyr2 + 1000;
               cout << "You gained $1000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
              case 3 :
              moneyr2 = moneyr2 + 100;
               cout << "You gained $100! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 4:
                    moneyr2 = moneyr2 + 200;
                    cout << "You gained $200! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 5 :
                moneyr2 = moneyr2*0;
                 cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 6:
                    moneyr2 = moneyr2 + 10;
                    cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total" << endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 7:
                    moneyr2 = moneyr2 + 0;
                    cout << "You have gained nothing this round! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 8:
                moneyr2 = moneyr2 + 10;
                cout << "You have gained $10! " << endl;
                     totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 9:
                moneyr2 = moneyr2 + 2000;
                cout << "You have gained $2000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 10:
                moneyr2 = moneyr2 + 10000;
                cout << "You have gained $10,000! " << endl;
                    totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
              case 11:
              moneyr2 = moneyr2 * 0;
              cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
               totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << "  total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
              break;
                case 12:
                moneyr2 = moneyr2 + 20;
                cout << "You have gained $20! " << endl;
                 totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 13:
                moneyr2 = moneyr2 *0;
                cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
                totalr2 = moneyr2;
                    cout << "You now have $" << totalr2;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 14:
                moneyr2 = moneyr2 + 5000;
                cout << "You have gained $5000! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr1--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                    case 15:
                    moneyr2 = moneyr2 + 1500;
                    cout << "You have gained $1500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                case 16:
                moneyr2 = moneyr2 * 0 ;
                cout << "WHAMMYY! You have lost it all for this round!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                break;
                case 17:
                    moneyr2 = moneyr2 + 200;
                    cout << "You won $200! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    case 18:
                           moneyr2 = moneyr2 + 300;
                           cout << "You won $300! " << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                           break;
                case 19:
                    moneyr2 = moneyr2 + 50000;
                    cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                  totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    num++;
                    next="kaan";
                    srand(unsigned(time(0)));
random = rand()%20+1;
break;
                case 20:
                    moneyr2 = moneyr2 + 500;
                    cout << "Wow! You have won $500! " << endl;
                   totalr2 = moneyr2;
                    cout << "You now have $" << totalr2 << " total"<< endl;
                    triesr2--;
                    next="kaan";
                    num++;
                    srand(unsigned(time(0)));
random = rand()%20+1;
                    break;
                    
            }


            }
      
   

}
   }
  }
cout << "Congrats! You have $" << totalr2 << " this round! Please type ,next, for the next round! : ";
    getline(cin,last);

if (last == "home") {
cout << "Your going home with $" << totalr1 + totalr2 <<"! Thank you so much for playing!";
}
num = 0;

next = "kaan";



if (last == "next") {
cout << "Ok, so this is the final round! You gained $" << totalr1 << " in the first round, and $" << totalr2<< " in the second round! " "Thats $" << totalr1 + totalr2 << " total!" << " The jackpot for this round is still $50,000 (we run this show on a budget you know)! Please enter next to continue: ";
getline(cin,next);
}
while (triesr3>0) {
  if (next == "next") {
    num=0;
nextrd="next";
srand(unsigned(time(0)));
random = rand()%20+1;
 
while (triesr3 > 0) {
if (nextrd=="next") {
 if (triesr3 > 0 and num == 0) {
           switch(random) {
             case 1:
             moneyr3 = moneyr3 + 10;
             cout << "You gained $10! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
             srand(unsigned(time(0)));
random = rand()%20+1;
 
             break;
             case 2:
             moneyr3 = moneyr3 + 1000;
              cout << "You gained $1000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
             case 3 :
             moneyr3 = moneyr3 + 100;
              cout << "You gained $100! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 4:
                   moneyr3 = moneyr3 + 200;
                   cout << "You gained $200! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 5 :
               moneyr3 = moneyr3*0;
                cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 6:
                   moneyr3 = moneyr3 + 10;
                   cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 7:
                   moneyr3 = moneyr3 + 0;
                   cout << "You have gained nothing this round! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 8:
               moneyr3 = moneyr3 + 10;
               cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 9:
               moneyr3 = moneyr3 + 2000;
               cout << "You have gained $2000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 10:
               moneyr3 = moneyr3 + 10000;
               cout << "You have gained $10,000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
             case 11:
             moneyr3 = moneyr3 * 0;
             cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
              totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << "  total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
               case 12:
               moneyr3 = moneyr3 + 20;
               cout << "You have gained $20! " << endl;
                totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 13:
               moneyr3 = moneyr3 *0;
               cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 14:
               moneyr3 = moneyr3 + 5000;
               cout << "You have gained $5000! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
                   case 15:
                   moneyr3 = moneyr3 + 1500;
                   cout << "You have gained $1500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 16:
               moneyr3 = moneyr3 * 0 ;
               cout << "WHAMMYY! You have lost it all for this round!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 17:
                   moneyr3 = moneyr3 + 200;
                   cout << "You won $200! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                   case 18:
                          moneyr3 = moneyr3 + 300;
                          cout << "You won $300! " << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                          break;
               case 19:
                   moneyr3 = moneyr3 + 50000;
                   cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 20:
                   moneyr3 = moneyr3 + 500;
                   cout << "Wow! You have won $500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                  
           }
   srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
 
  if (triesr3 > 0 and num == 1 and next=="next") {
           switch(random) {
             case 1:
             moneyr3 = moneyr3 + 10;
             cout << "You gained $10! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
             srand(unsigned(time(0)));
random = rand()%20+1;
 
             break;
             case 2:
             moneyr3 = moneyr3 + 1000;
              cout << "You gained $1000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
             case 3 :
             moneyr3 = moneyr3 + 100;
              cout << "You gained $100! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 4:
                   moneyr3 = moneyr3 + 200;
                   cout << "You gained $200! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 5 :
               moneyr3 = moneyr3*0;
                cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 6:
                   moneyr3 = moneyr3 + 10;
                   cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 7:
                   moneyr3 = moneyr3 + 0;
                   cout << "You have gained nothing this round! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 8:
               moneyr3 = moneyr3 + 10;
               cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 9:
               moneyr3 = moneyr3 + 2000;
               cout << "You have gained $2000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 10:
               moneyr3 = moneyr3 + 10000;
               cout << "You have gained $10,000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
             case 11:
             moneyr3 = moneyr3 * 0;
             cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
              totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << "  total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
               case 12:
               moneyr3 = moneyr3 + 20;
               cout << "You have gained $20! " << endl;
                totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 13:
               moneyr3 = moneyr3 *0;
               cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 14:
               moneyr3 = moneyr3 + 5000;
               cout << "You have gained $5000! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
                   case 15:
                   moneyr3 = moneyr3 + 1500;
                   cout << "You have gained $1500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 16:
               moneyr3 = moneyr3 * 0 ;
               cout << "WHAMMYY! You have lost it all for this round!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 17:
                   moneyr3 = moneyr3 + 200;
                   cout << "You won $200! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                   case 18:
                          moneyr3 = moneyr3 + 300;
                          cout << "You won $300! " << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                          break;
               case 19:
                   moneyr3 = moneyr3 + 25000;
                   cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 20:
                   moneyr3 = moneyr3 + 500;
                   cout << "Wow! You have won $500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                  
           }
 
 srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
        
if (triesr3 > 0 and num == 2 and next == "next") {
           switch(random) {
             case 1:
             moneyr3 = moneyr3 + 10;
             cout << "You gained $10! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
             srand(unsigned(time(0)));
random = rand()%20+1;
 
             break;
             case 2:
             moneyr3 = moneyr3 + 1000;
              cout << "You gained $1000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
             case 3 :
             moneyr3 = moneyr3 + 100;
              cout << "You gained $100! " << endl;
                totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 4:
                   moneyr3 = moneyr3 + 200;
                   cout << "You gained $200! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 5 :
               moneyr3 = moneyr3*0;
                cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 6:
                   moneyr3 = moneyr3 + 10;
                   cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 7:
                   moneyr3 = moneyr3 + 0;
                   cout << "You have gained nothing this round! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 8:
               moneyr3 = moneyr3 + 10;
               cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 9:
               moneyr3 = moneyr3 + 2000;
               cout << "You have gained $2000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 10:
               moneyr3 = moneyr3 + 10000;
               cout << "You have gained $10,000! " << endl;
                   totalr3  = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
             case 11:
             moneyr3 = moneyr3 * 0;
             cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
              totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << "  total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
               case 12:
               moneyr3 = moneyr3 + 20;
               cout << "You have gained $20! " << endl;
                totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 13:
               moneyr3 = moneyr3 *0;
               cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 14:
               moneyr3 = moneyr3 + 5000;
               cout << "You have gained $5000! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
                   case 15:
                   moneyr3 = moneyr3 + 1500;
                   cout << "You have gained $1500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 16:
               moneyr3 = moneyr3 * 0 ;
               cout << "WHAMMYY! You have lost it all for this round!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 17:
                   moneyr3 = moneyr3 + 200;
                   cout << "You won $200! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                   case 18:
                          moneyr3 = moneyr3 + 300;
                          cout << "You won $300! " << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                          break;
               case 19:
                   moneyr3 = moneyr3 + 50000;
                   cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 20:
                   moneyr3 = moneyr3 + 500;
                   cout << "Wow! You have won $500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                   srand(unsigned(time(0)));
 
           }
 
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
 
if (triesr3 > 0 and num == 3 and next == "next" ) {
           switch(random) {
             case 1:
             moneyr3 = moneyr3 + 10;
             cout << "You gained $10! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
             srand(unsigned(time(0)));
random = rand()%20+1;
 
             break;
             case 2:
             moneyr3 = moneyr3 + 1000;
              cout << "You gained $1000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
             case 3 :
             moneyr3 = moneyr3 + 100;
              cout << "You gained $100! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 4:
                   moneyr3 = moneyr3 + 200;
                   cout << "You gained $200! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 5 :
               moneyr3 = moneyr3*0;
                cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 6:
                   moneyr3 = moneyr3 + 10;
                   cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 7:
                   moneyr3 = moneyr3 + 0;
                   cout << "You have gained nothing this round! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 8:
               moneyr3 = moneyr3 + 10;
               cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 9:
               moneyr3 = moneyr3 + 2000;
               cout << "You have gained $2000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 10:
               moneyr3 = moneyr3 + 10000;
               cout << "You have gained $10,000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
             case 11:
             moneyr3 = moneyr3 * 0;
             cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
              totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << "  total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
               case 12:
               moneyr3 = moneyr3 + 20;
               cout << "You have gained $20! " << endl;
                totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 13:
               moneyr3 = moneyr3 *0;
               cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 14:
               moneyr3 = moneyr3 + 5000;
               cout << "You have gained $5000! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
                   case 15:
                   moneyr3 = moneyr3 + 1500;
                   cout << "You have gained $1500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 16:
               moneyr3 = moneyr3 * 0 ;
               cout << "WHAMMYY! You have lost it all for this round!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 17:
                   moneyr3 = moneyr3 + 200;
                   cout << "You won $200! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                   case 18:
                          moneyr3 = moneyr3 + 300;
                          cout << "You won $300! " << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                          break;
               case 19:
                   moneyr3 = moneyr3 + 50000;
                   cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 20:
                   moneyr3 = moneyr3 + 500;
                   cout << "Wow! You have won $500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                  
           }
   srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
 }
if (triesr3 > 0 and num == 4 and next == "next" ) {
           switch(random) {
             case 1:
             moneyr3 = moneyr3 + 10;
             cout << "You gained $10! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
             srand(unsigned(time(0)));
random = rand()%20+1;
 
             break;
             case 2:
             moneyr3 = moneyr3 + 1000;
              cout << "You gained $1000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
             case 3 :
             moneyr3 = moneyr3 + 100;
              cout << "You gained $100! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 4:
                   moneyr3 = moneyr3 + 200;
                   cout << "You gained $200! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 5 :
               moneyr3 = moneyr3*0;
                cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 6:
                   moneyr3 = moneyr3 + 10;
                   cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 7:
                   moneyr3 = moneyr3 + 0;
                   cout << "You have gained nothing this round! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 8:
               moneyr3 = moneyr3 + 10;
               cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                    cout<< "You have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 9:
               moneyr3 = moneyr3 + 2000;
               cout << "You have gained $2000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 10:
               moneyr3 = moneyr3 + 10000;
               cout << "You have gained $10,000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
             case 11:
             moneyr3 = moneyr3 * 0;
             cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
              totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << "  total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
               case 12:
               moneyr3 = moneyr3 + 20;
               cout << "You have gained $20! " << endl;
                totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 13:
               moneyr3 = moneyr3 *0;
               cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 14:
               moneyr3 = moneyr3 + 5000;
               cout << "You have gained $5000! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
                   case 15:
                   moneyr3 = moneyr3 + 1500;
                   cout << "You have gained $1500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 16:
               moneyr3 = moneyr3 * 0 ;
               cout << "WHAMMYY! You have lost it all for this round!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 17:
                   moneyr3 = moneyr3 + 200;
                   cout << "You won $200! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                   case 18:
                          moneyr3 = moneyr3 + 300;
                          cout << "You won $300! " << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                          break;
               case 19:
                   moneyr3 = moneyr3 + 50000;
                   cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 20:
                   moneyr3 = moneyr3 + 500;
                   cout << "Wow! You have won $500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                  
           }
   srand(unsigned(time(0)));
random = rand()%19+2;
cout << "Please enter next to continue: ";
getline(cin, next);
}
 
if (triesr3 > 0 and num == 5 and next == "next" ) {
           switch(random) {
             case 1:
             moneyr3 = moneyr3 + 10;
             cout << "You gained $10! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
             srand(unsigned(time(0)));
random = rand()%20+1;
 
             break;
             case 2:
             moneyr3 = moneyr3 + 1000;
              cout << "You gained $1000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
             case 3 :
             moneyr3 = moneyr3 + 100;
              cout << "You gained $100! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 4:
                   moneyr3 = moneyr3 + 200;
                   cout << "You gained $200! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 5 :
               moneyr3 = moneyr3*0;
                cout << "WHAMMY!!! You have lost all of your money for this round! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 6:
                   moneyr3 = moneyr3 + 10;
                   cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total" << endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 7:
                   moneyr3 = moneyr3 + 0;
                   cout << "You have gained nothing this round! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 8:
               moneyr3 = moneyr3 + 10;
               cout << "You have gained $10! " << endl;
                    totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 9:
               moneyr3 = moneyr3 + 2000;
               cout << "You have gained $2000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 10:
               moneyr3 = moneyr3 + 10000;
               cout << "You have gained $10,000! " << endl;
                   totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
             case 11:
             moneyr3 = moneyr3 * 0;
             cout << "WHAMMYYY!!!! You have lost all of your money for this round! " << endl;
              totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << "  total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
             break;
               case 12:
               moneyr3 = moneyr3 + 20;
               cout << "You have gained $20! " << endl;
                totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 13:
               moneyr3 = moneyr3 *0;
               cout << "WHAMMMY! You have lost it all for this round!! ! " << endl;
               totalr3 = moneyr3;
                   cout << "You now have $" << totalr3;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 14:
               moneyr3 = moneyr3 + 5000;
               cout << "You have gained $5000! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr1--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
                   case 15:
                   moneyr3 = moneyr3 + 1500;
                   cout << "You have gained $1500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
               case 16:
               moneyr3 = moneyr3 * 0 ;
               cout << "WHAMMYY! You have lost it all for this round!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
               break;
               case 17:
                   moneyr3 = moneyr3 + 200;
                   cout << "You won $200! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                   case 18:
                          moneyr3 = moneyr3 + 300;
                          cout << "You won $300! " << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                          break;
               case 19:
                   moneyr3 = moneyr3 + 50000;
                   cout << "Wow! You have hit the jackpot for round one!! Congrats!" << endl;
                 totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   num++;
                   next="kaan";
                   srand(unsigned(time(0)));
random = rand()%20+1;
break;
               case 20:
                   moneyr3 = moneyr3 + 500;
                   cout << "Wow! You have won $500! " << endl;
                  totalr3 = moneyr3;
                   cout << "You now have $" << totalr3 << " total"<< endl;
                   triesr3--;
                   next="kaan";
                   num++;
                   srand(unsigned(time(0)));
random = rand()%20+1;
                   break;
                  
           }
 
 
           }
    
 
 
}
  }
 }
 
 


  }

cout << "GAME OVER" << endl;
cout << "Wow you managed to collect $" << totalfinder(totalr1,totalr2,totalr3) << " in total! Thank you for so much playing my game!" ;
}
}
}
}
}
}

