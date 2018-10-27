/* 
TITLE: ZURVIVAL
CONCEPT:
		A Zombie-thriller text based story game that unravels the story about the start of the Zombie apocalypse. Choose
	the right decision and you shall live. Any wrong paths will lead to certain death.
LOOP/S & CONDITIONS:
	while
	if
	if-else
EDIT HISTORY:
	n/a
DATE ACCOMPLISHED:
	27/10/2018
CREATED BY:
	Programmer: Nicah S. Cepe
	Debugger: Rochel B. Furton
	Flowchart Designer: Yvonne B. Santiago
	Based on the story line by: Justine Hilario, Nicah Cepe, and Rochel Furton
	SFX and BGM Director: Caesar Chiapoco
AS A FINALS REQUIREMENT SUBMITTED TO: 
	Prof. Frank Anthony Chin

*/
#include <iostream>
using namespace std;
#include <Windows.h>
#include <conio.h>
#include "mmsystem.h"

		//VOID FUNCTION TO STORE THE TYPE STYLES IN DIFFERENT MODES: Normal, fast, and slow.
	
	void TypeStyle (string print, int i)
	{
			while ( print [i] != '\0')
		{
		cout << print[i];
		Sleep(70);
		i++;
		}
	}	


	void TypeSlow (string print, int i)
	{
			while ( print [i] != '\0')
		{
		cout << print[i];
		Sleep(300);
		i++;
		}
	}	
		
		void TypeFast (string print, int i)
	{
			while ( print [i] != '\0')
		{
		cout << print[i];
		Sleep(10);
		i++;
		}
	}	
		

	// VOID FUNCTION THAT STORES MUSIC
void play_music()
{
		PlaySound(TEXT("BGM.wav"), NULL, SND_ASYNC);
}

void type_music()
{
	PlaySound(TEXT("TYPE.wav"), NULL, SND_ASYNC);
}

void stop_music()
{
	PlaySound(NULL, NULL, 0);
}

void chapter_music()
{
	PlaySound(TEXT("CHAPTER.wav"), NULL, SND_ASYNC);
}

void distantz_music()
{
	PlaySound(TEXT("DISTANTZ.wav"), NULL, SND_ASYNC);
}

void run_music()
{
	PlaySound(TEXT("RUN.wav"), NULL, SND_ASYNC);
}

void runsuspense_music()
{
	PlaySound(TEXT("RUNSUSPENSE.wav"), NULL, SND_ASYNC);
}


//START OF THE PROGRAM
int main()//int argc, char** argv)
{
	//BGM AND TEXT COLOR
	play_music();
	HANDLE h = 	GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,FOREGROUND_RED| FOREGROUND_INTENSITY);
	
	//DECLARING VARIABLES AND ARRAY
	string charName, charPronoun;
	char weapon, charGender, ans, numAns, numWeapon;
	int hit, dupHit;
	//ARRAY FOR WEAPONS
	string weapons[5]= {"Baseball bat", "Revolver", "Sword", "Katana", "Cross bow"};
	
	//TITLE
	cout << "\n\t\t\t\t\t";
	cout << "\n\n\t\t\t\t" << "========  ==    ==   =======   ==     ==   ====   ==     ==   ========   ====";
	cout << "\n\t\t\t\t" << "      ==  ||    ||   ||    ||  ||     ||    ||    ||     ||   ||    ||    ||";
	cout << "\n\t\t\t\t" << "     ==   ||    ||   ||=====   ||     ||    ||    ||     ||   ||====||    ||";	
	cout << "\n\t\t\t\t" << "   ==     \\\\    //   ||    ||   \\\\   //     ||     \\\\   //    ||    ||    ||";
	cout << "\n\t\t\t\t" << "========   ======    ==    ==    \\\\ //     ====     \\\\ //     ==    ==   =========";	
	cout << "\n\t\t\t\t\t\t\t";
	cout << "Press enter to start. ";
		cin.get();
		
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	int i = 0;
	cout << "\n\t\t\t\t\t";

	TypeStyle("What is your name?", 0);
	cout << "\n\t\t\t\t\t";
	cin >> charName;
	
	cout << "\n\t\t\t\t\t";
	
	TypeStyle("What is your gender? (f/m)", 0);
	cout << "\n\t\t\t\t\t";
	cin >> charGender;
	
	if (charGender == 'f' or charGender == 'F')
	{
		charPronoun = "she";
	}
	else if (charGender == 'm' or charGender == 'M')
	{
		charPronoun = "he";
	}
	
	system("cls");
	SetConsoleTextAttribute(h,FOREGROUND_BLUE| FOREGROUND_INTENSITY);
	
