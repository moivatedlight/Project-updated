// The purpose of this project is to expand upon project one and fullfill the terms of project 2 in order to properly run without any syntax errors

// Alfonso David Perez
// CSC 5 CIS 47113
// Last Modified Date June 1st 2023

#include <iostream>
#include <iomanip>


using namespace std;

struct Dollface
{
    char dollface;
    int dollfaceH = 150;
    int dollfaceH2 = 150;
    int hairsnag = 30;
    int daydream = 20;
    int houseSmash = 40;
    int flowerbasket = 25;
};
struct Bonkers
{
    char bonkers;
    int bonkersH = 350;
    int bonkersH2 = 350;
    int BONK = 20;
    int BAM = 10;
    int BOOM = 25;
    int CRUNCH = 15;
};
struct HackeySlashy
{
    char hackeyslashy;
    int hackeyslashyH = 100;
    int hackeyslashyH2 = 100;
    int slash = 50;
    int hacknslash = 30;
    int dashnslash = 20;
    int deepcuts = 20;
};
struct DoctorPlague
{
    char doctorplague;
    int doctorplagueH = 200;
    int doctorplagueH2 = 200;
    int Pbomb = 20;
    int Hconcoction = 10;
    int Thebigone = 35;
    int smokewall = 5;
};

int PlayeroneCharC;
int PlayertwoCharC;
int PlayeroneMoveC;
int PlayertwoMoveC;


void characterVoicelineP (const Dollface& dolldface, const Bonkers& bonkers, const HackeySlashy& hackeyslashy, const DoctorPlague& doctorplague);
void characterVoicelineP2 (const Dollface& dolldface, const Bonkers& bonkers, const HackeySlashy& hackeyslashy, const DoctorPlague& doctorplague);

void charactersfightingdollndoll(int& dollfaceH, int& dollfaceH2, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC);

void charactersfightingdollbonk(int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC);

