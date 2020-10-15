#include <iostream>
#include <string>

//Enum to store the different room id's
enum Rooms : short
{
	CryoChamber1,
	CryoChamber2,
	SecurityRoom,
	ElectricalRoom,
	RecreationRoom,
	OverseersRoom,
	EntranceRoom,
	ElevatorRoom
};

bool evac_tunnel_door_opened = false;
bool vault_door_unlocked = false;
bool aquired_bobby_pin = false;
int inventory[] = { -1,-1,-1,-1 };

//Gameplay Varibles
bool running = true; //boolean to say if the game is running

int main()
{
	//Setting the game varibles
	Rooms room = CryoChamber1;
	short roomSelectionNumber = -1;

	while (running){
		system("cls");
		switch (room) {
		case CryoChamber1: //Check if the player is in Cryo Chamber 1
			std::cout << "\033[0mYou are in " << "\033[35m" << "Cryo Chamber 1" << "\033[0m" << std::endl;
			std::cout << "You see a terminal next to the exit door" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Cryo Chamber 2\n[1]  Enter Entrance Room\n[2]  Enter Security Room\n[3]  Enter Electrical Room\n[4]  Enter Recreation Room\n[5]  Look On Vault 111 Monitoring terminal\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) room = CryoChamber2;
			else if (roomSelectionNumber == 1) {
				if (evac_tunnel_door_opened) room = EntranceRoom;
				else std::cout << "You try to open the door to the entrance room but its sealed shut. it appears it needs a terminal to unlock it\n\n" << std::endl;
				system("pause");
			}
			else if (roomSelectionNumber == 2) room = SecurityRoom;
			else if (roomSelectionNumber == 3) room = ElectricalRoom;
			else if (roomSelectionNumber == 4) room = RecreationRoom;
			else if (roomSelectionNumber == 5) {
				while (true) {
					system("cls");
					std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\n[0]  <<\n[1]  Cryogenetic Array\n[2]  Life Support\n[3]  Pod Occupant Status\nEnter Id: ";
					std::cin >> roomSelectionNumber;
					if (roomSelectionNumber == 0) break;
					else if (roomSelectionNumber == 1) {
						system("cls");
						std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nCryogenic Array: Offline. Premature termination resulting in system failure.\nIsolated manual and remote overrides detected. Controls disabled.\n\n\n";
						system("pause");
					}
					else if (roomSelectionNumber == 2) {
						system("cls");
						std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nLife Support: Offline. Premature termination resulting in system failure.\nIsolated manual and remote overrides detected. Controls disabled.\n\n\n";
						system("pause");
					}
					else if (roomSelectionNumber == 3) {
						while (true) {
							system("cls");
							std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\n[0]  <<\n[1]  Pod C1: Empty\n[2]  Pod C2: Mrs. Callahan\n[3]  Pod C3: Mr. Callahan\n[4]  Pod C4: Mr. Able\n[5]  Pod C5: Mrs. Able\n[6]  Pod C6: Nora and Shaun(infant)\n[7]  Pod C7: Nate\n[8]  Pod C8: Mr. Russel\nEnter Id: ";
							std::cin >> roomSelectionNumber;
							if (roomSelectionNumber == 0) break;
							else if (roomSelectionNumber == 1) {
								system("cls");
								std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nOccupant Status: Not Applicable.\n\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 2 || roomSelectionNumber == 3 || roomSelectionNumber == 4 || roomSelectionNumber == 5 || roomSelectionNumber == 8) {
								system("cls");
								std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nOccupant Status: Deceased. Cause of Death: Asphyxiation due to Life Support failure.\n\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 6) {
							system("cls");
							std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nOccupant Status: Unknown -- Pod Door Manual Override Engaged.\n\n\n";
							system("pause");
							}
							else if (roomSelectionNumber == 7) {
							system("cls");
							std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nOccupant Status: Unknown -- Remote Override Engaged.\n\n\n";
							system("pause");
							}
						}
					}
				}
			}
			else continue;
			break;
		case CryoChamber2:  //Check if the player is in Cryo Chamber 2
			std::cout << "\033[0mYou are in " << "\033[35m" << "Cryo Chamber 2" << "\033[0m" << std::endl;
			std::cout << "You see a terminal on the other side of the room and a clipboard ontop of a box" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Cryo Chamber 1\n[1]  Enter Entrance Room\n[2]  Enter Security Room\n[3]  Enter Electrical Room\n[4]  Enter Recreation Room\n[5]  Look On Vault 111 Monitoring terminal\n[6]  Look at Clipboard\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) room = CryoChamber1;
			else if (roomSelectionNumber == 1) {
				if (evac_tunnel_door_opened) {
					room = EntranceRoom;
					break;
				}
				else std::cout << "You try to open the door to the entrance room but its sealed shut. it appears it needs a terminal to unlock it\n\n" << std::endl;
				system("pause");
			}
			else if (roomSelectionNumber == 2) room = SecurityRoom;
			else if (roomSelectionNumber == 3) room = ElectricalRoom;
			else if (roomSelectionNumber == 4) room = RecreationRoom;
			else if (roomSelectionNumber == 5) {
				while (true) {
					system("cls");
					std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\n[0]  <<\n[1]  Cryogenetic Array\n[2]  Life Support\n[3]  Pod Occupant Status\nEnter Id: ";
					std::cin >> roomSelectionNumber;
					if (roomSelectionNumber == 0) break;
					else if (roomSelectionNumber == 1) {
						system("cls");
						std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nCryogenic Array: Offline. Premature termination resulting in system failure.\nIsolated manual and remote overrides detected. Controls disabled.\n\n\n";
						system("pause");
					}
					else if (roomSelectionNumber == 2) {
						system("cls");
						std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nLife Support: Offline. Premature termination resulting in system failure.\nIsolated manual and remote overrides detected. Controls disabled.\n\n\n";
						system("pause");
					}
					else if (roomSelectionNumber == 3) {
						while (true) {
							system("cls");
							std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\n[0]  <<\n[1]  Pod B1: Dr. DiPietro\n[2]  Pod B2: Cindy Cofran\n[3]  Pod B3: Mrs. Whitefield\n[4]  Pod B4: Mrs. Cofran\n[5]  Pod B5: Mr. Whitefield\n[6]  Pod B6: Mr. Cofran\nEnter Id: ";
							std::cin >> roomSelectionNumber;
							if (roomSelectionNumber == 0) break;
							else if (roomSelectionNumber > 0 && roomSelectionNumber < 7) {
								system("cls");
								std::cout << "Welcome to ROBCO Industries (TM) Termlink\nThank you for choosing Vault-Tec\n\nOccupant Status: Deceased. Cause of Death: Asphyxiation due to Life Support failure.\n\n\n";
								system("pause");
							}
						}
					}
				}
			}
			else if (roomSelectionNumber == 6) {
				if (inventory[0] == -1) {
					std::cout << "You take a look at the clipboard and see a peice of paper with the number 5 on it.\nYou're not sure what it's for so you put it in your pocket and place the clipboard down.\n\n" << std::endl;
					inventory[0] = 5;
				}
				else
					std::cout << "There appears to be nothing on the clipboard so you put it back.\n\n";
				system("pause");
			}
			else continue;
			break;
		case SecurityRoom: //Check if player is in Security room
			std::cout << "\033[0mYou are in " << "\033[35m" << "Security Room" << "\033[0m" << std::endl;
			std::cout << "You see a terminal next to a file cabinet" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Cryo Chamber 1\n[1]  Enter Cryo Chamber 2\n[2]  Enter Entrance Room\n[3]  Enter Electrical Room\n[4]  Enter Recreation Room\n[5]  Look on Security Terminal\n[6]  Look inside file cabinet\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) room = CryoChamber1;
			else if (roomSelectionNumber == 1) room = CryoChamber2;
			else if (roomSelectionNumber == 2) {
				if (evac_tunnel_door_opened) {
					room = EntranceRoom;
					break;
				}
				else std::cout << "You try to open the door to the entrance room but its sealed shut. it appears it needs a terminal to unlock it\n\n" << std::endl;
				system("pause");
			}
			else if (roomSelectionNumber == 3) room = ElectricalRoom;
			else if (roomSelectionNumber == 4) room = RecreationRoom;
			else if (roomSelectionNumber == 5) {
				while (true) {
					system("cls");
					std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\n[0]  <<\n[1]  VAULT 111 SECURITY INSTRUCTIONS\n[2]  Operations Protocol\n[3]  Security Logs\nEnter Id: ";
					std::cin >> roomSelectionNumber;
					if (roomSelectionNumber == 0) break;
					else if (roomSelectionNumber == 1) {
						system("cls");
						std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nCONFIDENTIAL CONFIDENTIAL CONFIDENTIAL\nSECURITY EYES ONLY | VIOLATION VTP-01011\n\nVault 11 is designed to test the long-term effect of suspended animation on unaware, human subjects. Security staff are responsible for maintaining installation integrity and monitoring science staff activity\n\nUnder no circumstances are staff allowed to deviate from assigned duties. Insubordination or interference with vault operations are capital offences. Security staff are authorized to use lethal force.\n\n";
						system("pause");
					}
					else if (roomSelectionNumber == 2) {
						while (true) {
							system("cls");
							std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\n[0]  <<\n[1]  Resident Admittance\n[2]  Staff Duties\n[3]  All Clear & Evacuation\nEnter Id: ";
							std::cin >> roomSelectionNumber;
							if (roomSelectionNumber == 0) break;
							else if (roomSelectionNumber == 1) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nUpon Activation Notice from Vault-Tec, all personnel are required to report to the Entry Area and assist with admittance of Vault Residents. Security Personnel will maintain order and ensure that no personnel or residents attempt to evacuate the Vault\n\nResearch staff will be responsible for resident intake and escort each to the designated cryogenic pod. Residents not accounted for in the manifest should be asked to step aside and detained forcefully by security if necessary.\n\nOnce all residents have been sealed into their preservation chambers dispose of any detainees. Vault entryway must remain sealed under any circumstances\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 2) {
								while (true) {
									system("cls");
									std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\n[0]  <<\n[1]  Science Staff\n[2]  Security personnel\n[3]  Facility Services & Maintenance\nEnter Id: ";
									std::cin >> roomSelectionNumber;
									if (roomSelectionNumber == 0) break;
									else if (roomSelectionNumber == 1) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nMembers of the research team must daily monitor the vital signs of cryogenically preserved residents. Cardiopulmonary and cognitive activity in particular must be recorded hourly\n\nLife-saving intervention is only permitted if greater than 80% of the resident population has perished while in cryogenic suspension, and must not interrupt suspension\n\nIndependent research is encouraged, and left to Overseer discretion\n\n";
										system("pause");
									}
									else if (roomSelectionNumber == 2) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nSecurity patrols are to be carried out on a constant eight-hour rotation. Security priorities include:\n- Monitoring for signs of intrusion\n- Checking for atmosphere leaks\n- Settling disputes among personnel\n- Enforcement of regulations set forth by the Overseer\n- Enforcement of regulations set forth by Vault-Tec\n\n";
										system("pause");
									}
									else if (roomSelectionNumber == 3) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nDue to the nature of Vault 111, personnel will be expected to perform duties outside of their normal qualifications, such as janitorial duties and food preparation.\n\nThe exact distribution of these roles is left to Overseer description\n\n";
										system("pause");
									}
								}
							}
							else if (roomSelectionNumber == 3) {
								while (true) {
									system("cls");
									std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\n[0]  <<\n[1]  All-Clear Message\n[2]  Mandatory Shelter Period\nEnter Id: ";
									std::cin >> roomSelectionNumber;
									if (roomSelectionNumber == 0) break;
									else if (roomSelectionNumber == 1) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nFollowing a nuclear event, Vault-Tec will monitor hazards such as radiation levels, enemy invasion, subsequent attacks, and other factors. Once conditions are deemed safe, this terminal will receive an all-clear notice.\n\nUpon receiving the all-clear notice, Vault-Tec personnel may be evacuated at Overseer discretion. Disregard any notices from organizations or individuals not associated with Vault-Tec, including government and military. Residents are not to be disrupted or evacuated, Vault-Tec will attend to their needs remotely once Vault 111 staff has been evacuated.\n\n";
										system("pause");
									}
									else if (roomSelectionNumber == 2) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nVault 111 is classified as a short-term assignment, Non-resident personnel are expected to carry out research duties and basic maintenance of the Vault while awaiting the All-Clear signal to evacuate.\n\nIn the absence of an All-Clear message from Vault- Tec, the Overseer may elect to evacuate staff after a mandatory shelter period of 180 days of containment. Under no circumstances may Vault 111 staff evacuate during this shelter period, unless receiving the All-Clear message from Vault-Tec.\n\n";
										system("pause");
									}
								}
							}
						}
					}
					else if (roomSelectionNumber == 3) 
						while (true) {
							system("cls");
							std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\n[0]  <<\n[1]  October 23, 2077\n[2]  December 25, 2077\n[3]  March 14, 2078\n[4]  April 23, 2078\n[5]  LAST ENTRY\nEnter Id: ";
							std::cin >> roomSelectionNumber;
							if (roomSelectionNumber == 0) break;
							else if (roomSelectionNumber == 1) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nGod. It finally happened. The World's over. Barely got all the residents inside. Not everyone made it�\n\nNow it's just us and the icebergs. I don't get it. Eggheads tried to explain to me that keeping them frozen is a big experiment. For a better future or something. I don't know. It just doesn't seem right that we were smiling at them all that time before putting them on ice. Shouldn't we have told them something?\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 2) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nChristmas underground. Got together with the rest of the security boys and support staff and had a little party. Best gift that got handed out was a Fancy Lad Snack Cake that wasn't to stale\n\nNone of the scientists came. Overseer wasn't there either. I just don't get them. They hiding something from us? Another company secret only for the higher-ups?\n\nWhatever. Just a few more months until the all-clear is supposed to come through. Then we can start rebuilding\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 3) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nOnly a few weeks left in our mandatory shelter period. Everyone's getting stir crazy. Some people are even saying the all-clear signal is never coming. We can't stay here much longer, that's for sure. It's not jus the fact that I've been staring at the same break room and bunk bed for over six months. It's the fact that we only have enough food left for another few months. Tops.\n\nThe overseer keeps telling everyone to be patient, focus on work.He's defiantly keeping us out of the loop.Something bad is going in.I just know it.\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 4) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nThe main door accessing the vault exit is malfunctioning. Now the only way out is through the overseer's evacuation tunnel; how convenient for him. He has one of the science team watching the door into his office at all times for a little makeshift checkpoint\n\nGot invited to a meeting tonight.Support staffers and security only.Sounds like I'm not the only one with and axe to grind.\n\nI also found a scrap of paper with the number 8 on it. Seemed a bit random so I threw it in the bin\n\n";
								inventory[1] = 8;
								system("pause");
							}
							else if (roomSelectionNumber == 5) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: VAULT-TAC SECURITY\n\nNo all-clear from Vault-Tec is coming. We need to leave. We're all but out of food. I almost murdered Stanley for dropping a damn salt cracker on the floor.\n\nA handful of us confronted the overseer about opening up the vault.I never knew a man that small could shout that loud.Now he's locked himself in his office along with the rest of the science staff.We're supposed to hand over and food, weaponsand medicine we have by tonight, or there's �going to be consequences.�\n\nI've talked to everyone.It's time.One way or another.We're getting out the vault.\n\n";
								system("pause");
							}
						}
				}
			}
			else if (roomSelectionNumber == 6) {
				std::cout << "You look through the file cabinet but there appears to be nothing useful\n\n" << std::endl;
				system("pause");
			}
			else continue;
			break;
		case ElectricalRoom: //Check if player is in Electrical Room
			std::cout << "\033[0mYou are in " << "\033[35m" << "Electrical Room" << "\033[0m" << std::endl;
			std::cout << "You see a clipboard on top of a storage box" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Cryo Chamber 1\n[1]  Enter Cryo Chamber 2\n[2]  Enter Entrance Room\n[3]  Enter Security Room\n[4]  Enter Overseer's Room\n[5]  Enter Recreation Room\n[6]  Look at Clipboard.\n[7]  Look in storage box.\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) room = CryoChamber1;
			else if (roomSelectionNumber == 1) room = CryoChamber2;
			else if (roomSelectionNumber == 2) {
				if (evac_tunnel_door_opened) {
					room = EntranceRoom;
					break;
				}
				else std::cout << "You try to open the door to the entrance room but its sealed shut. it appears it needs a terminal to unlock it\n\n" << std::endl;
				system("pause");
			}
			else if (roomSelectionNumber == 3) room = SecurityRoom;
			else if (roomSelectionNumber == 4) room = OverseersRoom;
			else if (roomSelectionNumber == 5) room = RecreationRoom;
			else if (roomSelectionNumber == 6) {
				system("cls");
				std::cout << "You pick up the clipboard and look whats on it but it just appears to be notes from Vault-Tec security so you place it back down\n\n";
				system("pause");
			}
			else if (roomSelectionNumber == 7) {
				system("cls");
				if(aquired_bobby_pin && inventory[2] != -1)
					std::cout << "You open up the storage box but there appears to be nothing in it so you close it\n\n";
				else if (aquired_bobby_pin && inventory[2] == -1) {
					std::cout << "You open up the storage box but there appears to be a peice of paper with a 3 on it so you put it in your pocket and close the box\n\n";
					inventory[2] = 3;
				}
				else if(!aquired_bobby_pin)
					std::cout << "You try to open up the security box but it appears to be locked. \n'if only I had a bobby pin'\n\n";
				system("pause");
			}
			else continue;
			break;
		case RecreationRoom: //Check if player is in Recreation room
			std::cout << "\033[0mYou are in " << "\033[35m" << "Recreation Room" << "\033[0m" << std::endl;
			std::cout << "You see a locker, a bed and a terminal" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Cryo Chamber 1\n[1]  Enter Cryo Chamber 2\n[2]  Enter Entrance Room\n[3]  Enter Security Room\n[4]  Enter Electrical Room\n[5]  Look at Recreational Terminal\n[6]  Look in locker\n[7]  Check out bed\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) room = CryoChamber1;
			else if (roomSelectionNumber == 1) room = CryoChamber2;
			else if (roomSelectionNumber == 2) {
				if (evac_tunnel_door_opened) {
					room = EntranceRoom;
					break;
				}
				else std::cout << "You try to open the door to the entrance room but its sealed shut. it appears it needs a terminal to unlock it\n\n" << std::endl;
				system("pause");
			}
			else if (roomSelectionNumber == 3) room = SecurityRoom;
			else if (roomSelectionNumber == 4) room = ElectricalRoom;
			else if (roomSelectionNumber == 5) {
				system("cls");
				std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nVAULT-TEC RECREATIONAL TERMINAL\n\nRemember, use of the recreational terminal is a privilege. If work performance declines, this privilege may be revoked. Enjoy responsibly.\n\n";
				system("pause");
			}
			else if (roomSelectionNumber == 6) {
				std::cout << "You open the locker but it appear to be empty so you close it again\n\n";
				system("pause");
			}
			else if (roomSelectionNumber == 7) {
				std::cout << "You check out the bed and find a bobby pin under the pillow so you put it in your pocket\n\n";
				aquired_bobby_pin = true;
				system("pause");
			}
			else continue;
			break;
		case EntranceRoom: //Check if player is in Entrance room
			std::cout << "\033[0mYou are in " << "\033[35m" << "Entrance Room" << "\033[0m" << std::endl;
			std::cout << "You see a terminal" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Cryo Chamber 1\n[1]  Enter Cryo Chamber 2\n[2]  Enter Recreation Room\n[3]  Enter Security Room\n[4]  Enter Electrical Room\n[5]  Enter Overseer's Room\n[6]  Enter Elevator Room\n[7]  Look on Entrance Terminal\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) room = CryoChamber1;
			else if (roomSelectionNumber == 1) room = CryoChamber2;
			else if (roomSelectionNumber == 2) room = RecreationRoom;
			else if (roomSelectionNumber == 3) room = SecurityRoom;
			else if (roomSelectionNumber == 4) room = ElectricalRoom;
			else if (roomSelectionNumber == 5) room = OverseersRoom;
			else if (roomSelectionNumber == 6) {
				if (vault_door_unlocked) {
					room = ElevatorRoom;
					break;
				} else {
					std::cout << "the door for the elevator room appears to be the main vault door so you will need a terminal to unlock it.\n\n";
					system("pause");
				}
			}
			else if (roomSelectionNumber == 7) {
				while (true) {
					system("cls");
					std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\n";
					std::cout << "Passcode Numbers Found:\n1st - " << ((inventory[0] == -1) ? "Null" : std::to_string(inventory[0])) << "\n2nd  " << ((inventory[1] == -1) ? "Null" : std::to_string(inventory[1])) << "\n3rd  " << ((inventory[2] == -1) ? "Null" : std::to_string(inventory[2])) << "\n4th  " << ((inventory[3] == -1) ? "Null" : std::to_string(inventory[3]));
					std::cout << "\n[0]  <<\nEnter Id/Passcode: ";
					std::cin >> roomSelectionNumber;
					if (roomSelectionNumber == 0) break;
					else if (roomSelectionNumber == 3895) {
						system("cls");
						vault_door_unlocked = true;
						std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nThe main vault door is now open\n\n";
						system("pause");
					}
				}
			}
			else continue;
			break;
		case OverseersRoom: //Check if player is in Overseer's room
			std::cout << "\033[0mYou are in " << "\033[35m" << "Overseer's Room" << "\033[0m" << std::endl;
			std::cout << "You see a terminal, File Cabinet, Dresser and Locker" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Entrance Room\n[1]  Enter Electrical Room\n[2]  Look at Overseer's Ternimal\n[3]  Check out File Cabinet\n[4]  Look at Dresser\n[5]  Look through Locker\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) {
				if (evac_tunnel_door_opened) {
					room = EntranceRoom;
					break;
				}
				else std::cout << "You try to open the door to the entrance room but its sealed shut. it appears it needs a terminal to unlock it\n\n" << std::endl;
				system("pause");
			}
			else if (roomSelectionNumber == 1) room = ElectricalRoom;
			else if (roomSelectionNumber == 2) {
				while (true) {
					system("cls");
					std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\n[0]  <<\n[1]  VAULT 111 OVERSEER INSTRUCTIONS\n[2]  Cryolator\n[3]  Overseer's Log\n[4]  Operations Protocol Manual\n[5]  Open Evacuation Tunnel\nEnter Id: ";
					std::cin >> roomSelectionNumber;
					if (roomSelectionNumber == 0) break;
					else if (roomSelectionNumber == 1) {
						system("cls");
						std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nCONFIDENTIAL CONFIDENTIAL CONFIDENTIAL\nOVERSEER EYES ONLY | VIOLATION VTP-01011\n\nVault 111 is designed to test the long-term effects of suspended animation on unaware, human subjects.Yours staff will be on short-term assignment to monitor basic cardiopulmonary and cognitive functions.Long-term monitoring will be handled remotely by Vault-Tec technicians.\n\nUnder no circumstance is suspension to be disrupted.This includes the administration of life-saving measures.Your staff is also considered expendable.Insubordination or attempts to evacuate prematurely are capital violations.Unused cryogenic pods are the preferred method for cadaver disposal.\n\n";
						system("pause");
					}
					else if (roomSelectionNumber == 2) {
						system("cls");
						std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nI've long dreamed of making cryogenic freezing available in portable, on-demand form. The Cryolator is my latest attempt. Thankfully, we're in no short supply of the chemicals and components I need to tinker with the prototype. It's a nice way to occupy the time as we wait for the all-clear signal\n\n";
						system("pause");
					}
					else if (roomSelectionNumber == 3) {
						while (true) {
							system("cls");
							std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\n[0]  <<\n[1]  Resident Admittance\n[2]  Staff Duties\n[3]  All Clear & Evacuate\nEnter Id: ";
							std::cin >> roomSelectionNumber;
							if (roomSelectionNumber == 0) break;
							else if (roomSelectionNumber == 1) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nUpon Activation Notice from Vault-Tec, all personnel are required to report to the Entry Area and assist with admittance of Vault Residents. Security Personnel will maintain order and ensure that no personnel or residents attempt to evacuate the Vault\n\nResearch staff will be responsible for resident intakeand escort each to the designated cryogenic pod.Residents not accounted for in the manifest should be asked to step asideand detained forcefully by security if necessary.\n\nOnce all residents have been sealed into their preservation chambers dispose of any detainees.Vault entryway must remain sealed under any circumstances\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 2) {
								while (true) {
									system("cls");
									std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\n[0]  <<\n[1]  Science Staff\n[2]  Security Personnel\n[3]  Facility Services & Maintenance\nEnter Id: ";
									std::cin >> roomSelectionNumber;
									if (roomSelectionNumber == 0) break;
									else if (roomSelectionNumber == 1) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nMembers of the research team must daily monitor the vital signs of cryogenically preserved residents. Cardiopulmonary and cognitive activity in particular must be recorded hourly.\n\nLife-saving intervention is only permitted if greater than 80 % of the resident population has perished while in cryogenic suspension, and must not interrupt suspension.\n\nIndependent research is encouraged, and left to Overseer discretion\n\n";
										system("pause");
									}
									else if (roomSelectionNumber == 2) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nSecurity patrols are to be carried out on a constant eight-hour rotation. Security priorities include:\n- Monitoring for signs of intrusion\n- Checking for atmosphere leaks\n- Settling disputes among personnel\n- Enforcement of regulations set forth by the Overseer\n- Enforcement of regulations set forth by Vault-Tec\n\n";
										system("pause");
									}
									else if (roomSelectionNumber == 3) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nDue to the nature of Vault 111, personnel will be expected to perform duties outside of their normal qualifications, such as janitorial duties and food preparation.\nThe exact distribution of these roles is left to Overseer description\n\n";
										system("pause");
									}
								}
							}
							else if (roomSelectionNumber == 3) {
								while (true) {
									system("cls");
									std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\n[0]  <<\n[1]  All-Clear Message\n[2]  Mandatory Shelter Period\nEnter Id: ";
									std::cin >> roomSelectionNumber;
									if (roomSelectionNumber == 0) break;
									else if (roomSelectionNumber == 1) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nFollowing a nuclear event, Vault-Tec will monitor hazards such as radiation levels, enemy invasion, subsequent attacks, and other factors. Once conditions are deemed safe, this terminal will receive an all-clear notice.\n\nUpon receiving the all-clear notice, Vault-Tec personnel may be evacuated at Overseer discretion.Disregard any notices from organizations or individuals not associated with Vault-Tec, including governmentand military.Residents are not to be disrupted or evacuated, Vault-Tec will attend to their needs remotely once Vault 111 staff has been evacuated.\n\n";
										system("pause");
									}
									else if (roomSelectionNumber == 2) {
										system("cls");
										std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nVault 111 is classified as a short-term assignment, Non-resident personnel are expected to carry out research duties and basic maintenance of the Vault while awaiting the All-Clear signal to evacuate.\n\nIn the absence of an All-Clear message from Vault-Tec, the Overseer may elect to evacuate staff after a mandatory shelter period of 180 days of containment.Under no circumstances may Vault 111 staff evacuate during this shelter period, unless receiving the All-Clear message from Vault-Tec.\n\n";
										system("pause");
									}
								}
							}
						}
					}
					else if (roomSelectionNumber == 4) {
						while (true) {
							system("cls");
							std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\n[0]  <<\n[1]  Preperations\n[2]  October 23\n[3]  Systems Malfunction\n[4]  Supplies Running Low\n[5]  Mutiny\nEnter Id: ";
							std::cin >> roomSelectionNumber;
							if (roomSelectionNumber == 0) break;
							else if (roomSelectionNumber == 1) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nThe final staff orientation is complete, all but a few of the residents down in Sanctuary Fills have been enrolled, all several from Concord as well. Vault-Tec supervisors came up this week to do a technical review with me. This vault is ready to open.\n\nI can only imagine what wonders our residents will get to witness.The notion of leaping forward in time � I almost with I could join them and see the promise of our future realised\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 2) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nIt's happened. We were lucky that most of the staff was nearby when the early warning came through. We had less notice than expected, but only Nordhagen was missing when we sealed the entrance.\n\nResident Admittance went smoothly.Everyone made it, even the family that waited until the last minute.I was worries there would be more suspicion, but things happened so fast for these people.They must have been too overwhelmed to question the cryogenic pods.\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 3) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nStrange issue today with pod C3. Subject appeared to be having heart palpitations. Nothing life-threatening, but unusual. We realised almost too late that the pod was malfunctioning. The cryogenic array almost started thawing her out.\n\nWe're not sure, but I suspect a hiccup in Vault-Tec's remote override systems may have sent an errant signal.We'll have to keep an eye out.I only hope their systems are reliable once we evacuate staff.\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 4) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nThere's been no All-Clear signal yet, even though we're nearing the end of the 180 day Mandatory Shelter period. Supplies were never intended to last much more than that, and despite my best efforts, people are beginning to question what we're doing down here.\n\nIf people think we can just leave when the 180 days are up, they're insane.The radioactive exposure would still be potent enough to fry everyone if the Vault seals are breached that early.The whole point of the All-Clear was to receive additional instructions from the main office.\n\nI don't know what to do.I can't open the Vault.I can't expect our supplies to last forever.I just have to keep everything under control until the All-Clear�\n\n";
								system("pause");
							}
							else if (roomSelectionNumber == 5) {
								system("cls");
								std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nA faction led by the security personnel have turned on me, demanding they be allowed to leave the Vault. Idiots. I will not open the door to be irradiated to death out there.\n\nI'm consolidating the remaining supplies, putting the staff on lockdown.We're going to have to start prioritizing who deserves what little food we have left.I've been too damn generous with the rations.\n\nif people don't like it.Well, that's fewer mouths to feed...\n\n";
								system("pause");
							}
						}
					}
					else if (roomSelectionNumber == 5) {
						system("cls");
						evac_tunnel_door_opened = true;
						std::cout << "\033[32mWelcome to ROBCO Industries (TM) Termlink\nClearance: Overseer Eyes Only\n\nThe personnel evacuation tunnel is now open. Remind all staff to be orderly and follow shutdown protocols before exiting and resealing Vault 111\n\nPlease maintain all staff records and research. Report to your local Vault-Tec superiors for debriefing and further instruction.\n\n";
						system("pause");
					}
				}
			}
			else if (roomSelectionNumber == 3) {
				system("cls");
				if (inventory[3] == -1) {
					std::cout << "You open the file cabinet and see a peice of paper with a 9 on it so you put it in your pocket, you then close the file cabinet.\n\n";
					inventory[3] = 9;
				}
				else
					std::cout << "You open the file cabinet but there appears to be nothing in it so you close the file cabinet.\n\n";
				system("pause");
			}
			else if (roomSelectionNumber == 4) {
				system("cls");
				std::cout << "You look through the dresser but find nothing of intrest.\n\n";
				system("pause");
			}
			else if (roomSelectionNumber == 5) {
				system("cls");
				std::cout << "you open up the locker but it appear to be empty so you close it again.\n\n";
				system("pause");
			}
			else continue;
			break;
		case ElevatorRoom: //Check if player is in Elevator room
			std::cout << "\033[0mYou are in " << "\033[35m" << "Elevator Room" << "\033[0m" << std::endl;
			std::cout << "What do you want to do next:\n[0]  Enter Entrance Room\n[1]  Exit Vault 111\nEnter Id: ";
			std::cin >> roomSelectionNumber;
			if (roomSelectionNumber == 0) room = EntranceRoom;
			else if (roomSelectionNumber == 1) {
				system("cls");
				std::cout << "you go up the elevator and off into the wasteland..\n\n";
				system("pause");
				system("exit");
			}
			else continue;
			break;
		}
	}
}