cout << "\n\n\n\n\t\t\t\t\t";

TypeStyle("Hello, ", 0);
cout<< charName;

TypeStyle(". Before you start, choose your weapon:\n", 0);
cout << "\n\t\t\t\t\t";
cout << "1 - Baseball bat" << "\n\t\t\t\t\t" << "2 - Revolver" << "\n\t\t\t\t\t" << "3 - Sword" << "\n\t\t\t\t\t" << "4 - Katana"  << "\n\t\t\t\t\t" << "5 - Cross bow";
cout << "\n\t\t\t\t\t";
cin >> weapon;

system("cls");
	SetConsoleTextAttribute(h,FOREGROUND_RED| FOREGROUND_INTENSITY);
	cout << "\n\n\n\t\t\t\t\t";
   if (weapon == '1')
 { 
 	numWeapon = 0;
	TypeFast("You've successfully equipped yourself with a ", 0);
	cout << weapons[0] << "!";
	cout << "\n\t\t\t\t\t";
		
 }
   else if (weapon == '2')
 {
 	numWeapon = 1;
	TypeFast("You've successfully equipped yourself with a ",0);
	cout << weapons[1] << "!";
	cout << "\n\t\t\t\t\t";
 }
   else if (weapon == '3')
 {
 	numWeapon = 2;
	TypeFast("You've successfully equipped yourself with a ", 0);
	cout << weapons[2] << "!";
	cout << "\n\t\t\t\t\t";
 }
  else if (weapon == '4')
 {
 	numWeapon = 3;
	TypeFast("You've successfully equipped yourself with a ", 0);
	cout << weapons[3] << "!";
	cout << "\n\t\t\t\t\t";
 }
 else if (weapon == '5')
 {
 	numWeapon = 4;
	TypeFast("You've successfully equipped yourself with a ", 0);
	cout << weapons[4] << "!";
	cout << "\n\t\t\t\t\t";
 }

cin.get();
	cout << "\n\n\n\t\t\t\t\t";
cout << "Attention: Zurvival is best played with headphones on.";
	cout << "\n\n\t\t\t\t\t";
	TypeSlow("Loading...", 0);
	
	

system("cls");  

// STORY INTRODUCTION //
cout << "\n\n\n\t\t\t\t\t\t\t\t";
cout << "INTRODUCTION";
cout << "\n\n\t\t\t\t\t ";
TypeFast ("A remote place called Hawkins was enclosed in the middle of tall Birch trees in La Rinconada, Peru.", 0);
cout << "\n\t\t\t\t\t ";
TypeFast ("The SREL (Science Research Experiment Laboratory) is a secret facility headed by Dr. Williams, a graduate",0);
cout << "\n\t\t\t\t\t ";
TypeFast("of multiple phds from Harvard. The laboratory was tasked to research on the cure for cancer, lupus,", 0);
cout << "\n\t\t\t\t\t";
TypeFast("and other incurable diseases during the recent times. The silent forest near the facility echoed the", 0);
cout << "\n\t\t\t\t\t";
TypeFast ("sound of alarms. In the facility, the sound caused an outrage to the researchers", 0);
cout << "\n\t\t\t\t\t";
TypeFast ("as they were horified by its meaning.", 0);