void charactersfightingdollhackey(int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightingbonkdoll(int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightingbonknbonk(int& bonkersH, int& bonkersH2, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightingbonkhackey(int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightingbonkplag(int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightinghackeydoll(int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightinghackeybonk(int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfighthackeynhackey(int& hackeyslashH, int& hackeyslashH2, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfighthackeyplag(int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightplagdoll(int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightplagbonk(int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightplaghackey(int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC);

void characterfightplagnplag(int& doctorplagueH, int& doctorplagueH2, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& PlayeroneMoveC, int& PlayertwoMoveC);



int main ()
{
    struct Dollface dfc;
    struct Bonkers bok;
    struct HackeySlashy hsc;
    struct DoctorPlague dpc;
    
    cout << "****************************************************************************" << endl;
    cout << "Welcome to the Quad Rumble! Choose one of the four characters you would like to play, and who your second player would like to play and get ready to fight!" << endl;
    cout << "****************************************************************************" << endl;
    cout << "Player 1 choose who you would like to play." << endl
    << "Press 1 if you would like to play Dollface" << endl
    << "Press 2 if you would like to play Bonkers" << endl
    << "Press 3 if you would like to play Hackeys Slashy" << endl
    << "Press 4 if you would like to play Doctor Plague" << endl;
    cin >> PlayeroneCharC;
    cout << endl;
    
    characterVoicelineP(dfc, bok, hsc, dpc);
    cout << endl;
    
    cout << "Player 2 choose who you would like to play." << endl
    << "Press 1 if you would like to play Dollface" << endl
    << "Press 2 if you would like to play Bonkers" << endl
    << "Press 3 if you would like to play Hackeys Slashy" << endl
    << "Press 4 if you would like to play Doctor Plague" << endl;
    cin >> PlayertwoCharC;
    cout << endl;
    
    characterVoicelineP2(dfc, bok, hsc, dpc);
    cout << endl;

    cout << "So fighters this is how it is going to go, it will be a back in forth turn by turn fight." << endl
    <<" Player one will move first and then player two. Be careful and don't get over confident." << endl
    << " This fight can go either way. ALRIGHT FIGHTERS BEGIN!" << endl;
    
    cout << endl;
    
    if (PlayeroneCharC == 1 && PlayertwoCharC == 1)
    {
        charactersfightingdollndoll(dfc.dollfaceH, dfc.dollfaceH2, dfc.hairsnag, dfc.daydream, dfc.houseSmash, dfc.flowerbasket, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 1 && PlayertwoCharC == 2)
    {
        charactersfightingdollbonk(dfc.dollfaceH, dfc.hairsnag, dfc.daydream, dfc.houseSmash, dfc.flowerbasket, bok.bonkersH, bok.BONK, bok.BAM, bok.BOOM, bok.CRUNCH, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 1 && PlayertwoCharC == 3)
    {
        charactersfightingdollhackey (dfc.dollfaceH, dfc.hairsnag, dfc.daydream, dfc.houseSmash, dfc.flowerbasket, hsc.hackeyslashyH, hsc.slash, hsc.hacknslash, hsc.dashnslash, hsc.deepcuts, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 1)
    {
        characterfightingbonkdoll (bok.bonkersH, bok.BONK, bok.BAM, bok.BOOM, bok.CRUNCH, dfc.dollfaceH, dfc.hairsnag, dfc.daydream, dfc.houseSmash, dfc.flowerbasket, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 2)
    {
        characterfightingbonknbonk (bok.bonkersH, bok.bonkersH2, bok.BONK, bok.BAM, bok.BOOM, bok.CRUNCH, PlayeroneMoveC, PlayertwoMoveC);
    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 3)
    {
        characterfightingbonkhackey (bok.bonkersH, bok.BONK, bok.BAM, bok.BOOM, bok.CRUNCH, hsc.hackeyslashyH, hsc.slash, hsc.hacknslash, hsc.dashnslash, hsc.deepcuts, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 2 && PlayertwoCharC == 4)
    {
        characterfightingbonkplag (bok.bonkersH, bok.BONK, bok.BAM, bok.BOOM, bok.CRUNCH, dpc.doctorplagueH, dpc.Pbomb, dpc.Hconcoction, dpc.Thebigone, dpc.smokewall, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 1)
    {
        characterfightinghackeydoll (hsc.hackeyslashyH, hsc.slash, hsc.hacknslash, hsc.dashnslash, hsc.deepcuts, dfc.dollfaceH, dfc.hairsnag, dfc.daydream, dfc.houseSmash, dfc.flowerbasket, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 2)
    {
        characterfightinghackeybonk (hsc.hackeyslashyH, hsc.slash, hsc.hacknslash, hsc.dashnslash, hsc.deepcuts, bok.bonkersH, bok.BONK, bok.BAM, bok.BOOM, bok.CRUNCH, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 3)
    {
        characterfighthackeynhackey (hsc.hackeyslashyH, hsc.hackeyslashyH2, hsc.slash, hsc.hacknslash, hsc.dashnslash, hsc.deepcuts, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 3 && PlayertwoCharC == 4)
    {
        characterfighthackeyplag (hsc.hackeyslashyH, hsc.slash, hsc.hacknslash, hsc.dashnslash, hsc.deepcuts, dpc.doctorplagueH, dpc.Pbomb, dpc.Hconcoction, dpc.Thebigone, dpc.smokewall, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 1)
    {
        characterfightplagdoll (dpc.doctorplagueH, dpc.Pbomb, dpc.Hconcoction, dpc.Thebigone, dpc.smokewall, dfc.dollfaceH, dfc.hairsnag, dfc.daydream, dfc.houseSmash, dfc.flowerbasket, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 2)
    {
        characterfightplagbonk (dpc.doctorplagueH, dpc.Pbomb, dpc.Hconcoction, dpc.Thebigone, dpc.smokewall, bok.bonkersH, bok.BONK, bok.BAM, bok.BOOM, bok.CRUNCH, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 3)
    {
        characterfightplaghackey (dpc.doctorplagueH, dpc.Pbomb, dpc.Hconcoction, dpc.Thebigone, dpc.smokewall, hsc.hackeyslashyH, hsc.slash, hsc.hacknslash, hsc.dashnslash, hsc.deepcuts, PlayeroneMoveC, PlayertwoMoveC);

    }
    else if (PlayeroneCharC == 4 && PlayertwoCharC == 4)
    {
        characterfightplagnplag (dpc.doctorplagueH, dpc.doctorplagueH2, dpc.Pbomb, dpc.Hconcoction, dpc.Thebigone, dpc.smokewall, PlayeroneMoveC, PlayertwoMoveC);

    }
    else
        cout << "Error I have no idea how you got here because you should not pass the other check, but if you manage to." << endl
        << "HOW DARE YOU, YOU BROKE MY CODE" << endl;
    
    return 0;
}
void characterVoicelineP (const Dollface& dolldface, const Bonkers& bonkers, const HackeySlashy& hackeyslashy, const DoctorPlague& doctorplague)
{
    do
    {
        
        if (PlayeroneCharC == 1)
        {
            cout << "Let's shove them in the Dollhouse!" << endl;
        }
        else if (PlayeroneCharC == 2)
        {
            cout << "I'm gonna Bonkya down to size" << endl;
        }
        else if (PlayeroneCharC == 3)
        {
            cout << "You are going to get chopped to bits" << endl;
        }
        else if (PlayeroneCharC == 4)
        {
            cout << "You cannot outlast the Plague, many have tired and all have failed" << endl;
        }
        else
            cout << "Not a valid choice please try again" << endl;
    }
    while (PlayeroneCharC < 1 && PlayeroneCharC > 4);
    
}

void characterVoicelineP2 (const Dollface& dolldface, const Bonkers& bonkers, const HackeySlashy& hackeyslashy, const DoctorPlague& doctorplague)
{
    do
    {
        
        if (PlayertwoCharC == 1)
        {
            cout << "Lets's show that first player what it means to play house" << endl;
        }
        else if (PlayertwoCharC == 2)
        {
            cout << "Leave it up to me, I'll bonk them like a mole" << endl;
        }
        else if (PlayertwoCharC == 3)
        {
            cout << "I'll slice you in two" << endl;
        }
        else if (PlayertwoCharC == 4)
        {
            cout << "Plague often favors those who are decisive and fast, don't fall behind" << endl;
        }
        else
            cout << "Not a valid choice please try again" << endl;
    }
    while (PlayertwoCharC < 1 && PlayertwoCharC > 4);
    
}
void charactersfightingdollndoll(int& dollfaceH, int& dollfaceH2, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25dh)" << endl;
        cin >> PlayeroneMoveC;
        if (PlayeroneMoveC == 1)
        {
            dollfaceH2 = dollfaceH2 - hairsnag;
        }
        else if (PlayeroneMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + daydream;
        }
        else if (PlayeroneMoveC == 3)
        {
            dollfaceH2 = dollfaceH2 - houseSmash;
        }
        else if (PlayeroneMoveC == 4)
        {
            dollfaceH2 = dollfaceH2 - flowerbasket;
        }
        cout << "Dollface Health: " << dollfaceH << endl;
            cout
            << "1. Hair Snag (Base Damage 30)" << endl
            << "2. Day Dream (Heal for 20)" << endl
            << "3. House Smash (Base Damage 40)" << endl
            << "4. Flower Basket (Base Damage 25)" << endl;
            cin >> PlayertwoMoveC;
            if (PlayertwoMoveC == 1)
            {
                dollfaceH = dollfaceH - hairsnag;
            }
            else if (PlayertwoMoveC == 2 && dollfaceH2 < 150)
            {
                dollfaceH2 = dollfaceH2 + daydream;
            }
            else if (PlayertwoMoveC == 3)
            {
                dollfaceH = dollfaceH - houseSmash;
            }
            else if (PlayertwoMoveC == 4)
            {
                dollfaceH = dollfaceH - flowerbasket;
            }
        cout << "Dollface Health2: " << dollfaceH2 << endl;
    }
    while (dollfaceH > 0 && dollfaceH2 > 0);
if (dollfaceH == 0 && dollfaceH2 > 0)
{
    cout << "Player 2 wins!" << endl;
}
    else if (dollfaceH > 0 && dollfaceH2 == 0)
    {
        cout << "Player 1 wins!" << endl;
    }
    else
        cout << "Intresting idk how you got here" << endl;
}
void charactersfightingdollbonk (int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25)" << endl;
        cin >> PlayeroneMoveC;
        if (PlayeroneMoveC == 1)
        {
            bonkersH = bonkersH - hairsnag;
        }
        else if (PlayeroneMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + daydream;
        }
        else if (PlayeroneCharC == 3)
        {
            bonkersH = bonkersH - houseSmash;
        }
        else if (PlayeroneCharC == 4)
        {
            bonkersH = bonkersH - flowerbasket;
        }
        cout << "Dollface Health: " << dollfaceH << endl;
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayertwoMoveC;
        if (PlayertwoMoveC == 1)
        {
            dollfaceH = dollfaceH - BONK;
        }
        else if (PlayertwoMoveC == 2)
        {
            dollfaceH = dollfaceH - BAM;
        }
        else if (PlayertwoMoveC == 3)
        {
            dollfaceH = dollfaceH - BOOM;
        }
        else if (PlayertwoMoveC == 4)
        {
            dollfaceH = dollfaceH - CRUNCH;
        }
        cout << "Bonkers Health: " << bonkersH << endl;
    }while (dollfaceH > 0 && bonkersH >0);
        if (dollfaceH > 0 && bonkersH <= 0)
        {
            cout << "Dollface wins, Bonkers loses congrats player one" << endl;
        }
    else if (dollfaceH <= 0 && bonkersH > 0)
    {
        cout << "Bonkers wins, Dollface loses congrats player two" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}

void charactersfightingdollhackey (int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25)" << endl;
        if (PlayeroneMoveC == 1)
        {
            hackeyslashH = hackeyslashH - hairsnag;
        }
        else if (PlayeroneMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + daydream;
        }
        else if (PlayeroneMoveC == 3)
        {
            hackeyslashH = hackeyslashH - houseSmash;
        }
        else if (PlayeroneMoveC == 4)
        {
            hackeyslashH = hackeyslashH - flowerbasket;
        }
        cout << "Dollface Health: " << dollfaceH << endl;
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayertwoMoveC;
        if (PlayertwoMoveC == 1)
        {
            dollfaceH = dollfaceH - slash;
        }
        else if (PlayertwoMoveC == 2)
        {
            dollfaceH = dollfaceH - hacknslash;
        }
        else if (PlayertwoMoveC == 3)
        {
            dollfaceH = dollfaceH - dashnslash;
        }
        else if (PlayertwoMoveC == 4)
        {
            dollfaceH = dollfaceH - deepcuts;
        }
        cout << "HackeySlash Health: " << hackeyslashH << endl;
    }while (dollfaceH > 0 && hackeyslashH > 0);
    if (dollfaceH > 0 && hackeyslashH <= 0)
    {
        cout << "Dollface wins, HackeySlash loses congrats player one" << endl;
    }
else if (dollfaceH <= 0 && hackeyslashH > 0)
{
    cout << "HackeySlash wins, Dollface loses congrats player two" << endl;
}
else
    cout << "idk how this happened.... wellll anyways hehe" << endl;
}


void charactersfightingdollplag (int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            doctorplagueH = doctorplagueH - hairsnag;
        }
        else if (PlayeroneMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + daydream;
        }
        else if (PlayeroneMoveC == 3)
        {
            doctorplagueH = doctorplagueH - houseSmash;
        }
        else if (PlayeroneMoveC == 4)
        {
            doctorplagueH = doctorplagueH - flowerbasket;
        }
        cout << "Dollface Health: " << dollfaceH << endl;
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayertwoMoveC;
        if (PlayertwoMoveC == 1)
        {
            dollfaceH = dollfaceH - Pbomb;
        }
        else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH = doctorplagueH + Hconcocotion;
        }
        else if (PlayertwoMoveC == 3)
        {
            dollfaceH = dollfaceH - Thebigone;
        }
        else if (PlayertwoMoveC == 4)
        {
            dollfaceH = dollfaceH - smokewall;
        }
        cout << "Doctor Plague: " << doctorplagueH << endl;
        }while (dollfaceH > 0 && doctorplagueH > 0);
        if (dollfaceH > 0 && doctorplagueH <= 0)
        {
            cout << "Dollface wins, Doctor Plague loses congrats player one" << endl;
        }
        else if (dollfaceH <= 0 && doctorplagueH > 0)
        {
            cout << "Doctor Plague wins, Dollface loses congrats player two" << endl;
        }
        else
            cout << "idk how this happened.... wellll anyways hehe" << endl;
    }

void characterfightingbonkdoll(int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayeroneMoveC;
        if (PlayeroneMoveC == 1)
        {
            dollfaceH = dollfaceH - BONK;
        }
        else if (PlayeroneMoveC == 2)
        {
            dollfaceH = dollfaceH - BAM;
        }
        else if (PlayeroneMoveC == 3)
        {
            dollfaceH = dollfaceH - BOOM;
        }
        else if (PlayeroneMoveC == 4)
        {
            dollfaceH = dollfaceH - CRUNCH;
        }
        cout << "Bonkers Health: " << bonkersH << endl;
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25)" << endl;
        cin >> PlayertwoMoveC;
        if (PlayertwoMoveC == 1)
        {
            bonkersH = bonkersH - hairsnag;
        }
        else if (PlayertwoMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + daydream;
        }
        else if (PlayertwoCharC == 3)
        {
            bonkersH = bonkersH - houseSmash;
        }
        else if (PlayertwoCharC == 4)
        {
            bonkersH = bonkersH - flowerbasket;
        }
        cout << "Dollface Health: " << dollfaceH << endl;
    }while (dollfaceH > 0 && bonkersH > 0);
        if (dollfaceH > 0 && bonkersH <= 0)
        {
            cout << "Dollface wins, Bonkers loses congrats player two" << endl;
        }
        else if (dollfaceH <= 0 && bonkersH > 0)
        {
            cout << "Bonkers wins, Dollface loses congrats player one" << endl;
        }
        else
            cout << "idk how this happened.... wellll anyways hehe" << endl;
    }

void characterfightingbonknbonk(int& bonkersH, int& bonkersH2, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayeroneMoveC;
        if (PlayeroneMoveC == 1)
        {
            bonkersH2 = bonkersH2 - BONK;
        }
        else if (PlayeroneMoveC == 2)
        {
            bonkersH2 = bonkersH2 - BAM;
        }
        else if (PlayertwoMoveC == 3)
        {
            bonkersH2 = bonkersH2 - BOOM;
        }
        else if (PlayertwoMoveC == 4)
        {
            bonkersH2 = bonkersH2 - CRUNCH;
        }
        cout << "Bonkers Health: " << bonkersH << endl;
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            bonkersH = bonkersH - BONK;
        }
        else if (PlayertwoMoveC == 2)
        {
            bonkersH = bonkersH - BAM;
        }
        else if (PlayertwoMoveC == 3)
        {
            bonkersH = bonkersH - BOOM;
        }
        else if (PlayertwoMoveC == 4)
        {
            bonkersH = bonkersH - CRUNCH;
        }
        cout << "Bonkers Health2: " << bonkersH2 << endl;
    }while (bonkersH > 0 && bonkersH2 > 0);
    if (bonkersH > 0 && bonkersH2 <= 0)
    {
        cout << "Bonkers wins, Bonkers loses congrats player one" << endl;
    }
    else if (bonkersH <= 0 && bonkersH2 > 0)
    {
        cout << "Bonkers wins, Bonkers loses congrats player two" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}


void characterfightingbonkhackey(int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            hackeyslashH = hackeyslashH - BONK;
        }
        else if (PlayeroneMoveC == 2)
        {
            hackeyslashH = hackeyslashH - BAM;
        }
        else if (PlayeroneMoveC == 3)
        {
            hackeyslashH = hackeyslashH - BOOM;
        }
        else if (PlayeroneMoveC == 4)
        {
            hackeyslashH = hackeyslashH - CRUNCH;
        }
        cout << "Bonkers Health: " << bonkersH << endl;
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            bonkersH = bonkersH - slash;
        }
        else if (PlayertwoMoveC == 2)
        {
            bonkersH = bonkersH - hacknslash;
        }
        else if (PlayertwoMoveC == 3)
        {
            bonkersH = bonkersH - dashnslash;
        }
        else if (PlayertwoMoveC == 4)
        {
            bonkersH = bonkersH - deepcuts;
        }
        cout << "HackeySlash Health: " << hackeyslashH << endl;
    }while (bonkersH > 0 && hackeyslashH > 0);
    if (bonkersH > 0 && hackeyslashH <= 0)
    {
        cout << "Bonkers wins, HackeySlash loses congrats player one" << endl;
    }
    else if (bonkersH <= 0 && hackeyslashH > 0)
    {
        cout << "HackeySlash wins, Bonkers loses congrats player two" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}
    
void characterfightingbonkplag(int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            doctorplagueH = doctorplagueH - BONK;
        }
        else if (PlayeroneMoveC == 2)
        {
            doctorplagueH = doctorplagueH - BAM;
        }
        else if (PlayeroneMoveC == 3)
        {
            doctorplagueH = doctorplagueH - BOOM;
        }
        else if (PlayeroneMoveC == 4)
        {
            doctorplagueH = doctorplagueH - CRUNCH;
        }
        cout << "Bonkers Health: " << bonkersH << endl;
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            bonkersH = bonkersH - Pbomb;
        }
        else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH = doctorplagueH + Hconcocotion;
        }
        else if (PlayertwoMoveC == 3)
        {
            bonkersH = bonkersH - Thebigone;
        }
        else if (PlayertwoMoveC == 4)
        {
            bonkersH = bonkersH - smokewall;
        }
        cout << "Doctor Plague Health: " << doctorplagueH << endl;
    }while (bonkersH > 0 && doctorplagueH > 0);
    if (bonkersH > 0 && doctorplagueH <= 0)
    {
        cout << "Doctor Plague wins, Bonkers loses congrats player two" << endl;
    }
    else if (bonkersH <= 0 && doctorplagueH > 0)
    {
        cout << "Bonkers wins, Doctor Plague loses congrats player one" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}
void characterfightinghackeydoll(int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
do
    {
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            dollfaceH = dollfaceH - slash;
        }
        else if (PlayeroneMoveC == 2)
        {
            dollfaceH = dollfaceH - hacknslash;
        }
        else if (PlayeroneMoveC == 3)
        {
            dollfaceH = dollfaceH - dashnslash;
        }
        else if (PlayeroneMoveC == 4)
        {
            dollfaceH = dollfaceH - deepcuts;
        }
        cout << "HackeySlash Health: " << hackeyslashH << endl;
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25)" << endl;
        cin >> PlayertwoMoveC;
        if (PlayertwoMoveC == 1)
        {
            hackeyslashH = hackeyslashH - hairsnag;
        }
        else if (PlayertwoMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + daydream;
        }
        else if (PlayertwoCharC == 3)
        {
            hackeyslashH = hackeyslashH - houseSmash;
        }
        else if (PlayertwoCharC == 4)
        {
            hackeyslashH = hackeyslashH - flowerbasket;
        }
        cout << "Dollface Health: " << dollfaceH << endl;
    }while (hackeyslashH > 0 && dollfaceH > 0);
    if (hackeyslashH > 0 && dollfaceH <= 0)
    {
        cout << "HackeySlash wins, Dollface loses congrats player one" << endl;
    }
    else if (hackeyslashH <= 0 && dollfaceH > 0)
    {
        cout << "Dollface wins, HackeySlash loses congrats player two" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}

void characterfightinghackeybonk(int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            bonkersH = bonkersH - slash;
        }
        else if (PlayeroneMoveC == 2)
        {
            bonkersH = bonkersH - hacknslash;
        }
        else if (PlayeroneMoveC == 3)
        {
            bonkersH = bonkersH - dashnslash;
        }
        else if (PlayeroneMoveC == 4)
        {
            bonkersH = bonkersH - deepcuts;
        }
        cout << "HackeySlash Health: " << hackeyslashH << endl;
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            hackeyslashH = hackeyslashH - BONK;
        }
        else if (PlayertwoMoveC == 2)
        {
            hackeyslashH = hackeyslashH - BAM;
        }
        else if (PlayertwoMoveC == 3)
        {
            hackeyslashH = hackeyslashH - BOOM;
        }
        else if (PlayertwoMoveC == 4)
        {
            hackeyslashH = hackeyslashH - CRUNCH;
        }
        cout << "Bonkers Health: " << bonkersH << endl;
    }while (hackeyslashH > 0 && bonkersH > 0);
        if (hackeyslashH > 0 && bonkersH <= 0)
        {
            cout << "HackeySlash wins, Bonkers loses congrats player one" << endl;
        }
        else if (hackeyslashH <= 0 && bonkersH > 0)
        {
            cout << "Bonkers wins, HackeySlash loses congrats player two" << endl;
        }
        else
            cout << "idk how this happened.... wellll anyways hehe" << endl;
    }

void characterfighthackeynhackey(int& hackeyslashH, int& hackeyslashH2, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            hackeyslashH2 = hackeyslashH2 - slash;
        }
        else if (PlayeroneMoveC == 2)
        {
            hackeyslashH2 = hackeyslashH2 - hacknslash;
        }
        else if (PlayeroneMoveC == 3)
        {
            hackeyslashH2 = hackeyslashH2 - dashnslash;
        }
        else if (PlayeroneMoveC == 4)
        {
            hackeyslashH2 = hackeyslashH2 - deepcuts;
        }
        cout << "HackeySlash Health: " << hackeyslashH << endl;
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            hackeyslashH2 = hackeyslashH2 - slash;
        }
        else if (PlayertwoMoveC == 2)
        {
            hackeyslashH2 = hackeyslashH2 - hacknslash;
        }
        else if (PlayertwoMoveC == 3)
        {
            hackeyslashH2 = hackeyslashH2 - dashnslash;
        }
        else if (PlayertwoMoveC == 4)
        {
            hackeyslashH2 = hackeyslashH2 - deepcuts;
        }
        cout << "HackeySlash Health2: " << hackeyslashH2 << endl;
    }while (hackeyslashH > 0 && hackeyslashH2 > 0);
    if (hackeyslashH > 0 && hackeyslashH2 <= 0)
    {
        cout << "HackeySlash wins, HackeySlash loses congrats player one" << endl;
    }
    else if (hackeyslashH <= 0 && hackeyslashH2 > 0)
    {
        cout << "HackeySlash wins, HackeySlash loses congrats player two" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}

void characterfighthackeyplag(int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            doctorplagueH = doctorplagueH - slash;
        }
        else if (PlayeroneMoveC == 2)
        {
            doctorplagueH = doctorplagueH - hacknslash;
        }
        else if (PlayeroneMoveC == 3)
        {
            doctorplagueH = doctorplagueH - dashnslash;
        }
        else if (PlayeroneMoveC == 4)
        {
            doctorplagueH = doctorplagueH - deepcuts;
        }
        cout << "HackeySlash Health: " << hackeyslashH << endl;
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            hackeyslashH = hackeyslashH - Pbomb;
        }
        else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH = doctorplagueH + Hconcocotion;
        }
        else if (PlayertwoMoveC == 3)
        {
            hackeyslashH = hackeyslashH - Thebigone;
        }
        else if (PlayertwoMoveC == 4)
        {
            hackeyslashH = hackeyslashH - smokewall;
        }
        cout << "Doctor Plague Health: " << doctorplagueH << endl;
    }while (hackeyslashH > 0 && doctorplagueH > 0);
    if (hackeyslashH > 0 && doctorplagueH <= 0)
    {
        cout << "HackeySlash wins, Doctor Plague loses congrats player one" << endl;
    }
    else if (hackeyslashH <= 0 && doctorplagueH > 0)
    {
        cout << "Doctor Plague wins, HackeySlash loses congrats player two" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}
