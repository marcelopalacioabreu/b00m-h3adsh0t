# b00m-h3adsh0t! &#x1F537;
**Neural Network Configurable Aimbot for First-Person-Shooter Games** 
*Note: Aimbots are cheats and illegal in gaming leagues. This repo is solely for educational purposes only.*

> **┬┴┬┴┬┴┤ (҂   ` ﾛ ´)︻デ═一      ＼(º □ º )/	├┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴**

<div>
  
  [![Status](https://img.shields.io/badge/status-work--in--progress-success.svg)]()
  [![GitHub Issues](https://img.shields.io/github/issues/lucylow/b00m-h3adsh0t.svg)](https://github.com/lucylow/Mrs.Robot/issues)
  [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/lucylow/b00m-h3adsh0t.svg)](https://github.com/lucylow/b00m-h3adsh0t/pulls)
  [![License](https://img.shields.io/bower/l/bootstrap)]()

</div>

---   
   
## B00m-h3adsh0t! Aimbot &#x1F537;
* Game bot used in first-person shooting (FPS) games where players need to constantly move, think, strategize, and shoot enemies all at once
* Aimbot uses game data to shoot at the heads of energy targets
* Ex: *“Turn off the aimbot you noob K/D ratio hacker!"*



---

## Aimbot Neural Network &#x1F537;
* Trained by neural network (NN)
* **Customizable predictions and dynamic speed settings**
* Colored models 
* Engine-Aim:
  * Hook into the half-life game engine - uses ACTUAL game data to auto-aim without altering gaming files
  * Modifies memory of RAM half-life runs on 
  * Gathers information from current game and pixel location
* Select which FPS game you will use (Fortnite/CombatArms/League_of_Legends)
  
---

## Model Training Recognization  &#x1F537;
* Custom training mode 
* **Enter to train NN to detect objects for object recognition using computer vision algorithms** 
* Train with range of distances, lights, and angles for best possible recognition
* Name-tag display to detect players 
* Pixel memory hack
* Resolution range 

---


## How it Works  &#x1F537;
* Aimbot can be easily toggled on and off using the mouse or keyboard
* Recognizes game objects in a certain range, then aims at the objects
* Neural Network 
    * Program takes **multiple screenshots** to recognize objects 
    * Different distances, lights, angles for best possible recognition 
    * Output - program writes in **cfg file** 
      * Batch = 1
      * Subdivision = 1 for testing 
    * Graph of **Training/Validation Set**
      * x vs y 
      * Error Rate vs Number of Iterations in Training Set 
* Training depenencies - Trained files for games
    * **config.json file** - to change the resolution range for object recognition  
    * Train Files Folder
      * darknet folder/subfolders 
      * data or back up
      * GAME.names
      * GAME.cfg
      * GAME_last.weights 
      * GAME.weights

---

## Client Server Back-End Implementation &#x1F537;
* Client–Server model
  * Server is responsible for information security and enforcing game rules 
  * Model calculating and sending game results for display on an instantantaneous basis
  * Trusting client to calculate and display results in appropriate sequence as player progresses
  * No information sent from client accepted by a server if it breaks game rules or basic mechanics of the game
  * Common practice to run the client game sessions synchronously on the server, using exactly the same user input
  * Client session is reset when the game sessions become unsynced, thereby preventing cheating.


  
* Back-end Hack Implementation
  * Server with no rule enforcement or data integrity checking will synchronize all of the clients with all of the information about all of the other clients. 
  * Any wallhack program will reveal where all the players in the game are, what team they are on, and what state they're in — health, weapon, ammo etc. 
  * Data from client will allow a player to break the game rules, manipulate the server, and even manipulate other clients.

* Two client functionality options:
  1) Runs purely on the game server
  2) Game server mirrors client gameplay and continuously validates game state

* Modifying game software using reverse engineering  
  * Illegal according to ULAs :(
  * Game itself or 3rd-party protection system may detect aimbot
  

* Security vs Efficiency Server Options
  1) Sending game world state needed for immediate display, which can result in client lag under bandwidth constraints
  2) Sending the player the entire world state, which results in faster display for the player under the same bandwidth constraints, but exposes that data to interception or manipulation—a trade-off between security and efficiency


---

## PLayer Statistics and Analytics &#x1F537;
* Pattern Detection Systems 
  * Scan player's hard drives for known cheat code or programs
  * Scan player's system memory for known cheat code or programs
  * Labor-intensive to constantly track down cheats and update detection patterns
  
* Player Behavior Anomalie Detection 
  * Detected by statistically analyzing game events 
  * Data sent by client to  server by statistical detection systems
  * Add human element of supervision system (community/admin team looks over player statistics) 
  * Unusual player behavior leads to clientside creating then uploading a gamer report
  
* Anti–Cheat Method 
  * Guaranteed to work on all end–user system configurations
  * Reduce the amount of false positives


---

## User Privacy &#x1F537;
* End–users concerned with privacy issues
* VAC (Valve Anti-Cheat) accessing browsing history
* Man-in-the-middle attack
  * Security of game circumvented by intercepting or manipulating data in real-time while transit from the client to the server or vice versa 
  * Performed on client machine itself or via external communication proxy
* "Never trust the client" common saying with game developers 
* User privacy compromsed with packet interception/manipulation 



---

## Player Attacks &#x1F537;
* Select button to attack and enable/disable training mode
* Custom zooming control with scroll wheel 
* Custom cursors 
* Laser sight
* Trigger bot
* Auto shoot/rapid fire 
  * Most fps games limit the rate weapons are fired regardless of how fast a player presses buttons
  * Binding the firing button to the scroll wheel of a mouse
  * Macro setting that will simulate rapid key presses automatically
* Auto clicker for semi automatic weapons 
* Dynamic recoil control  
  * Remove gun revoil game element
  * control bullet spread
* Move speed
* Ammo count
* Player radar 

---


## Other Glitches/Modifications  &#x1F537;
* Wall hacks
  * Glitches with game surfaces
  * Graphics driver modifications that ignore depth checking
  * draw all objects on the screen
* Reduced flash 
* Transparent buildings, ceilings, obstacles, and trees
  * Remove visual elements of the game 
* Display enemy lines 
* Extrasensory perception



---
