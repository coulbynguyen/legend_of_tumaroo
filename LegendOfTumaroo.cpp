/****************************************************************************************************************************************
 *Program: LegendOfTumaroo.cpp
 *Author: Coulby Nguyen
 *Date: 1/21/2017
 *Description: This is a 5 decision game where the user picks the adventure and has some parts that are left to chance.
 *Input: The inputs should be integers that correspond to the prompted options
 *Output: The outputs should be texts of outcomes that determine the characters position in the game, and the condition the character is in. The outcomes could also be results if they have completed the game successfully or have died along the way.
 *
 * *************************************************************************************************************************************/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	srand(time(NULL));
	int sdirection;
	int fightop1;
	int runawayop1;
	int battlestrat1;
	int battlestrat2;
	int fiftyfifty;
	int sword;
	int beachop1;
	int game;
	int atlantisop;
	int travelop1;
	int treasureop1;
	int goodikkinbuff;
	int minechoice1;
	int mineshaftc;
	int mermaidop;
	int pin1;
	int pin2;
	int pin3;
	int pin4;
	int w;
	int x;
	int y;
	int z;
	int sellc;
	int counter;
	char fillspace;

	game=1;
	while(game != 0){
		sword = 0;
		cout << "You wake up in the middle of an open field..." << endl;
		cout << "You look around and realize you can only go North(1), East(2), South(3), and West (4)" << endl;
		cout << "Choose a direction to travel" << endl;
		cin >> sdirection;
		cout << endl;
		if (sdirection == 1){
			cout << "You have chosen North!" << endl;
			cout << "Looking at your surroundings you have realized you are in a cliff biome." << endl;
			cout << "After some adventure you mistep and fall to your death. YOU HAVE DIED." << endl;
			cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
			cin >> game;
			cout << endl;
		}
		else if(sdirection == 2){
			cout << "You have chosen East!" << endl;
			cout << "Looking at your surrounding you have realized that you are still in the open field." << endl;
			cout << "However now there appears to be a monster in the distance." << endl;
			cout << "You have the option to either Run(1), or Fight(2)!" << endl;
			cin >> fightop1;
			cout << endl;
			if (fightop1 == 1){
				cout << "You have chosen to run!" << endl;
				cout << "Which way do you want to run? North(1), East(2), or South(3)" << endl;
				cin >> runawayop1;
				cout << endl;
				if (runawayop1 == 1){
					cout << "You have chosen to go north!" << endl;
					cout << "Looking around you notice that you are in a cliff biome." << endl;
					cout << "You adventure around a little but mistep and fall to your death." << endl;
					cout << "YOU HAVE DIED." << endl;
					cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
					cin >> game;
					cout << endl;

				}

				else if(runawayop1 == 2){
					cout << "You have chosen to go east!" << endl;
					cout << "Looking around you notice that you are in a cliff biome." << endl;
					cout << "You adventure around a little but mistep and fall to your death." << endl;
					cout << "YOU HAVE DIED." << endl;
					cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
					cin >> game;
					cout << endl;
				}
				else if(runawayop1 == 3){
					cout << "You have chosen to go south!" << endl;
					cout << "Looking around you notice that you are halfway to the mountain tops!" << endl;
					cout << "You also notice a mine shaft opening!" << endl;
					cout << "You have the option to enter! Yes(1) or No(2)" << endl;
					cin >> minechoice1;
					cout << endl;
					if(minechoice1 == 1){
						cout << "You have chosen to enter the mine shaft!" << endl;
						fiftyfifty = rand()%2;
						if(fiftyfifty == 0){
							cout << "A monster has appeared and you can not escape!" << endl;
							cout << "You have to fight!" << endl;
							cout << "You have the option to fight the monster head on like a man(1)" << endl;
							cout << "You have the option to go for his legs(2)" << endl;
							cout << "You have the option to sneak around and launch a sneak attack(3)" << endl;
							cin >> battlestrat2;
							cout << endl;
							if(battlestrat2 == 1){
								if(sword == 1){
									cout << "You have chosen to fight the monster head on!" << endl;
									cout << "With your sword of Goodikkin, you have a 75 percent success rate!" << endl;
									goodikkinbuff = rand()%4;
									if ((goodikkinbuff == 1)||(goodikkinbuff == 2)||(goodikkinbuff == 3)){
										cout << "You have slain the monster!" << endl;
										cout << "There is no weapon drop for killing this monster!" << endl;
										mineshaftc = rand()%4;
										if(mineshaftc == 1){
											cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
											cout << "YOU HAVE DIED." << endl;

											cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
											cin >> game;
											cout << endl;
										}
										else{
											cout << "You successfully make it out of the mineshaft!" << endl;
											cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
											cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
											cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
											cin >> game;
											cout << endl;
										}
									}
									else if(goodikkinbuff == 4){
										cout << "The monster bested you due to you losing grip of the sword of Goodikkin." << endl;
										cout << "YOU HAVE DIED." << endl;
										cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
										cin >> game;
										cout << endl;
									}
								}
								else if(sword == 0){
									cout << "You have chosen to fight monster head on!" << endl;
									cout << "Without any buffs, you have a 50 percent success rate!" << endl;
									fiftyfifty = rand()%2;
									if(fiftyfifty == 0){
										cout << "You have slain the monster!" << endl;
										cout << "There is no weapon drop for killing this monster!" << endl;
										mineshaftc = rand()%4;
										if(mineshaftc == 1){
											cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
											cout << "YOU HAVE DIED." << endl;
											cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
											cin >> game;
											cout << endl;
										}
										else{
											cout << "You successfully make it out of the mineshaft!" << endl;
											cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
											cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
											cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
											cin >> game;
										}
									}
									else if(fiftyfifty == 1){
										cout << "The monster had overwhelming strength and beat you senslessly to death." << endl;
										cout << "YOU HAVE DIED." << endl;
										cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
										cin >> game;
										cout << endl;
									}
								}
							}
							else if(battlestrat2 == 2){
								cout << "You have chosen to go for his legs!" << endl;
								cout << "The monster sidesteps and lands a lethal blow to your head!" << endl;
								cout << "YOU HAVE DIED." << endl;
								cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
								cin >> game;
								cout << endl;
							}
							else if(battlestrat2 ==3){
								cout << "Your sneak around the monsters back side successfully" << endl;
								cout << "You snap it's neck from behind with ease." << endl;
								cout << "There is no weapon drop for killing this monster!" << endl;
								mineshaftc = rand()%4;
								if (mineshaftc == 1){
									cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
									cout << "YOU HAVE DIED." << endl;

									cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
									cin >> game;
									cout << endl;
								}
								else{
									cout << "You successfully make it out of the mineshaft!" << endl;
									cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
									cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
									cout << "Do wish to play again? Yes(1) or No(0)" << endl;
									cin >> game;
									cout << endl;
								}
							}
						}
						else if(fiftyfifty == 1){
							cout << "The mine shaft is filled with gold coins!!" << endl;
							cout << "You carry as much gold as possible and that you are able to still be mobile" << endl;
							mineshaftc = rand()%4;
							if (mineshaftc == 1){
								cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
								cout << "YOU HAVE DIED." << endl;
								cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
								cin >> game;
								cout << endl;
							}
							else{
								cout << "You make it out of the mine shaft!" << endl;
								cout << "You make your way to the nearest village to start your journey as a blossoming millionaire." << endl;
								cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
								cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
								cin >> game;
								cout << endl;
							}
						}
					}
					else if(minechoice1 == 2){
						cout << "You have chosen not to enter the mines!" << endl;
						cout << "You continue on your path but are ambushed by thieves!" << endl;
						if(sword == 1){
							cout << "They steal your Sword of Goodikkin and stab you with it" << endl;
							cout << "YOU HAVE DIED." << endl;
							cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
							cin >> game;
							cout << endl;
						}
						else if(sword == 0){
							cout << "They torture you for 8 hours straight and you die of blood loss" << endl;
							cout << "YOU HAVE DIED." << endl;
							cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
							cin >> game;
							cout << endl;
						}
					}
				}
			}

			else if (fightop1 == 2){
				cout << "You have chosen to fight!" << endl;
				cout << "You have the option to fight the monster head on like a man(1)" << endl;
				cout << "You have the option to go for his legs(2)" << endl;
				cout << "You have the option to sneak around and launch a sneak attack(3)" << endl;
				cin >> battlestrat1;
				cout << endl;
				/*************************************************************************************************************************************************/
				if(battlestrat1 == 1){
					cout << "You have chosen to fight the monster head on like a man!" <<endl;
					cout << "You have a 50/50 chance of succeeding!" << endl;
					cout << "Enter any char to find out your fate!!" << endl;
					cin >> fillspace;
					cout << endl;
					fiftyfifty = rand()%2;
					if (fiftyfifty == 0){
						cout << "Your bravado wasn't enough to beat the mighty monster!" << endl;
						cout << "He dealt a lethal blow to your head. YOU HAVE DIED." << endl;
						cout << "Do you wish to play again? Yes(1) or No(0)" << endl;
						cin >> game;
						cout << endl;
					}
					else if(fiftyfifty == 1){
						cout << "Your bravery and wit and stamina were more than plenty to defeat this monster!" <<endl;
						cout << "You have picked up the magical sword of Goodikkin which grants you +25 percent" <<endl;
						cout << "chance of beating another monster on your journey!" << endl;
						sword = 1;
						cout << "Which way do you travel now? North(1), East(2), or South(3)" <<endl;
						cin >> travelop1;
						cout << endl;
						if (travelop1 == 1){
							cout << "You have chosen to go north!" << endl;
							cout << "Looking around you notice that you are in a cliff biome." << endl;
							cout << "You adventure around a little but mistep and fall to your death." << endl;
							cout << "YOU HAVE DIED." << endl;
							cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
							cout << endl;
						}
						else if(travelop1 == 2){
							cout << "You have chosen to go east!" << endl;
							cout << "Looking around you notice that you are in a cliff biome." << endl;
							cout << "You adventure around a little but mistep and fall to your death." << endl;
							cout << "YOU HAVE DIED." << endl;
							cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
							cout << endl;
						}
						else if(travelop1 == 3){
							cout << "You have chosen to go south!" << endl;
							cout << "Looking around you notice that you are halfway to the mountain tops!" << endl;
							cout << "You also notice a mine shaft opening!" << endl;
							cout << "You have the option to enter! Yes(1) or No(2)" << endl;
							cin >> minechoice1;
							cout << endl;
							if(minechoice1 == 1){
								cout << "You have chosen to enter the mine shaft!" << endl;
								fiftyfifty = rand()%2;
								if(fiftyfifty == 0){
									cout << "A monster has appeared and you can not escape!" << endl;
									cout << "You have to fight!" << endl;
									cout << "You have the option to fight the monster head on like a man(1)" << endl;
									cout << "You have the option to go for his legs(2)" << endl;
									cout << "You have the option to sneak around and launch a sneak attack(3)" << endl;
									cin >> battlestrat2;
									cout << endl;
									if(battlestrat2 == 1){
										if(sword == 1){
											cout << "You have chosen to fight the monster head on!" << endl;
											cout << "With your sword of Goodikkin, you have a 75 percent success rate!" << endl;
											goodikkinbuff = rand()%4;
											if (goodikkinbuff!=1){
												cout << "You have slain the monster!" << endl;
												cout << "There is no weapon drop for killing this monster!" << endl;
												mineshaftc = rand()%4;
												if(mineshaftc == 1){
													cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
													cout << "YOU HAVE DIED." << endl;
													cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
													cout << endl;
												}
												else{
													cout << "You successfully make it out of the mineshaft!" << endl;
													cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
													cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
													cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
													cout << endl;
												}
											}
											else{
												cout << "The monster bested you due to you losing grip of the sword of Goodikkin." << endl;
												cout << "YOU HAVE DIED." << endl;
												cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
												cout << endl;
											}
										}
										else if(sword == 0){
											cout << "You have chosen to fight monster head on!" << endl;
											cout << "Without any buffs, you have a 50 percent success rate!" << endl;
											fiftyfifty = rand()%2;
											if(fiftyfifty == 0){
												cout << "You have slain the monster!" << endl;
												cout << "There is no weapon drop for killing this monster!" << endl;
												mineshaftc = rand()%4;
												if(mineshaftc == 1){
													cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
													cout << "YOU HAVE DIED." << endl;
													cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
													cout << endl;
												}
												else{
													cout << "You successfully make it out of the mineshaft!" << endl;
													cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
													cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
													cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
													cout << endl;
												}
											}
											else if(fiftyfifty == 1){
												cout << "The monster had overwhelming strength and beat you senslessly to death." << endl;
												cout << "YOU HAVE DIED." << endl;
												cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
												cout << endl;
											}
										}
									}
									else if(battlestrat2 == 2){
										cout << "You have chosen to go for his legs!" << endl;
										cout << "The monster sidesteps and lands a lethal blow to your head!" << endl;
										cout << "YOU HAVE DIED." << endl;
										cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
										cout << endl;
									}
									else if(battlestrat2 ==3){
										cout << "Your sneak around the monsters back side successfully" << endl;
										cout << "You snap it's neck from behind with ease." << endl;
										cout << "There is no weapon drop for killing this monster!" << endl;
										mineshaftc = rand()%4;
										if (mineshaftc == 1){
											cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
											cout << "YOU HAVE DIED." << endl;
											cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
											cout << endl;

										}
										else{
											cout << "You successfully make it out of the mineshaft!" << endl;
											cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
											cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
											cout << endl;
										}
									}

								}
								else if(fiftyfifty == 1){
									cout << "The mine shaft is filled with gold coins!!" << endl;
									cout << "You carry as much gold as possible and that you are able to still be mobile" << endl;
									mineshaftc = rand()%4;
									if (mineshaftc == 1){
										cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
										cout << "YOU HAVE DIED." << endl;
										cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
										cout << endl;

									}
									else{
										cout << "You make it out of the mine shaft!" << endl;
										cout << "You make your way to the nearest village to start your journey as a blossoming millionaire." << endl;
										cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
										cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
										cout << endl;
									}
								}
							}
							else if(minechoice1 == 2){
								cout << "You have chosen not to enter the mines!" << endl;
								cout << "You continue on your path but are ambushed by thieves!" << endl;
								if(sword == 1){
									cout << "They steal your Sword of Goodikkin and stab you with it" << endl;
									cout << "YOU HAVE DIED." << endl;
									cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
									cout << endl;
								}
								else if(sword == 0){
									cout << "They torture you for 8 hours straight and you die of blood loss" << endl;
									cout << "YOU HAVE DIED." << endl;
									cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
									cout << endl;
								}
							}
						}
					}
				}
				/*************************************************************************************************************************************************/
				else if(battlestrat1 == 2){
					cout << "You have chosen to go for his legs!" << endl;
					cout << "The monster sidesteps and lands a lethal blow to your head!" << endl;
					cout << "YOU HAVE DIED." << endl;
					cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
					cout << endl;
				}
				/*************************************************************************************************************************************************/
				else if(battlestrat1 == 3){
					cout << "You have chosen to perform a sneak attack on the monster!" <<endl;
					cout << "You successfully sneak behind the monster!" << endl;
					cout << "With ease you break the neck of the monster!!" << endl;
					cout << "You have picked up the magical sword of Goodikkin which grants you +25 percent" <<endl;
					cout << "chance of beating another monster on your journey!" << endl;
					sword = 1;
					cout << "Which way do you travel now? North(1), East(2), or South(3)" <<endl;
					cin >> travelop1;
					cout << endl;
					if (travelop1 == 1){
						cout << "You have chosen to go north!" << endl;
						cout << "Looking around you notice that you are in a cliff biome." << endl;
						cout << "You adventure around a little but mistep and fall to your death." << endl;
						cout << "YOU HAVE DIED." << endl;
						cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
						cout << endl;
					}
					else if(travelop1 == 2){
						cout << "You have chosen to go east!" << endl;
						cout << "Looking around you notice that you are in a cliff biome." << endl;
						cout << "You adventure around a little but mistep and fall to your death." << endl;
						cout << "YOU HAVE DIED." << endl;
						cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
						cout << endl;
					}
					else if(travelop1 == 3){
						cout << "You have chosen to go south!" << endl;
						cout << "Looking around you notice that you are halfway to the mountain tops!" << endl;
						cout << "You also notice a mine shaft opening!" << endl;
						cout << "You have the option to enter! Yes(1) or No(2)" << endl;
						cin >> minechoice1;
						cout << endl;
						if(minechoice1 == 1){
							cout << "You have chosen to enter the mine shaft!" << endl;
							fiftyfifty = rand()%2;
							if(fiftyfifty == 0){
								cout << "A monster has appeared and you can not escape!" << endl;
								cout << "You have to fight!" << endl;
								cout << "You have the option to fight the monster head on like a man(1)" << endl;
								cout << "You have the option to go for his legs(2)" << endl;
								cout << "You have the option to sneak around and launch a sneak attack(3)" << endl;
								cin >> battlestrat2;
								cout << endl;
								if(battlestrat2 == 1){
									if(sword == 1){
										cout << "You have chosen to fight the monster head on!" << endl;
										cout << "With your sword of Goodikkin, you have a 75 percent success rate!" << endl;
										goodikkinbuff = rand()%4;
										if (goodikkinbuff != 1){
											cout << "You have slain the monster!" << endl;
											cout << "There is no weapon drop for killing this monster!" << endl;
											mineshaftc = rand()%4;

											if(mineshaftc == 1){
												cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
												cout << "YOU HAVE DIED." << endl;
												cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
												cout << endl;
											}
											else{
												cout << "You successfully make it out of the mineshaft!" << endl;
												cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
												cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
												cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
												cout << endl;
											}
										}
										else{
											cout << "The monster bested you due to you losing grip of the sword of Goodikkin." << endl;
											cout << "YOU HAVE DIED." << endl;
											cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
											cout << endl;
										}
									}
									else if(sword == 0){
										cout << "You have chosen to fight monster head on!" << endl;
										cout << "Without any buffs, you have a 50 percent success rate!" << endl;
										fiftyfifty = rand()%2;
										if(fiftyfifty == 0){
											cout << "You have slain the monster!" << endl;
											cout << "There is no weapon drop for killing this monster!" << endl;
											mineshaftc = rand()%4;
											if(mineshaftc == 1){
												cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
												cout << "YOU HAVE DIED." << endl;
												cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
												cout << endl;
											}
											else{
												cout << "You successfully make it out of the mineshaft!" << endl;
												cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
												cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
												cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
												cout << endl;
											}
										}
										else if(fiftyfifty == 1){
											cout << "The monster had overwhelming strength and beat you senslessly to death." << endl;
											cout << "YOU HAVE DIED." << endl;
											cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
											cout << endl;
										}
									}
								}
								else if(battlestrat2 == 2){
									cout << "You have chosen to go for his legs!" << endl;
									cout << "The monster sidesteps and lands a lethal blow to your head!" << endl;
									cout << "YOU HAVE DIED." << endl;
									cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
									cout << endl;
								}
								else if(battlestrat2 ==3){
									cout << "You sneak around the monsters back side successfully" << endl;
									cout << "You snap it's neck from behind with ease." << endl;
									cout << "There is no weapon drop for killing this monster!" << endl;
									mineshaftc = rand()%4;
									if (mineshaftc == 1){
										cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
										cout << "YOU HAVE DIED." << endl;
										cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
										cout << endl;

									}
									else{
										cout << "You successfully make it out of the mineshaft!" << endl;
										cout << "You make your way to the mountain tops and start your journey as the monster slayer!" << endl;
										cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
										cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
										cout << endl;
									}
								}

							}
							else if(fiftyfifty == 1){
								cout << "The mine shaft is filled with gold coins!!" << endl;
								cout << "You carry as much gold as possible and that you are able to still be mobile" << endl;
								mineshaftc = rand()%4;
								if (mineshaftc == 1){
									cout << "While on your way out of the mine shaft, it collapses on itself, trapping and killing you." << endl;
									cout << "YOU HAVE DIED." << endl;
									cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
									cout << endl;

								}
								else{
									cout << "You make it out of the mine shaft!" << endl;
									cout << "You make your way to the nearest village to start your journey as a blossoming millionaire." << endl;
									cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!" << endl;
									cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
									cout << endl;
								}
							}
						}
						else if(minechoice1 == 2){
							cout << "You have chosen not to enter the mines!" << endl;
							cout << "You continue on your path but are ambushed by thieves!" << endl;
							if(sword == 1){
								cout << "They steal your Sword of Goodikkin and stab you with it" << endl;
								cout << "YOU HAVE DIED." << endl;
								cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
								cout << endl;
							}
							else if(sword == 0){
								cout << "They torture you for 8 hours straight and you die of blood loss" << endl;
								cout << "YOU HAVE DIED." << endl;
								cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
								cout << endl;
							}
						}
					}
				}
			}

		}
		/*************************************************************************************************************************************************/
		else if(sdirection == 3){
			cout << "You have chosen South!" << endl;
			cout << "Looking at your surrounding you have realized you are in a marsh biome." << endl;
			cout << "After some trekking through the marsh, you contract malaria and die. YOU HAVE DIED." << endl;
			cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
			cout << endl;
		}
		else if(sdirection == 4){
			cout << "You have chosen West!" << endl;
			cout << "Looking at your surroundings you hvae realized that you are at the beach!" <<endl;
			cout << "You walk up to near the water and notice a few mermaids playing in the water!" << endl;
			cout << "You start talking and chatting, after a decent amount of time talking," << endl;
			cout << "They offer to take you to their home town of Atlantis." << endl;
			cout << "Do you go? Yes(1) or No(0)" << endl;
			cin >> atlantisop;
			cout << endl;
			if (atlantisop == 1){
				cout << "You have chosen to go with the mermaids!" << endl;
				cout << "After a few minutes diving under water..." << endl;
				cout << "The mermaids lied to you and turn on you!!" << endl;
				cout << "What do you do? Panic(0) or Fight(1)" << endl;
				cin >> mermaidop;
				cout << endl;
				if (mermaidop == 1){
					cout << "You have chosen to fight" << endl;
					cout << "The mermaids have the home field advantage underwater" << endl;
					cout << "They out manuever you and land a critcal blow, paralyzing you" << endl;
					cout << "They start to eat you alive" << endl;
					cout << "YOU HAVE DIED." << endl;
					cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
					cout << endl;
				}
				else if(mermaidop == 0){
					cout << "You have chosen to panic" << endl;
					cout << "You are frozen in place with fear" << endl;
					cout << "When the first mermaid come to attack..." << endl;
					cout << "You hear a voice in your head saying, 'You have power my son'" << endl;
					cout << "Then almost immediately you feel a sudden urge of strength!" << endl;
					cout << "You defeat the mermaids easily, but 1 gets away saying..." << endl;
					cout << "HE'S THE SON OF POSEIDON!!!!!" << endl;
					cout << "You make it back to the surface, and head towards New York." << endl;
					cout << "You hear there is a camp for people just like you." << endl;
					cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!!" << endl;
					cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
					cout << endl;

				}
			}
			else if(atlantisop == 0){
				cout << "You have chosen not to go with the mermaids!" << endl;
				cout << "What do you do instead? Treasure Hunt(1) or Just Chill At The Beach(0)?" << endl;
				cin >> beachop1;
				cout << endl;
				if(beachop1 == 1){
					cout << "You have chosen to go Treasure Hunting!" << endl;
					cout << "After looking for several hours..." << endl;
					cout << "You find a treasure burried deep in the sand!" << endl;
					cout << "The treasure chest is locked. What do you do?" << endl;
					cout << "Try to pick lock(1) or Just Walk Away(0)" << endl;
					cin >> treasureop1;
					cout << endl;
					if(treasureop1 == 0){
						cout << "You have chosen to just give up" << endl;
						cout << "You spend the rest of the day finding another treasure..." << endl;
						cout << "But to no prevail..." << endl;
						cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!!" << endl;
						cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
						cout << endl;
					}
					else if(treasureop1 == 1){
						cout << "You have chosen to pick the lock!" << endl;
						cout << "The lock is binary 4 pin number!" << endl;
						cout << "Enter the first pin number:" << endl;
						cin >> pin1;
						cout << "Enter the second pin number:" << endl;
						cin >> pin2;
						cout << "Enter the third pin number:" << endl;
						cin >> pin3;
						cout << "Enter the fourth pin number:" << endl;
						cin >> pin4;
						w =0; //rand()%2;
						x =0; //rand()%2;
						y =0; //rand()%2;
						z =0; //rand()%2;
						while(((pin1 != w)||(pin2 != x)||(pin3 != y)||(pin4 != z))&&(counter !=4)){
							cout << "The treasure chest did not open!" << endl;
							cout << "TRY AGAIN!!" << endl;
							cout << "First:" << endl;
							cin >> pin1;
							cout << "Second:" << endl;
							cin >> pin2;
							cout << "Third:" << endl;
							cin >> pin3;
							cout << "Fourth:" << endl;
							cin >> pin4;
							counter = counter+1;
							cout << endl;

						}
						if((counter == 4)&&(pin1 != w)&&(pin2 != x)&&(pin3 != y)&&(pin4 != z)){
							cout << "YOU TOOK TOO LONG TO FIGURE OUT THE COMBINATION" << endl;
							cout << "The beach patrol takes away the found treasure" << endl;
							cout << "You cry yourself to sleep." << endl;
							cout << "GAME OVER" << endl;
							cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
							cout << endl;
						}
						else if((pin1 == w)&&(pin2 == x)&&(pin3 == y)&&(pin4 == z)){
							cout << "You cracked the combination!!" << endl;
							cout << "Inside the treasure chest is..." << endl;
							cout << "A single sword, made entirely out of melted gold." << endl;
							cout << "Do you sell the item? Yes(1) or No(0)" << endl;
							cin >> sellc;
							cout << endl;
							if (sellc == 1){
								cout << "You've chosen to sell the item!" << endl;
								cout << "You sold the item for 1 million dollars!!" << endl;
								cout << "YOU ARE NOW A MILLIONAIRE" << endl;
								cout << "YOU HAVE SUCCESSFULLY MADE IT THROUGH THE GAME!!" << endl;
								cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
								cout << endl;
							}
							else if(sellc == 0){
								cout << "You've chosen to keep the item!" << endl;
								cout << "Keeping this item created a habit..." << endl;
								cout << "You become a hoarder for the rest of your life." << endl;
								cout << "GAME OVER." << endl;
								cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
								cout << endl;
							}
						}

					}
				}
				else if(beachop1 == 0){
					cout << "You have chosen to Just Chill At The Beach!" << endl;
					cout << "You take the day off and relax at the beach!" << endl;
					cout << "YOU SUCCESSFULLY MADE IT THROUGH THE GAME!!" << endl;
					cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
					cout << endl;
				}
			}
		}
		else{
			cout << "You did not comply to the rules of the game. YOU HAVE DIED." << endl;
			cout << "Do you wish to play again? Yes(1) or No(0)" << endl; cin >> game;
			cout << endl;
		}
	}
	return 0;


}