void characterfightplagdoll(int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& dollfaceH, int hairsnag, int daydream, int houseSmash, int flowerbasket, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            dollfaceH = dollfaceH - Pbomb;
        }
        else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH = doctorplagueH + Hconcocotion;
        }
        else if (PlayeroneMoveC == 3)
        {
            dollfaceH = dollfaceH - Thebigone;
        }
        else if (PlayeroneMoveC == 4)
        {
            dollfaceH = dollfaceH - smokewall;
        }
        cout << "Doctor Plague Health: " << doctorplagueH << endl;
        cout
        << "1. Hair Snag (Base Damage 30)" << endl
        << "2. Day Dream (Heal for 20)" << endl
        << "3. House Smash (Base Damage 40)" << endl
        << "4. Flower Basket (Base Damage 25)" << endl;
        cin >> PlayertwoMoveC;
        if (PlayertwoMoveC == 1)
        {
            doctorplagueH = doctorplagueH - hairsnag;
        }
        else if (PlayertwoMoveC == 2 && dollfaceH < 150)
        {
            dollfaceH = dollfaceH + daydream;
        }
        else if (PlayertwoCharC == 3)
        {
            doctorplagueH = doctorplagueH - houseSmash;
        }
        else if (PlayertwoCharC == 4)
        {
            doctorplagueH = doctorplagueH - flowerbasket;
        }
        cout << "Dollface Health: " << dollfaceH << endl;
    }while (dollfaceH > 0 && doctorplagueH > 0);
    if (dollfaceH > 0 && doctorplagueH <= 0)
    {
        cout << "Dollface wins, Doctor Plague loses congrats player two" << endl;
    }
    else if (dollfaceH <= 0 && doctorplagueH > 0)
    {
        cout << "Doctor Plague wins, Dollface loses congrats player one" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}
