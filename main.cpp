#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <Windows.h>
#include <unistd.h>
#include <stdlib.h>
#pragma comment(lib, "winmm.lib")


using namespace std;


void HelloPlayer()
{
    cout << "Time to spin some slots!" << endl;
}

void MixItUpArray(string MixItUp[9999])
{
    MixItUp[0] = "&";
    for(int i = 1; i < 4001; i++)
        MixItUp[i] = "&";


    for(int i = 4001; i < 6001; i++)
        MixItUp[i] = "*";

    for(int i = 6001; i < 8001; i++)
        MixItUp[i] = "@";

    for(int i = 8001; i < 9001; i++)
        MixItUp[i] = "%";

    for(int i = 9001; i < 9801; i++)
        MixItUp[i] = "#";

    for(int i = 9801; i < 9901; i++)
        MixItUp[i] = "$";

    for(int i = 9901; i < 10000; i++)
        MixItUp[i] = "7";

        ///                           4000 2000 2000 1000 800 100 99
  ///  string MixItUp[74000] = {"&", "*", "@", "%", "#", "$", "7"};


}

void Stats(int& PlayerBank, int& counter)
{
    cout << "Bank: " << PlayerBank << endl;
    cout << "Number of attempts: " << counter << endl;
}

void WinningsMultiplier(string& bet, int& winnings, int& PlayerBank)
{
    if (bet == "1")
    {
        winnings = winnings * 10;
    }
    if (bet == "2")
    {
        winnings = winnings * 50;
    }
    if (bet == "3")
    {
        winnings = winnings * 100;
        if( winnings > 9999)
        {
            system("CLS");
            for (int i = 0; i < 50; i++)
            {cout << "************************WARNING WARNING WARNING WARNING WARNING WARNING************************" << endl;
            }
            sleep(2);
            system("CLS");
            cout << "HUGE WINNINGS INCOMING!!!!!!";
            sleep(4);
            system("CLS");
        }
    }
    if (bet == "")
    {
        winnings = winnings * 100;
        if( winnings > 9999)
        {
            system("CLS");
            for (int i = 0; i < 50; i++)
            {cout << "************************WARNING WARNING WARNING WARNING WARNING WARNING************************" << endl;
            }
            sleep(2);
            system("CLS");
            cout << "HUGE WINNINGS INCOMING!!!!!!";
            sleep(4);
            system("CLS");
        }
    }
    cout << "You won " << winnings << "!!!" << endl;
    PlayerBank = PlayerBank + winnings;


}

