//Contributors
//Garrett Poppe 3/19/18
//
//

#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);
	
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{
					puts("you open the door and find ........");
					scanf("%d",&choice);
				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3: // ELTHON CISNEROS'S ROOM 
			{
					while(choice != 99)
					{
							//int input;
							printf ("\n");
							printf("***This is Room 3.***\n ");
							printf ("You walk into a strangely bright and colorful room. However, you see 4 untitled buttons on a table...\n");
							printf ("Keep in mind: There are hidden doors within this bright and colorful room. The only thing keeping these doors open is the power. Would be a mighty shame (for you) if there was a power outage!\n");
							printf ("Above the buttons a sign reads: You may choose press one button to determine your fate. To not keep you in total suspense, an LCD display on the wall will vaguely let you know what just happened after you pressed this button:\n");
							scanf ("%d", &choice);

							switch (choice)
							{
								case 1:
									printf ("\n");
									printf("***Ya done messed up! Looks like this wasn't the number one choice you thought it was... This room will start filling with water now... Hope you know how to swim!!! :D *** \n");
									puts ("Well, this room may be filling up with water, but I can give you a fighting chance by giving you ONE tool of your choice that may help you escape OR KILL YOU... Type in your choice wisely (1-4)...");
									scanf ("%d", &choice);

									while (choice != 99)
									{
										switch (choice)
										{
											case 1:
												puts ("I have granted you a spear... Maybe you can make a hole in the door?");
												break;
											case 2:
												puts ("I have granted you an oxygen tank and scuba suit...");
												break;
											case 3:
												puts ("HAHAHAH!!! You pressed the wrong button! Now the room will fill up with water even quicker...");
												break;
											default:
												puts ("For once, being incorrect has saved you... The room has stopped filling with water.");
												break;
										}
										break;
									}
									break; //end switch
								case 2:
									printf ("\n");
									printf ("***You survive. Now, get out of my room!***\n");
									break;
									// you may choose another card
								case 3:
									printf ("\n");
									printf ("***You got lucky. You have been granted permission to press more buttons! Sounds like fun...***");
									scanf ("%d", &choice);
									break;
								case 4:
									printf ("\n");
									printf ("***This button just cut power to lights in the room (as well as those hidden doors I mentioned before). Hope you like the dark and tigers...***\n");
									while (choice != 99)
									{
										puts ("Display reads: Power has been cut to this room. You will be given one chance to either escape from this room alive or not. Let's play some trivia. Being one myself, I like computers, so I would like you to guess what year Gottfried Leibniz invented binary");
										scanf ("%d", &choice);
										while (choice != 1679)
										{
											puts ("Oops! WRONG!!!!! Guess again!");
											scanf ("%d", &choice);
											puts ("Until you correctly guess Leibniz invented binary, you will be trapped in this room in particular!!! Well, that may be a bit harsh. I will give you one clue: 'late 1600's'");
										
										}
										puts ("~~~YOU GUESSED CORRECTLY!~~~ You are one smart cookie! You get to escape...");
										break;	
									
									}
									break;
								default:
									while (choice != 99)
									{
										puts ("Choose a new door to explore....");
										scanf ("%d", &choice);
									
									}
									break;
	
							}
							break; // added
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
									printf ("You got lucky. You may press more buttons! Sounds like fun...");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;
			}
			default:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
		}
		puts("Magically you are transported through space and time. You are back at the beginning.....");
	}
}