void characterfightplagbonk(int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& bonkersH, int BONK, int BAM, int BOOM, int CRUNCH, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            bonkersH = bonkersH - Pbomb;
        }
        else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH = doctorplagueH + Hconcocotion;
        }
        else if (PlayeroneMoveC == 3)
        {
            bonkersH = bonkersH - Thebigone;
        }
        else if (PlayeroneMoveC == 4)
        {
            bonkersH = bonkersH - smokewall;
        }
        cout << "Doctor Plague Health: " << doctorplagueH << endl;
        cout
        << "1. BONK (Base Damage 20)" << endl
        << "2. BAM (Base Damage 10)" << endl
        << "3. BOOM (Base Damage 25)" << endl
        << "4. CRUNCH (Base Damage 15)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            doctorplagueH = doctorplagueH - BONK;
        }
        else if (PlayertwoMoveC == 2)
        {
            doctorplagueH = doctorplagueH - BAM;
        }
        else if (PlayertwoMoveC == 3)
        {
            doctorplagueH = doctorplagueH - BOOM;
        }
        else if (PlayertwoMoveC == 4)
        {
            doctorplagueH = doctorplagueH - CRUNCH;
        }
        cout << "Bonkers Health: " << bonkersH << endl;
    }while (bonkersH > 0 && doctorplagueH > 0);
    if (bonkersH > 0 && doctorplagueH <= 0)
    {
        cout << "Bonkers wins, Doctor Plague loses congrats player two" << endl;
    }
    else if (bonkersH <= 0 && doctorplagueH > 0)
    {
        cout << "Doctor Plague wins, Bonkers loses congrats player one" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}