cout << "\n\n\t\t\t\t\t ";
TypeFast("The toxic chemicals from the medical experiments had a leak on the nearest river, contaminating the waters.", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Skip intro? y/n", 0);
cout << "\n\t\t\t\t\t";
cin >> ans;

if (ans == 'n')
{
	
	system("cls");
	cout << "\n\n\n\t\t\t\t\t\t\t\t";
cout << "INTRODUCTION";

	cout << "\n\n\t\t\t\t\t\t";
	TypeFast("Knowing that the forest contained lives, some animals consumed the chemicals and got ", 0);
	cout << "\n\t\t\t\t\t";
	TypeFast("affected by it. Few meters away from the river, a hunter, oblivious of the toxic material, shot a ", 0);
	cout << "\n\t\t\t\t\t";
	TypeFast("deer. When he assumed that it was dead, he walked towards it to carry it but it suddenly attacked ", 0);
	cout << "\n\t\t\t\t\t";
	TypeFast("him. The hunter, turned from calm turned to savage and got infected by the virus.", 0);
	cout << "\n\t\t\t\t\t";
	cin.get();
	cout << "\n\t\t\t\t\tProceed to chapter one...";
	cin.get();
}
else
{
	cin.get();
}

system("cls");

stop_music();

// START OF EPISODE ONE //
cout << "\n\n\n\t\t\t\t\t\t\t\t";
chapter_music();
cout << "EPISODE 1: THE GASOLINE STATION";
cin.get();

distantz_music();
system("cls");
cout << "\n\n\n\t\t\t\t\t" << charName;
TypeStyle(" came from a distant mountain to travel because of her occupation as a photographer.", 0);
cout << "\n\t\t\t\t\t";
TypeStyle("It was a long trip and ", 0);
cout << charName;
TypeStyle(" wanted to go back to the city when ", 0);
cout << charName;
TypeStyle(" ran out of fuel. ", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);

system("cls");
distantz_music();
cout << "\n\n\n\t\t\t\t\t" << charName;
TypeFast(" was on the way to the nearest city when ", 0);
cout << charPronoun;
TypeFast(" stopped by Hawkins to reload the gasoline tank.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();

system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeFast("No person was found in the gasoline station so while ", 0);
cout << charName;
TypeFast(" was refilling the car, so ", 0);
cout << charPronoun << " ";
TypeFast("went to the comfort room", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Silence.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cout << "\n\t\t\t\t\t";
system("cls");

cout << "\n\n\n\t\t\t\t\t";
PlaySound(TEXT("DOOR.wav"), NULL, SND_ASYNC);
TypeStyle("You turned the door knob and the door slowly creeked open.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
stop_music();

system("cls");
PlaySound(TEXT("WATER.wav"), NULL, SND_ASYNC);
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("You heard droplets of water from the sink and it echoed within the place.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);

system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("The leak has reached the tip of your shoe as you enter. ", 0);
cout << "\n\t\t\t\t\t";
TypeStyle("Bathroom lights were blinking and unfixed.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();

system("cls");

PlaySound(TEXT("ZOMBIE.wav"), NULL, SND_ASYNC);
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("There was a crunching sound and a person was crouched facing on the wall.",0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("What will you say?",0);
cout << "\n\t\t\t\t\t";
cout << "1 - 'Hello?'";
cout << "\n\t\t\t\t\t";
cout << "2 - 'Are you okay?'";
cout << "\n\t\t\t\t\t";
cout << "3 - Say nothing and just stare at him.";
cout << "\n\t\t\t\t\t";
cin >> numAns;

system("cls");

if (numAns == '1')
	{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName;
	TypeStyle (": Hello?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...", 0);
	cin.get();
	system("cls");
	}
else if (numAns == '2')
	{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName;
	TypeStyle (": Are you okay?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...", 0);
	cin.get();
	system("cls");
	}
else 
	{
	system("cls");
	
	}
	
cout << "\n\n\n\t\t\t\t";
TypeFast("The person stopped. You were suddenly feeling uneasy as the person slowly met your gaze",0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
stop_music();
TypeSlow("...", 0);
cin.get();
system("cls");
	
if (charGender == 'f' or charGender == 'F')
{
	PlaySound(TEXT("WOMAN.wav"), NULL, SND_ASYNC);
}
else
{
	PlaySound(TEXT("MAN.wav"), NULL, SND_ASYNC);
}

cout << "\n\n\n\t\t\t\t\t";
TypeFast("As you stared, you noticed the blood from a collapsed body on the floor!", 0);
cout << "\n\t\t\t\t\t";


TypeFast("The person was eating a dead old man!!!",0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");	

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("When you screamed, the person turned and saw you!!", 0);
TypeSlow("...", 0);
system("cls");	
		
runsuspense_music();
cout << "\n\n\n\t\t\t\t\t";
TypeFast("YOU STARTED TO RUN.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("You ran fast to your car when the person was running towards you.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("While you were trying to open the car door, you were shaking too much that you failed to", 0);
cout << "\n\t\t\t\t\t";
TypeFast("insert the car key!", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("The key fell on the ground and you saw the person running too near towards you!!", 0);
cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("You saw a pile of wood near you.",0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cout << "\n\t\t\t\t\t";
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("WHAT WILL YOU DO?", 0);
cout << "\n\t\t\t\t\t";
cout << "1 - Get the key.";
cout << "\n\t\t\t\t\t";
cout << "2 - Get the wood.";
cout << "\n\t\t\t\t\t";
cout << "3 - Do nothing.";
cout << "\n\t\t\t\t\t";
cin >> numAns;
system("cls");

if (numAns == '1')
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You got the key but you did not have enough time to enter the car!!", 0);
	cin.get();
	system("cls");
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("THE ZOMBIE ATTACKED AND ATE YOUR  BRAINS!!", 0);
		//DEATH
	system("cls");
	stop_music();
	PlaySound(TEXT("END.wav"), NULL, SND_ASYNC);
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("YOU DIED.", 0);
	play_music();
	cin.get();
	return 0;
		//END

}
else if (numAns == '2')
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You reached for a block of wood and you aimed for the zombie!!", 0);
	cin.get();
	
	system("cls");
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("How many times will you hit the zombie?", 0);
	cin >> hit;
	dupHit = hit;
	
	// WHILE LOOP FOR ZOMBIE HIT
	while (hit > 0)
	{
		PlaySound(TEXT("SMASH.wav"), NULL, SND_ASYNC);
		cout << "\n\n\n\t\t\t\t\t";
		TypeFast("BOOOOOOOOGSHHH!!!",0);
		cout << "\n\n\t\t\t\t\t";
		hit = hit - 1;
		
	}
	system("cls");
		
	if (dupHit < 3 )
	{
	cout << "\n\n\n\t\t\t\t\t";	TypeFast("YOUR HIT WAS NOT ENOUGH!!!",0);
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("YOU DID NOT KILL THE ZOMBIE!",0);
	cin.get();
	
		//DEATH
	system("cls");
	PlaySound(TEXT("END.wav"), NULL, SND_ASYNC);
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("YOU DIED.", 0);
	play_music();
	cin.get();
	return 0;
		//END
	}
	else
	{
		cout << "\n\n\n\t\t\t\t\t";
		TypeFast("SUCCESS!!!",0);
		cout << "\n\n\n\t\t\t\t\t";
		TypeFast("YOU KILLED THE ZOMBIE!",0);
		cin.get();
	
	}

}
else
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("THE ZOMBIE ATTACKED AND ATE YOUR  BRAINS!!", 0);
	cin.get();
	
		//DEATH
	system("cls");
	PlaySound(TEXT("END.wav"), NULL, SND_ASYNC);
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("YOU DIED.", 0);
	play_music();
	cin.get();
	return 0;
		//END
}

	
	//END OF EPISODE ONE //
	
	
	// START OF EPISODE TWO //
	
	system("cls");
	cout << "\n\n\n\t\t\t\t\t";
	
	PlaySound(TEXT("STARTCAR.wav"), NULL, SND_ASYNC);
	TypeStyle("You rode the car to drive away from the neighborhood.",0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...", 0);
	cin.get();
	
system("cls");

chapter_music();
cout << "\n\n\n\t\t\t\t\t\t\t\t";
cout << "EPISODE 2: ROAD TO THE SCHOOL";
cin.get();	


distantz_music();
cout << "\n\n\n\t\t\t\t\t";
cout << charName << " ";

TypeFast("sighed in relief as ", 0);
cout << charPronoun;
TypeFast(" still worries about the whole situation back in the bathroom.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");
	
PlaySound(TEXT("RING.wav"), NULL, SND_ASYNC);
cout << "\n\n\n\t\t\t\t\t";
cout << charName << ": ";
TypeStyle("What was that?",0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("You checked your phone and noticed that there were missed calls and a voice mail on your notifications.", 0);
cout << "\n\t\t\t\t\t";
TypeStyle("You clicked it. ", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();

stop_music();
	PlaySound(TEXT("RADIOLIKE.wav"), NULL, SND_ASYNC);
system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeFast("Mom: I was calling you since earlier because I want to know how you are doing." , 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();

system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeFast("Mom: There are news on the city -- terrible news. I don't think it's a good idea for you to go back here, ", 0);
cout << charName;
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("Mom: It's all getting out of hand!", 0);
cout << "\n\t\t\t\t\t";
cin.get();

system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("What will you say?",0);
cout << "\n\t\t\t\t\t";
cout << "1 - 'What do you mean?'";
cout << "\n\t\t\t\t\t";
cout << "2 - 'Are you all there?'";
cout << "\n\t\t\t\t\t";
cout << "3 - Say nothing.";
cout << "\n\t\t\t\t\t";
cin >> numAns;

system("cls");


if (numAns == '1')
	{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName;
	TypeStyle (": What do you mean?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...", 0);
	cin.get();
	system("cls");
	}
else if (numAns == '2')
	{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName;
	TypeStyle (": Are you all there?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...", 0);
	cin.get();
	
	system("cls");
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle ("Mom: No. your sister is not home!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	cin.get();
	}
else 
	{
	system("cls");
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("...", 0);
	cin.get();
	
	}
	
system("cls");

stop_music();

//RUN SFX
run_music();
cout << "\n\n\n\t\t\t\t\t";
TypeFast("Mom: Wherever you are, don't come back here. Your sister, Yvonne, is still at school.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("Mom: I can't go to her now.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Mom: Wait...", 0);

system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Mom: Someone's coming. Be safe, okay?", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("There was a loud noise on the other line...", 0);

system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Mom: Hold the door! Don't let them come in! No!!", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();

system("cls");

stop_music();
distantz_music();
cout << "\n\n\n\t\t\t\t\t";
cout << charName << ": ";
TypeStyle("Mom?", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("The phone call already ended.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

stop_music();
PlaySound(TEXT("TRYCALL.wav"), NULL, SND_ASYNC);
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("You tried to dial the number again.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("There was no answer.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

stop_music();
distantz_music();
cout << "\n\n\n\t\t\t\t\t";
TypeFast("You worried for your family and most especially, your sister. You did not know about the reason", 0);
cout << "\n\t\t\t\t\t";
TypeFast("why the person earlier went savage but you realized Yvonne might be in trouble.", 0);
cout << "\n\t\t\t\t\t";
TypeFast("You decided to go to her school in the city because she will be safer with you.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...", 0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
stop_music();
PlaySound(TEXT("STARTCAR.wav"), NULL, SND_ASYNC);
TypeStyle("You accelerated the car...", 0);
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeFast("Along the way, you saw more people getting going crazy and people running away from them.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();
system("cls");

run_music();
	
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("A person suddenly blocked the way, extending his hands on both sides to stop you.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Person: Help me!", 0);
cout << "\n\t\t\t\t\t";
cin.get();

system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("What will you do?",0);
cout << "\n\t\t\t\t\t";
cout << "1 - Stop the car and open the door.";
cout << "\n\t\t\t\t\t";
cout << "2 - Ask him if he's infected.";
cout << "\n\t\t\t\t\t";
cout << "3 - Do nothing.";
cout << "\n\t\t\t\t\t";
cin >> numAns;
system("cls");

if (numAns == '1')
{
	
}
else if (numAns == '2')
{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("How would I know that you're not like them?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Person: I did not get bitten by those people! Don't you get it? And by the way, I'm a doctor!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Person: I can even be useful in your journey! I'm not one of them!", 0);
	TypeSlow("...",0);
	cin.get();
	system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You thought for it for a short while and realised he might not be infected.", 0);
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You decided to help the stranger, hoping he could know the answers to everything.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	
}
else
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Person: Come on, Please help me!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Person: I did not get bitten by those people! Don't you get it? And by the way, I'm a doctor!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Person: I can even be useful in your journey! I'm not one of them!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You thought for it for a short while and realised he might not be infected.", 0);
	cout << "\n\t\t\t\t\t";
	TypeStyle("You decided to help the stranger, hoping he could know the answers to everything.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
}

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You opened the door and helped him to get inside the car just before a zombie grabbed him.", 0);
	cout << "\n\t\t\t\t\t";
	PlaySound(TEXT("STARTCAR.wav"), NULL, SND_ASYNC);
	TypeStyle("You started the engine and drove away.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	stop_music();
	PlaySound(TEXT("DRIVE.wav"), NULL, SND_ASYNC);
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Both of you sighed in relief.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Person: Thanks, that was close.", 0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeSlow("...", 0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Person: I'm Dr. Caesar, by the way.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("I'm ", 0);
	cout << charName;
	TypeStyle(". What are those things? ", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	stop_music();
	distantz_music();
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Dr. Caesar: They are biological failures. They are the birth of life and death itself.", 0);
	cout << "\n\t\t\t\t\t";
	TypeStyle("The research facility caught into fire and leaked their experimental system into the nearest river", 0);
	cout << "\n\t\t\t\t\t";
	TypeStyle("from the facility.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("I don't think any of that answers my question, Dr. Can't you explain it in simple words?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Dr. Caesar: Oh, right. So, you know, the thing in the movies?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("What will you say?", 0);
	cout << "\n\t\t\t\t\t";
	cout << "1 - 'What do you mean?'";
	cout << "\n\t\t\t\t\t";
	cout << "2 - 'No.'";
	cout << "\n\t\t\t\t\t";
	cout << "3 - Say nothing.";
	cout << "\n\t\t\t\t\t";
	cin >> numAns;
	system("cls");
	stop_music();
	distantz_music();
	
	if (numAns == '1')
	{
		cout << "\n\n\n\t\t\t\t\t";
		cout << charName << ": ";
		TypeStyle("What do you mean? ", 0);
			
	}
	else if (numAns == '2')
	{
		cout << "\n\n\n\t\t\t\t\t";
		cout << charName << ": ";
		TypeStyle("No. ", 0);
	}
	else
	{
		cout << "\n\n\n\t\t\t\t\t";
		cout << charName << ": ";
		TypeStyle("...", 0);
	}
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";	
TypeSlow("...",0);
cin.get();
system("cls");

distantz_music();
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: Zombies.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
cout << charName << ": ";
TypeStyle("How would you know about that?", 0);
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: It just simply explains everything. Those people get bitten and they", 0);
cout << "\n\t\t\t\t\t";
TypeStyle("become infected and hungry for other people's flesh. Simply put, there's a virus.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

	PlaySound(TEXT("TUNNEL.wav"), NULL, SND_ASYNC);
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: Where are you going, anyway?", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
cout << charName << ": ";
TypeStyle("I'm going to my sister's school. I have to save her.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: Are you crazy?", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
system("cls");

distantz_music();
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: Did you not see those things? They are ruthless! There's no way she's still safe.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
cout << charName << ": ";
TypeStyle("That's for me to find out. If you don't want to come, I can leave you here on the road.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: Fine. I have to find help from the government anyway. So the city might be the answer.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

stop_music();
PlaySound(TEXT("DEADCAR.wav"), NULL, SND_ASYNC);

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("The car suddenly stopped as you enter a tunnel. You tried to start it again.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("You tried to restart the engine but it still didn't work. You noticed that there was no fuel left.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

stop_music();
	PlaySound(TEXT("TUNNEL.wav"), NULL, SND_ASYNC);
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Because of the bathroom-zombie encounter earlier, you realised you could not fill enough fuel.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: Why are we stopping?", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

stop_music();
distantz_music();
cout << "\n\n\n\t\t\t\t\t";
cout << charName << ": ";
TypeStyle("The fuel's empty.", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: What?!", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
system("cls");

cout << "\n\n\n\t\t\t\t\t";
TypeStyle("Dr. Caesar: How could you not refill it when you know your life depends on this car!", 0);
cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
TypeSlow("...",0);	
cin.get();
system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("What will you say?", 0);
	cout << "\n\t\t\t\t\t";
	cout << "1 - 'Calm down. We'll figure this out.'";
	cout << "\n\t\t\t\t\t";
	cout << "2 - 'Why are you blaming me when you only wanted to tag along here?'";
	cout << "\n\t\t\t\t\t";
	cout << "3 - 'Let's just think about how we will resolve this.'";
	cout << "\n\t\t\t\t\t";
	cin >> numAns;
	system("cls");

	PlaySound(TEXT("TUNNEL.wav"), NULL, SND_ASYNC);
if (numAns == '1')
{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("Calm down. We'll figure this out.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Dr. Caesar sighed.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
}
else if (numAns == '2')
{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("Why are you blaming me when you only wanted to tag along here?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Dr. Caesar: Okay, sorry. It's just that we're in the middle of catastrophe.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("There's got to be a way.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	system("cls");
}
else
{
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("Let's just think about how we will resolve this.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	system("cls");	
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Dr. Caesar sighed.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
}

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Dr. Caesar: So what's the plan?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You stopped for a moment to think.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");

//TUNNEL SOUND EFFECT HERE
PlaySound(TEXT("TUNNEL.wav"), NULL, SND_ASYNC);

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You saw that there were few cars stopped inside the tunnel.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("Here's my idea.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("You see those cars there?", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Dr. Ceasar nodded.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	cout << charName << ": ";
	TypeStyle("One of those will be our ticket out of here. We will just have to switch cars and be as quiet as possible.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("Both of you went out of the car.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	system("cls");

	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You gestured to the black car just right infront and Dr. Caesar nodded.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("The zombies were still not aware that you're on the move.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);
	cin.get();
	system("cls");
	
	//ALARM SOUND EFFECT HERE
	PlaySound(TEXT("CARALARM.wav"), NULL, SND_ASYNC);
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("Both of you walked slowly and finally reached the car. When you opened it, the alarm went wild!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	system("cls");
	
	//RUN INTENSE SOUND EFFECT HERE
	runsuspense_music();
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You entered the car with Dr. Caesar and zombies start to run towards the car!!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("When you looked at the back seat of the car, you found a ", 0);
	cout << weapons[numWeapon];
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
if (numWeapon == 0)
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("The baseball bat is not useful to kill the zombies unless up close!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	//DEATH HERE
	
			//DEATH
	system("cls");
	PlaySound(TEXT("END.wav"), NULL, SND_ASYNC);
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("YOU DIED.", 0);
	cin.get();
	play_music();
	cin.get();
	return 0;
		//END
}
else if (numWeapon == 1)
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You started killing zombies with the revolver and you successfully killed them!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	//ALIVE
}
else if (numWeapon == 2)
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("The Sword is not useful to kill the zombies unless up close!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	//DEATH HERE
	
			//DEATH
	system("cls");
	PlaySound(TEXT("END.wav"), NULL, SND_ASYNC);
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("YOU DIED.", 0);
		cin.get();
	play_music();
	cin.get();
	return 0;
		//END
		
}
else if (numWeapon == 3)
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("The Katana is not useful to kill the zombies unless up close!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	//DEATH HERE
	
			//DEATH
	system("cls");
	PlaySound(TEXT("END.wav"), NULL, SND_ASYNC);
	cout << "\n\n\n\t\t\t\t\t";
	TypeFast("YOU DIED.", 0);
		cin.get();
	play_music();
	cin.get();
	return 0;
		//END
}
else
{
	cout << "\n\n\n\t\t\t\t\t";
	TypeStyle("You started killing zombies with the Cross bow and you successfully killed them!", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	system("cls");
	
	//ALIVE
}

	cout << "\n\n\n\t\t\t\t\t";
	PlaySound(TEXT("STARTCAR.wav"), NULL, SND_ASYNC);
	//ENGINE START SOUND
	
	TypeStyle("You started the engine and drove out of the tunnel with hope and anticipation to meet your sister.", 0);
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	TypeSlow("...",0);	
	cin.get();
	

//to be continued part....//
cout << "\n\n\n\t\t\t\t\t";
chapter_music();
play_music();
TypeSlow("To be continued...", 0);
cin.get();

system("cls");
cout << "\n\n\n\t\t\t\t\t";
TypeStyle("You have reached the end of the free trial version of ZURVIVAL!!!", 0);
cout << "\n\t\t\t\t\t";
TypeStyle("Get the full premium for an affordable price at www.cxzncb.bit/zurvival\n\t\t\t\t\t", 0);
TypeFast("OFFERS: EPISODE 3: University of Dead People, EPISODE 4: The storage room, EPISODE 5: The way to Safety, EPISODE 6: The Death Cure.", 0);
cin.get();
system("cls");

// CREATORS //
cout << "\n\n\n\t\t\t\t\t";
TypeFast("Programmer: Nicah S. Cepe", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Debugger: Rochel B. Furton", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Based on the story line by Yvonne B. Santiago", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Justine Hilario", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Caesar Chiapoco", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Rochel B. Furton", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Nicah S. Cepe", 0);
cout << "\n\t\t\t\t\t";
TypeFast("Flowchart designer: Yvonne B. Santiago", 0);
cout << "\n\t\t\t\t\t";
TypeFast("BGM directors: Nicah S. Cepe & Caesar Chiapoco.", 0);
cout << "\n\n\n\t\t\t\t\t";
TypeFast("As a final project requirement for Professor Frank Anthony Chin.", 0);
cin.get();

return 0;
}