void Bet10(string Slots[9], int& winnings, string& bet, int& PlayerBank, int& intbet)
{
    ///save the initial value to a new variable for later use. if playerbank has increased, money has won. if not, and the values are the same,
    ///subtract the initial bet value from playerbank
    int DidItChange = PlayerBank;


    if ((Slots[1] == "&") && (Slots[4] == "&") && (Slots[7] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    else if ((Slots[1] == "*") && (Slots[4] == "*") && (Slots[7] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    else if ((Slots[1] == "@") && (Slots[4] == "@") && (Slots[7] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    else if ((Slots[1] == "%") && (Slots[4] == "%") && (Slots[7] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    else if ((Slots[1] == "#") && (Slots[4] == "#") && (Slots[7] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    else if ((Slots[1] == "$") && (Slots[4] == "$") && (Slots[7] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    else if ((Slots[1] == "7") && (Slots[4] == "7") && (Slots[7] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if (PlayerBank == DidItChange)
        PlayerBank = PlayerBank - intbet;
}

void Bet50(string Slots[9], int& winnings, string& bet, int& PlayerBank, int& intbet)
{
    int DidItChange = PlayerBank;
    ///middle row win
    if ((Slots[1] == "&") && (Slots[4] == "&") && (Slots[7] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "*") && (Slots[4] == "*") && (Slots[7] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "@") && (Slots[4] == "@") && (Slots[7] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "%") && (Slots[4] == "%") && (Slots[7] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "#") && (Slots[4] == "#") && (Slots[7] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "$") && (Slots[4] == "$") && (Slots[7] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "7") && (Slots[4] == "7") && (Slots[7] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }

    ///top row win
    if ((Slots[0] == "&") && (Slots[3] == "&") && (Slots[6] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "*") && (Slots[3] == "*") && (Slots[6] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "@") && (Slots[3] == "@") && (Slots[6] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "%") && (Slots[3] == "%") && (Slots[6] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "#") && (Slots[3] == "#") && (Slots[6] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "$") && (Slots[3] == "$") && (Slots[6] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "7") && (Slots[3] == "7") && (Slots[6] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }

    ///bottom row win
    if ((Slots[2] == "&") && (Slots[5] == "&") && (Slots[8] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "*") && (Slots[5] == "*") && (Slots[8] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "@") && (Slots[5] == "@") && (Slots[8] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "%") && (Slots[5] == "%") && (Slots[8] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "#") && (Slots[5] == "#") && (Slots[8] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "$") && (Slots[5] == "$") && (Slots[8] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "7") && (Slots[5] == "7") && (Slots[8] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if (PlayerBank == DidItChange)
        PlayerBank = PlayerBank - intbet;
}

void Bet100(string Slots[9], int& winnings, string& bet, int& PlayerBank, int& intbet)
{
    int DidItChange = PlayerBank;
    ///middle row win
    if ((Slots[1] == "&") && (Slots[4] == "&") && (Slots[7] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);

    }
    if ((Slots[1] == "*") && (Slots[4] == "*") && (Slots[7] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "@") && (Slots[4] == "@") && (Slots[7] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "%") && (Slots[4] == "%") && (Slots[7] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "#") && (Slots[4] == "#") && (Slots[7] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "$") && (Slots[4] == "$") && (Slots[7] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[1] == "7") && (Slots[4] == "7") && (Slots[7] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }

    ///top row win
    if ((Slots[0] == "&") && (Slots[3] == "&") && (Slots[6] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "*") && (Slots[3] == "*") && (Slots[6] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "@") && (Slots[3] == "@") && (Slots[6] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "%") && (Slots[3] == "%") && (Slots[6] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "#") && (Slots[3] == "#") && (Slots[6] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "$") && (Slots[3] == "$") && (Slots[6] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "7") && (Slots[3] == "7") && (Slots[6] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }

    ///bottom row win
    if ((Slots[2] == "&") && (Slots[5] == "&") && (Slots[8] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "*") && (Slots[5] == "*") && (Slots[8] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "@") && (Slots[5] == "@") && (Slots[8] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "%") && (Slots[5] == "%") && (Slots[8] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "#") && (Slots[5] == "#") && (Slots[8] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "$") && (Slots[5] == "$") && (Slots[8] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "7") && (Slots[5] == "7") && (Slots[8] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }

    ///top left to bottom right win
    if ((Slots[0] == "&") && (Slots[4] == "&") && (Slots[8] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "*") && (Slots[4] == "*") && (Slots[8] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "@") && (Slots[4] == "@") && (Slots[8] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "%") && (Slots[4] == "%") && (Slots[8] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "#") && (Slots[4] == "#") && (Slots[8] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "$") && (Slots[4] == "$") && (Slots[8] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[0] == "7") && (Slots[4] == "7") && (Slots[8] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }

    ///bottom left to top right win
    if ((Slots[2] == "&") && (Slots[4] == "&") && (Slots[6] == "&"))
    {
        winnings = 5;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "*") && (Slots[4] == "*") && (Slots[6] == "*"))
    {
        winnings = 10;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "@") && (Slots[4] == "@") && (Slots[6] == "@"))
    {
        winnings = 100;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "%") && (Slots[4] == "%") && (Slots[6] == "%"))
    {
        winnings = 1000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "#") && (Slots[4] == "#") && (Slots[6] == "#"))
    {
        winnings = 10000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "$") && (Slots[4] == "$") && (Slots[6] == "$"))
    {
        winnings = 100000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if ((Slots[2] == "7") && (Slots[4] == "7") && (Slots[6] == "7"))
    {
        winnings = 1000000;
        WinningsMultiplier(bet, winnings, PlayerBank);
    }
    if (PlayerBank == DidItChange)
        PlayerBank = PlayerBank - intbet;
}

void SlotMachine(string Slots[9])
{
    cout << "________________________" << endl <<
            "|      |       |       |" << endl <<
            "|" << setw(3) <<   Slots[0]    << "   |" << setw(4) << Slots[3] << "   |" << setw(4) << Slots[6] << "   |" << endl <<
            "|      |       |       |" << endl <<
            "|" << setw(3) <<   Slots[1]    << "   |" << setw(4) << Slots[4] << "   |" << setw(4) << Slots[7] << "   |" << endl <<
            "|      |       |       |" << endl <<
            "|" << setw(3) << Slots[2] << "   |" << setw(4) << Slots[5] << "   |" << setw(4) << Slots[8] << "   |" << endl <<
            "|      |       |       |" << endl <<
            "------------------------" << endl;
}

void SlotMachineShuffling(string Slots[9], string MixItUp[9999])
{
    srand(time(NULL));
    for(int i = 0; i < 22; i++)
    {
    Slots[0] = MixItUp[rand()%9999];
    Slots[1] = MixItUp[rand()%9999];
    Slots[2] = MixItUp[rand()%9999];
    SlotMachine(Slots);
    usleep(4000);
    system("CLS");
    }

    for(int i = 0; i < 22; i++)
    {

    Slots[3] = MixItUp[rand()%9999];
    Slots[4] = MixItUp[rand()%9999];
    Slots[5] = MixItUp[rand()%9999];
    SlotMachine(Slots);
    usleep(4000);
    system("CLS");
    }
    //i < 35
    for(int i = 0; i < 5; i++)
    {
    Slots[6] = MixItUp[rand()%9999];
    Slots[7] = MixItUp[rand()%9999];
    Slots[8] = MixItUp[rand()%9999];
    SlotMachine(Slots);
    usleep(4000);
    system("CLS");
    }
}

void ResetSlots(string Slots[9])
{
    for(int i = 0; i < 9; i++)
        Slots[i] = "";
}

void PlayerBet(string Slots[9], string& bet, int& winnings, int& PlayerBank, int& intbet, int& counter, string MixItUp[9999])
{
    cout << "Choose a Bet Amount: " << endl
         << "1 - $180 for one way to win" << endl
         << "2 - $500 for three ways to win" << endl
         << "3 - $1000 for five ways to win" << endl;
   label: getline(cin, bet);
   counter = counter + 1;

    if (bet == "1")
    {
        intbet = 180;
        SlotMachineShuffling(Slots, MixItUp);
        SlotMachine(Slots);
        Bet10(Slots, winnings, bet, PlayerBank, intbet);
        ResetSlots(Slots);

    }
    else if (bet == "2")
    {
        intbet = 500;
        SlotMachineShuffling(Slots, MixItUp);
        SlotMachine(Slots);
        Bet50(Slots, winnings, bet, PlayerBank, intbet);
        ResetSlots(Slots);

    }
    else if (bet == "3")
    {
        intbet = 1000;
        SlotMachineShuffling(Slots, MixItUp);
        SlotMachine(Slots);
        Bet100(Slots, winnings, bet, PlayerBank, intbet);
        ResetSlots(Slots);

    }
    else if (bet == "")
    {
        intbet = 10000;
        SlotMachineShuffling(Slots, MixItUp);
        SlotMachine(Slots);
        Bet100(Slots, winnings, bet, PlayerBank, intbet);
        ResetSlots(Slots);
    }
    else
    {
        cout << "Not a valid selection";
        goto label;
    }

}

int main()
{
    string Slots[9];
    string MixItUp[9999];
    string bet;
    int PlayerBank;
    int intbet;
    int winnings;
    int counter;
    HelloPlayer();
    MixItUpArray(MixItUp);
    PlayerBank = 10000;



    while(PlayerBank > 0)
    {
    PlayerBet(Slots, bet, winnings, PlayerBank, intbet, counter, MixItUp);
    Stats(PlayerBank, counter);
    }
    mciSendString("open \"undertalelikejam.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);
    cout << "Out of Money Loser!!! Smell you later!!!";
    sleep(50);
    return 0;
}