void characterfightplaghackey(int& doctorplagueH, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& hackeyslashH, int slash, int hacknslash, int dashnslash, int deepcuts, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            hackeyslashH = hackeyslashH - Pbomb;
        }
        else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH = doctorplagueH + Hconcocotion;
        }
        else if (PlayeroneMoveC == 3)
        {
            hackeyslashH = hackeyslashH - Thebigone;
        }
        else if (PlayeroneMoveC == 4)
        {
            hackeyslashH = hackeyslashH - smokewall;
        }
        cout << "Doctor Plague health: " << doctorplagueH << endl;
        cout
        <<  "1. Slash (Base Damage 50)" << endl
        <<  "2. HacknSlash (Base Damage 30)" << endl
        <<  "3. Dashslash (Base Damage 20)" << endl
        <<  "4. Deepcuts (Base Damage 20)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            doctorplagueH = doctorplagueH - slash;
        }
        else if (PlayertwoMoveC == 2)
        {
            doctorplagueH = doctorplagueH - hacknslash;
        }
        else if (PlayertwoMoveC == 3)
        {
            doctorplagueH = doctorplagueH - dashnslash;
        }
        else if (PlayertwoMoveC == 4)
        {
            doctorplagueH = doctorplagueH - deepcuts;
        }
        cout << "HackeySlash Health: " << hackeyslashH << endl;
    }while (hackeyslashH > 0 && doctorplagueH > 0);
    if (hackeyslashH > 0 && doctorplagueH <= 0)
    {
        cout << "HackeySlash wins, Doctor Plague loses congrats player two" << endl;
    }
    else if (hackeyslashH <= 0 && doctorplagueH > 0)
    {
        cout << "Doctor Plague wins, Bonkers loses congrats player one" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}
void characterfightplagnplag(int& doctorplagueH, int& doctorplagueH2, int Pbomb, int Hconcocotion, int Thebigone, int smokewall, int& PlayeroneMoveC, int& PlayertwoMoveC)
{
    do
    {
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayeroneMoveC;
        
        if (PlayeroneMoveC == 1)
        {
            doctorplagueH2 = doctorplagueH2 - Pbomb;
        }
        else if ((PlayeroneMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH = doctorplagueH + Hconcocotion;
        }
        else if (PlayeroneMoveC == 3)
        {
            doctorplagueH2 = doctorplagueH2 - Thebigone;
        }
        else if (PlayeroneMoveC == 4)
        {
            doctorplagueH2 = doctorplagueH2 - smokewall;
        }
        cout << "Health Doctor Plague: " << doctorplagueH << endl;
        cout
        << "1. Poison bomb (Base Damage 20)" << endl
        << "2. Health Concotion (Heal for 10)" << endl
        << "3. The Big One (Base Damage 35)" << endl
        << "4. Smokewall (Base Damage 5)" << endl;
        cin >> PlayertwoMoveC;
        
        if (PlayertwoMoveC == 1)
        {
            doctorplagueH = doctorplagueH - Pbomb;
        }
        else if ((PlayertwoMoveC == 2) && (doctorplagueH < 200))
        {
            doctorplagueH2 = doctorplagueH2 + Hconcocotion;
        }
        else if (PlayertwoMoveC == 3)
        {
            doctorplagueH = doctorplagueH - Thebigone;
        }
        else if (PlayertwoMoveC == 4)
        {
            doctorplagueH = doctorplagueH - smokewall;
        }
        cout << "Health Doctor Plague2: " << doctorplagueH2 << endl;
    }while (doctorplagueH > 0 && doctorplagueH2 > 0);
    if (doctorplagueH > 0 && doctorplagueH2 <= 0)
    {
        cout << "Doctor Plague wins, Doctor Plague loses congrats player one" << endl;
    }
    else if (doctorplagueH <= 0 && doctorplagueH2 > 0)
    {
        cout << "Doctor Plague wins, Doctor Plague loses congrats player two" << endl;
    }
    else
        cout << "idk how this happened.... wellll anyways hehe" << endl;
}
